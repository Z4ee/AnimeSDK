#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_D13DA0F607F6D07C_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1476A340)
#define CLASS_4_D13DA0F607F6D07C_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x14769BF0)
#define CLASS_4_D13DA0F607F6D07C_METHOD_4_B5CEF7C539A7DC9B_OFFSET UNITYSDK_OFFSET(0x14769CD0)
#define CLASS_4_D13DA0F607F6D07C__CTOR_OFFSET UNITYSDK_OFFSET(0x1476A250)

inline static constexpr unsigned int Class_4_D13DA0F607F6D07C_TypeDefinitionIndex = 48364;

class Class_4_D13DA0F607F6D07C : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_0; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D13DA0F607F6D07C__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D13DA0F607F6D07C_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_B5CEF7C539A7DC9B(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_D13DA0F607F6D07C_METHOD_4_B5CEF7C539A7DC9B_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D13DA0F607F6D07C_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
