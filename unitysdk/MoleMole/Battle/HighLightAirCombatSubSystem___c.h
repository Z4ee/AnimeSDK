#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
template <typename T> class Class_2_5243143C1CFA9367;

#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1726A800)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1726A840)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__INIT_B__133_0_OFFSET UNITYSDK_OFFSET(0x1726A850)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__INIT_B__133_1_OFFSET UNITYSDK_OFFSET(0x1726A900)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int HighLightAirCombatSubSystem___c_TypeDefinitionIndex = 68741;

	class HighLightAirCombatSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::System::Single, ::Class_2_5243143C1CFA9367<::System::Single>*, ::System::Single>** StaticGet___9__133_1()
		{
			return (::System::Func_3<::System::Single, ::Class_2_5243143C1CFA9367<::System::Single>*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(HighLightAirCombatSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x3C6E0);
		}
		static ::System::Func_3<::System::Single, ::Class_2_5243143C1CFA9367<::System::Single>*, ::System::Single>** StaticGet___9__133_0()
		{
			return (::System::Func_3<::System::Single, ::Class_2_5243143C1CFA9367<::System::Single>*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(HighLightAirCombatSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x3C6E8);
		}
		static ::MoleMole::Battle::HighLightAirCombatSubSystem___c** StaticGet___9()
		{
			return (::MoleMole::Battle::HighLightAirCombatSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(HighLightAirCombatSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x3C6F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Single _Init_b__133_0(::System::Single deltaTime, ::Class_2_5243143C1CFA9367<::System::Single>* item)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::Class_2_5243143C1CFA9367<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__INIT_B__133_0_OFFSET))(this, deltaTime, item);
		}

		::System::Single _Init_b__133_1(::System::Single deltaTime, ::Class_2_5243143C1CFA9367<::System::Single>* item)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::Class_2_5243143C1CFA9367<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__INIT_B__133_1_OFFSET))(this, deltaTime, item);
		}
	};
}
