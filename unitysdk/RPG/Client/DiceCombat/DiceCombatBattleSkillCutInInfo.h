#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_2C185A6B0FB8C081;
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLESKILLCUTININFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB7A09B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLESKILLCUTININFO_GET_ISLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0xB7A0980)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLESKILLCUTININFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB7A09D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLESKILLCUTININFO_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xB7A0990)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLESKILLCUTININFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB7A0940)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattleSkillCutInInfo_TypeDefinitionIndex = 70624;

	class DiceCombatBattleSkillCutInInfo : public ::System::Object
	{
	public:
		::Class_1_2C185A6B0FB8C081* _Row; // 0x10
		::System::Boolean _IsPlayerOrPlayerTeam; // 0x18

		::System::Void _ctor(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLESKILLCUTININFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsLocalPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLESKILLCUTININFO_GET_ISLOCALPLAYER_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLESKILLCUTININFO_GET_PREFABPATH_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLESKILLCUTININFO_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLESKILLCUTININFO_GET_NAME_OFFSET))(this);
		}
	};
}
