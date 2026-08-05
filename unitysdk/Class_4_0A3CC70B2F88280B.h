#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_0A3CC70B2F88280B_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1263CEC0)
#define CLASS_4_0A3CC70B2F88280B_METHOD_4_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x1263CB70)
#define CLASS_4_0A3CC70B2F88280B_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1263CAE0)
#define CLASS_4_0A3CC70B2F88280B_METHOD_4_AF5420F4225611AD_OFFSET UNITYSDK_OFFSET(0x1263CBE0)
#define CLASS_4_0A3CC70B2F88280B__CTOR_OFFSET UNITYSDK_OFFSET(0x1263CE20)

inline static constexpr unsigned int Class_4_0A3CC70B2F88280B_TypeDefinitionIndex = 80848;

class Class_4_0A3CC70B2F88280B : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0A3CC70B2F88280B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0A3CC70B2F88280B_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_0A3CC70B2F88280B_METHOD_4_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_AF5420F4225611AD(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_0A3CC70B2F88280B_METHOD_4_AF5420F4225611AD_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0A3CC70B2F88280B_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
