#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA150E30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA150E70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___C___ONEXITED_B__8_0_OFFSET UNITYSDK_OFFSET(0xA150E80)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2GameFlow___c_TypeDefinitionIndex = 69944;

	class DiceCombatV2GameFlow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::DiceCombat::DiceCombatV2GameFlow___c** StaticGet___9()
		{
			return (::RPG::Client::DiceCombat::DiceCombatV2GameFlow___c**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatV2GameFlow___c_TypeDefinitionIndex)->GetStaticField(0x64B70);
		}
		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatV2GameFlow___c_TypeDefinitionIndex)->GetStaticField(0x64B78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnExited_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___C___ONEXITED_B__8_0_OFFSET))(this);
		}
	};
}
