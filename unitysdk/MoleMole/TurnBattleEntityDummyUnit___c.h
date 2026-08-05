#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_TURNBATTLEENTITYDUMMYUNIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x199A2EF0)
#define MOLEMOLE_TURNBATTLEENTITYDUMMYUNIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x199A2F30)
#define MOLEMOLE_TURNBATTLEENTITYDUMMYUNIT___C__ONTURNOVER_B__2_0_OFFSET UNITYSDK_OFFSET(0x199A3030)
#define MOLEMOLE_TURNBATTLEENTITYDUMMYUNIT___C__ONTURNSTART_B__1_0_OFFSET UNITYSDK_OFFSET(0x199A2F40)

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleEntityDummyUnit___c_TypeDefinitionIndex = 76638;

	class TurnBattleEntityDummyUnit___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(TurnBattleEntityDummyUnit___c_TypeDefinitionIndex)->GetStaticField(0x51A20);
		}
		static ::MoleMole::TurnBattleEntityDummyUnit___c** StaticGet___9()
		{
			return (::MoleMole::TurnBattleEntityDummyUnit___c**)Il2CppClass::FromTypeDefinitionIndex(TurnBattleEntityDummyUnit___c_TypeDefinitionIndex)->GetStaticField(0x51A28);
		}
		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(TurnBattleEntityDummyUnit___c_TypeDefinitionIndex)->GetStaticField(0x51A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYDUMMYUNIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYDUMMYUNIT___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnTurnStart_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYDUMMYUNIT___C__ONTURNSTART_B__1_0_OFFSET))(this);
		}

		::System::Void _OnTurnOver_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYDUMMYUNIT___C__ONTURNOVER_B__2_0_OFFSET))(this);
		}
	};
}
