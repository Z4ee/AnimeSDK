#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_4DA4D504D9FFAC2E_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12B59780)
#define CLASS_4_4DA4D504D9FFAC2E_METHOD_4_215BC775FC275482_OFFSET UNITYSDK_OFFSET(0x12B598D0)
#define CLASS_4_4DA4D504D9FFAC2E_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12B59CB0)
#define CLASS_4_4DA4D504D9FFAC2E__CTOR_OFFSET UNITYSDK_OFFSET(0x12B59B80)

inline static constexpr unsigned int Class_4_4DA4D504D9FFAC2E_TypeDefinitionIndex = 86416;

class Class_4_4DA4D504D9FFAC2E : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_2; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4DA4D504D9FFAC2E__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4DA4D504D9FFAC2E_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_215BC775FC275482(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_4DA4D504D9FFAC2E_METHOD_4_215BC775FC275482_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_4DA4D504D9FFAC2E_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
