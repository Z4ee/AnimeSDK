#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FightFestStageInfoRow; }

#define RPG_CLIENT_FIGHTFESTSTAGEINFODATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA381720)
#define RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_CHALLENGENAME_OFFSET UNITYSDK_OFFSET(0xA381950)
#define RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_ENVIRONMENTBUFFDES_OFFSET UNITYSDK_OFFSET(0xA381B70)
#define RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_ENVIRONMENTBUFFID_OFFSET UNITYSDK_OFFSET(0xA3826B0)
#define RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_ENVIRONMENTBUFFNAME_OFFSET UNITYSDK_OFFSET(0xA381A60)
#define RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xA3825E0)
#define RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_HIGHLIGHTDESC_OFFSET UNITYSDK_OFFSET(0xA382700)
#define RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_ISLOCKAVATARSKILL_OFFSET UNITYSDK_OFFSET(0xA382600)
#define RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_PREVIEWMONSTERLIST_OFFSET UNITYSDK_OFFSET(0xA381C50)
#define RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_RECOMMENDCOACHID_OFFSET UNITYSDK_OFFSET(0xA382780)
#define RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_RECOMMENDNATURE_OFFSET UNITYSDK_OFFSET(0xA381D10)
#define RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_SPECIALAVATARLIST_OFFSET UNITYSDK_OFFSET(0xA381DD0)
#define RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_UIENTERBATTLEAREAID_OFFSET UNITYSDK_OFFSET(0xA381E30)
#define RPG_CLIENT_FIGHTFESTSTAGEINFODATA_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0xA3825F0)
#define RPG_CLIENT_FIGHTFESTSTAGEINFODATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3825D0)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestStageInfoData_TypeDefinitionIndex = 59050;

	class FightFestStageInfoData : public ::System::Object
	{
	public:
		::RPG::GameCore::FightFestStageInfoRow* _Row; // 0x10
		::System::UInt32 _EventID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSTAGEINFODATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FightFestStageInfoData* Create(::System::UInt32 eventID)
		{
			return ((::RPG::Client::FightFestStageInfoData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSTAGEINFODATA_CREATE_OFFSET))(eventID);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_EventID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSTAGEINFODATA_SET_EVENTID_OFFSET))(this, value);
		}

		::System::Boolean get_IsLockAvatarSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_ISLOCKAVATARSKILL_OFFSET))(this);
		}

		::RPG::Client::TextID get_ChallengeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_CHALLENGENAME_OFFSET))(this);
		}

		::System::UInt32 get_EnvironmentBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_ENVIRONMENTBUFFID_OFFSET))(this);
		}

		::RPG::Client::TextID get_EnvironmentBuffName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_ENVIRONMENTBUFFNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_EnvironmentBuffDes()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_ENVIRONMENTBUFFDES_OFFSET))(this);
		}

		::RPG::Client::TextID get_HighLightDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_HIGHLIGHTDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_PreviewMonsterList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_PREVIEWMONSTERLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_RecommendNature()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_RECOMMENDNATURE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SpecialAvatarList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_SPECIALAVATARLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RecommendCoachID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_RECOMMENDCOACHID_OFFSET))(this);
		}

		::System::UInt32 get_UIEnterBattleAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSTAGEINFODATA_GET_UIENTERBATTLEAREAID_OFFSET))(this);
		}
	};
}
