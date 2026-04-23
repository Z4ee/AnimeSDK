#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ResidentActivityPanelIndexKey.h"
#include "unitysdk/RPG/Client/ResidentActivityState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_1F5DAB3B1DA3CD34;
class Class_1_355D5C2B1D92981B;
class Class_1_B664465BA0C38341;
class Class_1_D4B4346A5EB96462;
namespace RPG::Client { class ActivityRewardCountData; }
namespace RPG::Client { class ActivityRewardItem; }
namespace RPG::Client { class ActivityTagData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class IntroDataRow; }
namespace RPG::GameCore { class RogueActivityResidentConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_COLLECTUNLOCKID_OFFSET UNITYSDK_OFFSET(0xB0923C0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_ACTIVITYNAME_OFFSET UNITYSDK_OFFSET(0xB092570)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_BRIEFDESC_OFFSET UNITYSDK_OFFSET(0xB0925B0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0xB088480)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_DISPLAYREWARDS_OFFSET UNITYSDK_OFFSET(0xB0927E0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_EXPECTEDPLAYINGHOURS_OFFSET UNITYSDK_OFFSET(0xB092770)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_GAMEPLAYINTROGUIDEVIDEOID_OFFSET UNITYSDK_OFFSET(0xB0928A0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_GAMEPLAYINTROIMGPATH_OFFSET UNITYSDK_OFFSET(0xB0928B0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_INDEXKEY_OFFSET UNITYSDK_OFFSET(0xB092500)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_INTROBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0xB0925F0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_INTRODESC_OFFSET UNITYSDK_OFFSET(0xB0926B0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_INTROTITLE_OFFSET UNITYSDK_OFFSET(0xB0926A0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_IPDESC_OFFSET UNITYSDK_OFFSET(0xB0925D0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_ISSHOWREMAINTIME_OFFSET UNITYSDK_OFFSET(0xB092980)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_LEFTCOUNTTEXT_OFFSET UNITYSDK_OFFSET(0xB0926C0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_LISTITEMIMGPATH_OFFSET UNITYSDK_OFFSET(0xB092590)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_LOCKEDREASON_OFFSET UNITYSDK_OFFSET(0xB088E80)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_REWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xB0928D0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_SCHEDULE_OFFSET UNITYSDK_OFFSET(0xB092920)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0xB092880)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_SUBMODE_OFFSET UNITYSDK_OFFSET(0xB092550)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_TAGS_OFFSET UNITYSDK_OFFSET(0xB092780)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET__DEBUGGERDISPLAY_OFFSET UNITYSDK_OFFSET(0xB0929A0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SETPANELSEEN_OFFSET UNITYSDK_OFFSET(0xB0924C0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_ACTIVITYNAME_OFFSET UNITYSDK_OFFSET(0xB092580)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_BRIEFDESC_OFFSET UNITYSDK_OFFSET(0xB0925C0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_GAMEPLAYINTROIMGPATH_OFFSET UNITYSDK_OFFSET(0xB0928C0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_IPDESC_OFFSET UNITYSDK_OFFSET(0xB0925E0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_ISSHOWREMAINTIME_OFFSET UNITYSDK_OFFSET(0xB092990)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_LISTITEMIMGPATH_OFFSET UNITYSDK_OFFSET(0xB0925A0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0xB092890)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_SUBMODE_OFFSET UNITYSDK_OFFSET(0xB092560)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA__CONSTRUCTBYINTROROW_OFFSET UNITYSDK_OFFSET(0xB088200)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA__CONSTRUCTBYROW_OFFSET UNITYSDK_OFFSET(0xB087DE0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB087CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueResidentActivityPanelData_TypeDefinitionIndex = 56982;

	class RogueResidentActivityPanelData : public ::System::Object
	{
	public:
		::System::String* _GameplayIntroImgPath_k__BackingField; // 0x10
		::Il2CppArray<::RPG::Client::ActivityRewardItem*>* _SortedDisplayItemList; // 0x18
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ActivityRewardItem*>* _SortedDisplayItemList_ReadOnly; // 0x20
		::Class_1_1F5DAB3B1DA3CD34* _ScheduleProxy; // 0x28
		::Class_1_B664465BA0C38341* _RewardCountProxy; // 0x30
		::System::String* _ListItemImgPath_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ActivityTagData*>* _Tags; // 0x40
		::RPG::Client::TextID _IntroTitle; // 0x48
		::RPG::Client::TextID _BriefDesc_k__BackingField; // 0x58
		::RPG::Client::TextID _ActivityName_k__BackingField; // 0x68
		::System::Boolean _IsShowRemainTime_k__BackingField; // 0x78
		::System::Boolean _HasLockCondition; // 0x79
		::System::Boolean _IsScheduled; // 0x7A
		::RPG::GameCore::RogueSubMode _SubMode_k__BackingField; // 0x7C
		::System::UInt32 _ActivityID; // 0x80
		::System::UInt32 _SortWeight_k__BackingField; // 0x84
		::RPG::Client::TextID _IntroDesc; // 0x88
		::System::UInt32 _ConfigID; // 0x98
		::System::UInt32 _UnlockID; // 0x9C
		::RPG::Client::TextID _IPDesc_k__BackingField; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ConstructByRow(::RPG::GameCore::RogueActivityResidentConfigRow* row, ::Class_1_D4B4346A5EB96462* scheduleProxyFactory, ::Class_1_355D5C2B1D92981B* rewardCountProxyFactory)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueActivityResidentConfigRow*, ::Class_1_D4B4346A5EB96462*, ::Class_1_355D5C2B1D92981B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA__CONSTRUCTBYROW_OFFSET))(this, row, scheduleProxyFactory, rewardCountProxyFactory);
		}

		::System::Void _ConstructByIntroRow(::RPG::GameCore::IntroDataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IntroDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA__CONSTRUCTBYINTROROW_OFFSET))(this, row);
		}

		::System::Void CollectUnlockID(::System::Collections::Generic::IList_1<::System::UInt32>* unlockIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_COLLECTUNLOCKID_OFFSET))(this, unlockIDs);
		}

		::System::Void SetPanelSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SETPANELSEEN_OFFSET))(this);
		}

		::RPG::Client::ResidentActivityPanelIndexKey get_IndexKey()
		{
			return ((::RPG::Client::ResidentActivityPanelIndexKey(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_INDEXKEY_OFFSET))(this);
		}

		::RPG::GameCore::RogueSubMode get_SubMode()
		{
			return ((::RPG::GameCore::RogueSubMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_SUBMODE_OFFSET))(this);
		}

		::System::Void set_SubMode(::RPG::GameCore::RogueSubMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_SUBMODE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_ActivityName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_ACTIVITYNAME_OFFSET))(this);
		}

		::System::Void set_ActivityName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_ACTIVITYNAME_OFFSET))(this, value);
		}

		::System::String* get_ListItemImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_LISTITEMIMGPATH_OFFSET))(this);
		}

		::System::Void set_ListItemImgPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_LISTITEMIMGPATH_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_BriefDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_BRIEFDESC_OFFSET))(this);
		}

		::System::Void set_BriefDesc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_BRIEFDESC_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_IPDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_IPDESC_OFFSET))(this);
		}

		::System::Void set_IPDesc(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_IPDESC_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_IntroButtonText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_INTROBUTTONTEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_IntroTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_INTROTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_IntroDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_INTRODESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_LeftCountText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_LEFTCOUNTTEXT_OFFSET))(this);
		}

		::System::String* get_ExpectedPlayingHours()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_EXPECTEDPLAYINGHOURS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>* get_Tags()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_TAGS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityRewardItem*>* get_DisplayRewards()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityRewardItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_DISPLAYREWARDS_OFFSET))(this);
		}

		::System::UInt32 get_SortWeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_SORTWEIGHT_OFFSET))(this);
		}

		::System::Void set_SortWeight(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_SORTWEIGHT_OFFSET))(this, value);
		}

		::System::UInt32 get_GameplayIntroGuideVideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_GAMEPLAYINTROGUIDEVIDEOID_OFFSET))(this);
		}

		::System::String* get_GameplayIntroImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_GAMEPLAYINTROIMGPATH_OFFSET))(this);
		}

		::System::Void set_GameplayIntroImgPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_GAMEPLAYINTROIMGPATH_OFFSET))(this, value);
		}

		::RPG::Client::ActivityRewardCountData* get_RewardCount()
		{
			return ((::RPG::Client::ActivityRewardCountData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_REWARDCOUNT_OFFSET))(this);
		}

		::RPG::Client::ResidentActivityState get_CurState()
		{
			return ((::RPG::Client::ResidentActivityState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_CURSTATE_OFFSET))(this);
		}

		::System::String* get_LockedReason()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_LOCKEDREASON_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_Schedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_SCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsShowRemainTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_ISSHOWREMAINTIME_OFFSET))(this);
		}

		::System::Void set_IsShowRemainTime(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_ISSHOWREMAINTIME_OFFSET))(this, value);
		}

		::System::String* get__DebuggerDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET__DEBUGGERDISPLAY_OFFSET))(this);
		}
	};
}
