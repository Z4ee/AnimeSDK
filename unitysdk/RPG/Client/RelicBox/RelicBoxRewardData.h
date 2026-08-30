#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class ActivityRelicBoxQuestConfigRow; }

#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDE229B0)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GETALLREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xDE22C80)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GETCURRENTQUEST_OFFSET UNITYSDK_OFFSET(0xDE22AA0)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GETQUESTREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xDE22DE0)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GETTAKENREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xDE22EB0)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0xDE230C0)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xDE23070)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GET_QUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xDE22A50)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GET_TABID_OFFSET UNITYSDK_OFFSET(0xDE23020)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0xDE22A10)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDE22A00)

namespace RPG::Client::RelicBox
{
	inline static constexpr unsigned int RelicBoxRewardData_TypeDefinitionIndex = 74352;

	class RelicBoxRewardData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityRelicBoxQuestConfigRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::ActivityRelicBoxQuestConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityRelicBoxQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicBox::RelicBoxRewardData* Create(::RPG::GameCore::ActivityRelicBoxQuestConfigRow* a1)
		{
			return ((::RPG::Client::RelicBox::RelicBoxRewardData*(*)(::RPG::GameCore::ActivityRelicBoxQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_CREATE_OFFSET))(a1);
		}

		::System::Void TakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_TAKEREWARD_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_QuestIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GET_QUESTIDLIST_OFFSET))(this);
		}

		::RPG::Client::QuestData* GetCurrentQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GETCURRENTQUEST_OFFSET))(this);
		}

		::System::Int32 GetAllRewardCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GETALLREWARDCOUNT_OFFSET))(this);
		}

		::System::Int32 GetTakenRewardCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GETTAKENREWARDCOUNT_OFFSET))(this);
		}

		::System::Int32 GetQuestRewardCount(::RPG::Client::QuestData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GETQUESTREWARDCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TabID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GET_TABID_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GET_GOTOID_OFFSET))(this);
		}
	};
}
