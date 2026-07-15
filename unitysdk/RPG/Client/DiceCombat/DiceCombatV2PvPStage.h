#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2Stage.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2StageState.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSTAGE_GET_CHATINVITEID_OFFSET UNITYSDK_OFFSET(0x19FE5860)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSTAGE_GET_HIGHESTSCOREINHISTORY_OFFSET UNITYSDK_OFFSET(0x19FE58A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSTAGE_GET_INVITEROBOTIDLIST_OFFSET UNITYSDK_OFFSET(0x19FE5880)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSTAGE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x19FE58C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSTAGE_SET_CHATINVITEID_OFFSET UNITYSDK_OFFSET(0x19FE5870)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSTAGE_SET_HIGHESTSCOREINHISTORY_OFFSET UNITYSDK_OFFSET(0x19FE58B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSTAGE_SET_INVITEROBOTIDLIST_OFFSET UNITYSDK_OFFSET(0x19FE5890)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FE5A50)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2PvPStage_TypeDefinitionIndex = 72259;

	class DiceCombatV2PvPStage : public ::RPG::Client::DiceCombat::DiceCombatV2Stage
	{
	public:
		::Il2CppArray<::System::UInt32>* _InviteRobotIDList_k__BackingField; // 0x70
		::System::UInt32 _ChatInviteID_k__BackingField; // 0x78
		::System::UInt32 _HighestScoreInHistory_k__BackingField; // 0x7C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSTAGE__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChatInviteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSTAGE_GET_CHATINVITEID_OFFSET))(this);
		}

		::System::Void set_ChatInviteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSTAGE_SET_CHATINVITEID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_InviteRobotIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSTAGE_GET_INVITEROBOTIDLIST_OFFSET))(this);
		}

		::System::Void set_InviteRobotIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSTAGE_SET_INVITEROBOTIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_HighestScoreInHistory()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSTAGE_GET_HIGHESTSCOREINHISTORY_OFFSET))(this);
		}

		::System::Void set_HighestScoreInHistory(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSTAGE_SET_HIGHESTSCOREINHISTORY_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatV2StageState get_State()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2StageState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVPSTAGE_GET_STATE_OFFSET))(this);
		}
	};
}
