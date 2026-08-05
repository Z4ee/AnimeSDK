#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_4_425BBC3CBFD638A0;
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_AAC5CA68D8B01888_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x141A9790)
#define CLASS_4_AAC5CA68D8B01888_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x141A91C0)
#define CLASS_4_AAC5CA68D8B01888_METHOD_4_8A65350B66F13E72_OFFSET UNITYSDK_OFFSET(0x141A92A0)
#define CLASS_4_AAC5CA68D8B01888__CTOR_OFFSET UNITYSDK_OFFSET(0x141A96E0)

inline static constexpr unsigned int Class_4_AAC5CA68D8B01888_TypeDefinitionIndex = 70194;

class Class_4_AAC5CA68D8B01888 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_1; // 0x28
	::Class_4_425BBC3CBFD638A0* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AAC5CA68D8B01888__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AAC5CA68D8B01888_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_8A65350B66F13E72(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_AAC5CA68D8B01888_METHOD_4_8A65350B66F13E72_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AAC5CA68D8B01888_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
