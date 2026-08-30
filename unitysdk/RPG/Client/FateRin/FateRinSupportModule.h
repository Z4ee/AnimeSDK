#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChooseDeliveryEntry; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE_GETAVATARIDBYCHOOSEDELIVERYGROUPID_OFFSET UNITYSDK_OFFSET(0x1B5AA9D0)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE_GETAVATARREWARDLIST_OFFSET UNITYSDK_OFFSET(0x1B5AAAE0)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE_GETFATERINCHOOSEDELIVERYENTRY_OFFSET UNITYSDK_OFFSET(0x1B5A9D70)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE_GETFRIENDAVATARIDBYCHOOSEDELIVERYGROUPID_OFFSET UNITYSDK_OFFSET(0x1B5AACB0)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE_GET_DELIVERYENTRYID_OFFSET UNITYSDK_OFFSET(0x1B5A91F0)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE_GET_REWARDAVATARFRIENDIDLIST_OFFSET UNITYSDK_OFFSET(0x1B5A9740)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE_GET_REWARDAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x1B5A94C0)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE_GET_VIDEOLIST_OFFSET UNITYSDK_OFFSET(0x1B5A9240)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B5A99C0)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B5A9A10)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__CHOOSEDELIVERYNOTICETOASTSHOWN_OFFSET UNITYSDK_OFFSET(0x1B5AA750)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5AAD70)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__FATERINONCLOSEAVATARTOASTDIALOGNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B5AA440)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__GETINDEXBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1B5AAA90)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__ISFATERINCOLLECTIONACTIVITYISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1B5A9FC0)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0x1B5A9EC0)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0x1B5AA0C0)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__ONMAZEHUDFATERINICONTRANSFORMREFRESH_OFFSET UNITYSDK_OFFSET(0x1B5AA3C0)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__ONSHOWMAZEMAINPAGE_OFFSET UNITYSDK_OFFSET(0x1B5AA980)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__TRYSHOWFATERINACTIVITYGUIDETOAST_OFFSET UNITYSDK_OFFSET(0x1B5AA840)
#define RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__TRYTRIGGERTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1B5AA230)

namespace RPG::Client::FateRin
{
	inline static constexpr unsigned int FateRinSupportModule_TypeDefinitionIndex = 79307;

	class FateRinSupportModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RewardAvatarFriendIDList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _VideoList; // 0x18
		::UnityEngine::Transform* IconTransform; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _RewardAvatarIDList; // 0x28
		::System::Boolean _shouldShowActivityGuideToast; // 0x30
		::System::UInt32 _ActivityOpenMissionID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_DeliveryEntryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE_GET_DELIVERYENTRYID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_VideoList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE_GET_VIDEOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RewardAvatarIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE_GET_REWARDAVATARIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RewardAvatarFriendIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE_GET_REWARDAVATARFRIENDIDLIST_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::RPG::Client::ChooseDeliveryEntry* GetFateRinChooseDeliveryEntry()
		{
			return ((::RPG::Client::ChooseDeliveryEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE_GETFATERINCHOOSEDELIVERYENTRY_OFFSET))(this);
		}

		::System::Void _OnFinishedMainMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__ONFINISHEDMAINMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnFinishSubMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__ONFINISHSUBMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnMazeHudFateRinIconTransformRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__ONMAZEHUDFATERINICONTRANSFORMREFRESH_OFFSET))(this, a1);
		}

		::System::Void _FateRinOnCloseAvatarToastDialogNotify(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__FATERINONCLOSEAVATARTOASTDIALOGNOTIFY_OFFSET))(this, a1);
		}

		::System::Void _ChooseDeliveryNoticeToastShown(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__CHOOSEDELIVERYNOTICETOASTSHOWN_OFFSET))(this, a1);
		}

		::System::Void _TryShowFateRinActivityGuideToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__TRYSHOWFATERINACTIVITYGUIDETOAST_OFFSET))(this);
		}

		::System::Boolean _IsFateRinCollectionActivityIsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__ISFATERINCOLLECTIONACTIVITYISINSCHEDULE_OFFSET))(this);
		}

		::System::Void _OnShowMazeMainPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__ONSHOWMAZEMAINPAGE_OFFSET))(this, a1);
		}

		::System::Void _TryTriggerTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__TRYTRIGGERTUTORIAL_OFFSET))(this);
		}

		::System::UInt32 GetAvatarIDByChooseDeliveryGroupID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE_GETAVATARIDBYCHOOSEDELIVERYGROUPID_OFFSET))(this, a1);
		}

		::System::Int32 _GetIndexByGroupID(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE__GETINDEXBYGROUPID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAvatarRewardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE_GETAVATARREWARDLIST_OFFSET))(this);
		}

		::System::UInt32 GetFriendAvatarIDByChooseDeliveryGroupID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_FATERINSUPPORTMODULE_GETFRIENDAVATARIDBYCHOOSEDELIVERYGROUPID_OFFSET))(this, a1);
		}
	};
}
