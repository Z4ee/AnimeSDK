#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_B51C9D0AAAA6A5F0_Enum_3_84D933D686775DBF.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"

class Class_1_8289F2785D9AA990;
class Class_3_B51C9D0AAAA6A5F0;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_3_2B006B25A7D108A2_METHOD_3_12C563CAB36B942B_OFFSET UNITYSDK_OFFSET(0x115C4920)
#define CLASS_3_2B006B25A7D108A2_METHOD_3_2284F72D21668394_OFFSET UNITYSDK_OFFSET(0x115C4510)
#define CLASS_3_2B006B25A7D108A2_METHOD_3_31A13036B609045C_OFFSET UNITYSDK_OFFSET(0x115C45E0)
#define CLASS_3_2B006B25A7D108A2_METHOD_3_4E8E91BC613BA2A1_OFFSET UNITYSDK_OFFSET(0x115C4DD0)
#define CLASS_3_2B006B25A7D108A2_METHOD_3_884500FCFE6BD097_OFFSET UNITYSDK_OFFSET(0x115C4B30)
#define CLASS_3_2B006B25A7D108A2_METHOD_3_B0BEE3C610C65DF9_OFFSET UNITYSDK_OFFSET(0x115C4EB0)
#define CLASS_3_2B006B25A7D108A2__CTOR_OFFSET UNITYSDK_OFFSET(0x115C44C0)

inline static constexpr unsigned int Class_3_2B006B25A7D108A2_TypeDefinitionIndex = 39983;

class Class_3_2B006B25A7D108A2 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B006B25A7D108A2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2284F72D21668394(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EnterBattleState a2, ::Class_3_B51C9D0AAAA6A5F0_Enum_3_84D933D686775DBF a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState, ::Class_3_B51C9D0AAAA6A5F0_Enum_3_84D933D686775DBF))((::PBYTE)hIl2Cpp + CLASS_3_2B006B25A7D108A2_METHOD_3_2284F72D21668394_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_12C563CAB36B942B(::System::String* a1, ::MoleMole::Config::EnterBattleState a2, ::Class_3_B51C9D0AAAA6A5F0* a3)
	{
		return ((::System::Void(*)(::System::String*, ::MoleMole::Config::EnterBattleState, ::Class_3_B51C9D0AAAA6A5F0*))((::PBYTE)hIl2Cpp + CLASS_3_2B006B25A7D108A2_METHOD_3_12C563CAB36B942B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_4E8E91BC613BA2A1(::MoleMole::Config::EnterBattleState a1, ::Class_3_B51C9D0AAAA6A5F0* a2)
	{
		return ((::System::Void(*)(::MoleMole::Config::EnterBattleState, ::Class_3_B51C9D0AAAA6A5F0*))((::PBYTE)hIl2Cpp + CLASS_3_2B006B25A7D108A2_METHOD_3_4E8E91BC613BA2A1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_884500FCFE6BD097(::System::String* a1, ::Class_3_B51C9D0AAAA6A5F0* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_3_B51C9D0AAAA6A5F0*))((::PBYTE)hIl2Cpp + CLASS_3_2B006B25A7D108A2_METHOD_3_884500FCFE6BD097_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_B0BEE3C610C65DF9(::Class_1_8289F2785D9AA990* a1)
	{
		return ((::System::Boolean(*)(::Class_1_8289F2785D9AA990*))((::PBYTE)hIl2Cpp + CLASS_3_2B006B25A7D108A2_METHOD_3_B0BEE3C610C65DF9_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_31A13036B609045C(::MoleMole::Config::EnterBattleState a1, ::Class_3_B51C9D0AAAA6A5F0* a2, ::Class_3_B51C9D0AAAA6A5F0_Enum_3_84D933D686775DBF a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::EnterBattleState, ::Class_3_B51C9D0AAAA6A5F0*, ::Class_3_B51C9D0AAAA6A5F0_Enum_3_84D933D686775DBF, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2B006B25A7D108A2_METHOD_3_31A13036B609045C_OFFSET))(a1, a2, a3, a4);
	}
};
