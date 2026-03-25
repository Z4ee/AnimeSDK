#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_2C185A6B0FB8C081;
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLESKILLCUTININFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x94728D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLESKILLCUTININFO_GET_ISLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x94728A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLESKILLCUTININFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x94728F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLESKILLCUTININFO_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x94728B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLESKILLCUTININFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9472860)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattleSkillCutInInfo_TypeDefinitionIndex = 61904;

	class DiceCombatBattleSkillCutInInfo : public ::System::Object
	{
	public:
		::Class_1_2C185A6B0FB8C081* _Row; // 0x10
		::System::Boolean _IsLocalPlayer; // 0x18

		::System::Void _ctor(::System::Boolean isLocalPlayer, ::System::UInt32 cutinID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLESKILLCUTININFO__CTOR_OFFSET))(this, isLocalPlayer, cutinID);
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
