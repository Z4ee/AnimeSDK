#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_CBA560E7E98B837F_METHOD_4_1C008C62BF8D9732_OFFSET UNITYSDK_OFFSET(0x176C7A10)
#define CLASS_4_CBA560E7E98B837F_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x176C7C70)
#define CLASS_4_CBA560E7E98B837F_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x176C7930)
#define CLASS_4_CBA560E7E98B837F__CTOR_OFFSET UNITYSDK_OFFSET(0x176C7B80)

inline static constexpr unsigned int Class_4_CBA560E7E98B837F_TypeDefinitionIndex = 48824;

class Class_4_CBA560E7E98B837F : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_7; // 0x28
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CBA560E7E98B837F__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CBA560E7E98B837F_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_1C008C62BF8D9732(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_CBA560E7E98B837F_METHOD_4_1C008C62BF8D9732_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_CBA560E7E98B837F_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
