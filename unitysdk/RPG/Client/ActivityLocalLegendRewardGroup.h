#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendRewardType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0xC61F760)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP_GETQUESTSDATA_OFFSET UNITYSDK_OFFSET(0xC61F820)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP_GET_REDDOTNAME_OFFSET UNITYSDK_OFFSET(0xC61FB30)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP_GET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0xC61FB50)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xC61FB10)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP_HASUNTAKENREWARD_OFFSET UNITYSDK_OFFSET(0xC61F5D0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP_SET_REDDOTNAME_OFFSET UNITYSDK_OFFSET(0xC61FB40)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP_SET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0xC61FB60)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xC61FB20)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xC61F810)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendRewardGroup_TypeDefinitionIndex = 61659;

	class ActivityLocalLegendRewardGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _QuestIDList; // 0x10
		::System::String* _RedDotName_k__BackingField; // 0x18
		::RPG::Client::TextID _Title_k__BackingField; // 0x20
		::RPG::GameCore::ActivityLocalLegendRewardType _RewardType_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityLocalLegendRewardGroup* Create(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::RPG::Client::TextID a2, ::RPG::GameCore::ActivityLocalLegendRewardType a3, ::System::String* a4)
		{
			return ((::RPG::Client::ActivityLocalLegendRewardGroup*(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::Client::TextID, ::RPG::GameCore::ActivityLocalLegendRewardType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean HasUntakenReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP_HASUNTAKENREWARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetQuestsData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP_GETQUESTSDATA_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP_SET_TITLE_OFFSET))(this, a1);
		}

		::System::String* get_RedDotName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP_GET_REDDOTNAME_OFFSET))(this);
		}

		::System::Void set_RedDotName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP_SET_REDDOTNAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityLocalLegendRewardType get_RewardType()
		{
			return ((::RPG::GameCore::ActivityLocalLegendRewardType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP_GET_REWARDTYPE_OFFSET))(this);
		}

		::System::Void set_RewardType(::RPG::GameCore::ActivityLocalLegendRewardType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityLocalLegendRewardType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP_SET_REWARDTYPE_OFFSET))(this, a1);
		}
	};
}
