#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A43F060)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A43F0A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2GAMEFLOW___C___ONEXITED_B__8_0_OFFSET UNITYSDK_OFFSET(0x1A43F0B0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2GameFlow___c_TypeDefinitionIndex = 72269;

	class DiceCombatV2GameFlow___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatV2GameFlow___c_TypeDefinitionIndex)->GetStaticField(0x6B320);
		}
		static ::RPG::Client::DiceCombat::DiceCombatV2GameFlow___c** StaticGet___9()
		{
			return (::RPG::Client::DiceCombat::DiceCombatV2GameFlow___c**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatV2GameFlow___c_TypeDefinitionIndex)->GetStaticField(0x6B328);
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
