#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD28110)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCD28150)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___C___ONEXITED_B__7_0_OFFSET UNITYSDK_OFFSET(0xCD28160)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatGameFlow___c_TypeDefinitionIndex = 75630;

	class DiceCombatGameFlow___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatGameFlow___c_TypeDefinitionIndex)->GetStaticField(0x5FDF0);
		}
		static ::RPG::Client::DiceCombat::DiceCombatGameFlow___c** StaticGet___9()
		{
			return (::RPG::Client::DiceCombat::DiceCombatGameFlow___c**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatGameFlow___c_TypeDefinitionIndex)->GetStaticField(0x5FDF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnExited_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATGAMEFLOW___C___ONEXITED_B__7_0_OFFSET))(this);
		}
	};
}
