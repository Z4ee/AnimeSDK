#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/InLevelCustomPerformerRunnerEnvironment.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_4_425BBC3CBFD638A0;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_FF6913E48F85E22D_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12AA2420)
#define CLASS_4_FF6913E48F85E22D_METHOD_4_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x12AA1E40)
#define CLASS_4_FF6913E48F85E22D_METHOD_4_652514A15DC5E0CD_OFFSET UNITYSDK_OFFSET(0x12AA1FF0)
#define CLASS_4_FF6913E48F85E22D__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA22E0)

inline static constexpr unsigned int Class_4_FF6913E48F85E22D_TypeDefinitionIndex = 77592;

class Class_4_FF6913E48F85E22D : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_8D3E479B491881B3<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_4_6; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_4_1; // 0x30
	::Class_4_425BBC3CBFD638A0* Field_4_0; // 0x38
	::Class_4_2FF7D360A2F3EC48<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_4_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FF6913E48F85E22D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FF6913E48F85E22D_METHOD_4_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_4_652514A15DC5E0CD(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_FF6913E48F85E22D_METHOD_4_652514A15DC5E0CD_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FF6913E48F85E22D_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
