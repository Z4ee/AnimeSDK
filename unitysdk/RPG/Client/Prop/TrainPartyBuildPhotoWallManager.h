#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class TrainPartyBuildPhotoWallItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xAEF2240)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER_BLOCKNOTIFY_OFFSET UNITYSDK_OFFSET(0xAEF2A90)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER_CLEARALLIMAGES_OFFSET UNITYSDK_OFFSET(0xAEF2740)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER_CLEARIMAGE_OFFSET UNITYSDK_OFFSET(0xAEF2940)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAEF2630)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER_SHOWIMAGE_OFFSET UNITYSDK_OFFSET(0xAEF27E0)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xAEF30D0)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER__INITDISPLAYWALL_OFFSET UNITYSDK_OFFSET(0xAEF2350)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER__INITSLOTTOINDEXMAP_OFFSET UNITYSDK_OFFSET(0xAEF2AD0)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xAEF3050)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER__ONDYNAMICITEMSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xAEF2CA0)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER__ONPHOTOWALLPREVIEW_OFFSET UNITYSDK_OFFSET(0xAEF2E50)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TrainPartyBuildPhotoWallManager_TypeDefinitionIndex = 71681;

	class TrainPartyBuildPhotoWallManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::Prop::TrainPartyBuildPhotoWallItem*>* PhotoWallItems; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _SLOT_TO_INDEX_MAP; // 0x20
		::System::Boolean _BlockingNotify; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ShowImage(::System::UInt32 index, ::System::String* imagePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER_SHOWIMAGE_OFFSET))(this, index, imagePath);
		}

		::System::Void ClearImage(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER_CLEARIMAGE_OFFSET))(this, index);
		}

		::System::Void ClearAllImages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER_CLEARALLIMAGES_OFFSET))(this);
		}

		::System::Void BlockNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER_BLOCKNOTIFY_OFFSET))(this);
		}

		::System::Void _InitDisplayWall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER__INITDISPLAYWALL_OFFSET))(this);
		}

		::System::Void _OnDynamicItemStateChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER__ONDYNAMICITEMSTATECHANGED_OFFSET))(this, arg);
		}

		::System::Void _OnPhotoWallPreview(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER__ONPHOTOWALLPREVIEW_OFFSET))(this, arg);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _InitSlotToIndexMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLMANAGER__INITSLOTTOINDEXMAP_OFFSET))(this);
		}
	};
}
