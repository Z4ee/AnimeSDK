#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_E23DB6A6F5ED56CF_1_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x10D0DCF0)
#define CLASS_4_E23DB6A6F5ED56CF_1_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x10D0D9D0)
#define CLASS_4_E23DB6A6F5ED56CF_1_METHOD_4_73B4FE09D697EB6E_OFFSET UNITYSDK_OFFSET(0x10D0DAB0)
#define CLASS_4_E23DB6A6F5ED56CF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10D0DC00)

inline static constexpr unsigned int Class_4_E23DB6A6F5ED56CF_1_TypeDefinitionIndex = 86358;

class Class_4_E23DB6A6F5ED56CF_1 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E23DB6A6F5ED56CF_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E23DB6A6F5ED56CF_1_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_73B4FE09D697EB6E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_E23DB6A6F5ED56CF_1_METHOD_4_73B4FE09D697EB6E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E23DB6A6F5ED56CF_1_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
