#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_RoamingStyle.h"
#include "unitysdk/RPG/GameCore/EmotionID.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFovLevel.h"
#include "unitysdk/RPG/GameCore/PhotoGraphSettingItemType.h"

class Class_1_BB7FD600EF1881BC;
namespace RPG::Client { class EmotionData; }
namespace RPG::Client { class PhotoGraphFilterConfig; }
namespace RPG::Client { class PhotoGraphFilterConfigAsset; }
namespace RPG::Client { class PhotoGraphSettingData; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class PhotoGraphFreeStyleConfig; }
namespace RPG::GameCore { class PhotoGraphFreeStyleDataConfig; }
namespace RPG::GameCore { class PhotoGraphLogoConfig; }
namespace RPG::GameCore { class PhotoGraphRoamingConfig; }
namespace RPG::GameCore { class PhotoGraphSettingConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PHOTOGRAPHMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18671100)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GETAVATAREMOTIONDATALIST_OFFSET UNITYSDK_OFFSET(0x186713A0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GETAVATAREMOTION_OFFSET UNITYSDK_OFFSET(0x18671430)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GETLOGOCONFIG_OFFSET UNITYSDK_OFFSET(0x18672100)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GETROAMINGCONFIG_OFFSET UNITYSDK_OFFSET(0x18671FF0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GETSETTINGDATA_OFFSET UNITYSDK_OFFSET(0x18671BE0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GET_FILTERCONFIG_OFFSET UNITYSDK_OFFSET(0x18672E70)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GET_FREESTYLECONFIG_OFFSET UNITYSDK_OFFSET(0x18672E20)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GET_INLOOKATCAMERA_OFFSET UNITYSDK_OFFSET(0x18672F10)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GET_PHOTOGRAPHSETTINGCONFIG_OFFSET UNITYSDK_OFFSET(0x186685F0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GET_PHOTOGRAPHSETTINGS_OFFSET UNITYSDK_OFFSET(0x18672DE0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_INITBYSETTINGDATA_OFFSET UNITYSDK_OFFSET(0x18671CC0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x186710B0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_RESETSETTINGDATA_OFFSET UNITYSDK_OFFSET(0x18671E40)
#define RPG_CLIENT_PHOTOGRAPHMODULE_SETLOOKATCAMERA_OFFSET UNITYSDK_OFFSET(0x186722E0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_SET_INLOOKATCAMERA_OFFSET UNITYSDK_OFFSET(0x18672F20)
#define RPG_CLIENT_PHOTOGRAPHMODULE_UPDATESETTINGDATA_OFFSET UNITYSDK_OFFSET(0x186714A0)
#define RPG_CLIENT_PHOTOGRAPHMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x18671240)
#define RPG_CLIENT_PHOTOGRAPHMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x18670EB0)
#define RPG_CLIENT_PHOTOGRAPHMODULE__LOADPHOTOGRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0x186723F0)
#define RPG_CLIENT_PHOTOGRAPHMODULE__LOADPLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x18672670)
#define RPG_CLIENT_PHOTOGRAPHMODULE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x186728E0)
#define RPG_CLIENT_PHOTOGRAPHMODULE__ONSHOWLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x18672380)
#define RPG_CLIENT_PHOTOGRAPHMODULE__PROCESSSETTINGCHANGE_OFFSET UNITYSDK_OFFSET(0x186718A0)
#define RPG_CLIENT_PHOTOGRAPHMODULE__UNLOADPHOTOGRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0x18671150)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphModule_TypeDefinitionIndex = 66490;

	class PhotoGraphModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* PhotoGraphSettingConfigJsonPath; // 0x0
		// static const ::System::String* _PhotoGraphFreeStyleConfigJsonPath; // 0x0
		// static const ::System::String* _PhotoGraphFilterConfigAssetPath; // 0x0
		::Class_1_BB7FD600EF1881BC* _EmotionRepository; // 0x10
		::RPG::GameCore::PhotoGraphSettingConfig* _PhotoGraphSettingConfig; // 0x18
		::System::String* CurFreeStyleKey; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PhotoGraphSettingItemType, ::RPG::Client::PhotoGraphSettingData*>* _PhotoGraphSettings; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PhotoGraphFovLevel, ::System::Single>* FovLevelToRatio; // 0x30
		::RPG::Client::PhotoGraphFilterConfigAsset* _FilterConfig; // 0x38
		::RPG::GameCore::PhotoGraphFreeStyleConfig* _FreeStyleConfig; // 0x40
		::RPG::GameCore::EmotionID CurEmotionID; // 0x48
		::System::Boolean IsShareEnable; // 0x4C
		::System::Boolean _InLookAtCamera_k__BackingField; // 0x4D
		::System::Boolean _IsPlayerConfigLoaded; // 0x4E
		::System::Boolean _IsConfigLoaded; // 0x4F
		::System::Single CurFOVRatio; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::EmotionData*>* GetAvatarEmotionDataList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::EmotionData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE_GETAVATAREMOTIONDATALIST_OFFSET))(this, a1);
		}

		::RPG::Client::EmotionData* GetAvatarEmotion(::System::UInt32 a1, ::RPG::GameCore::EmotionID a2)
		{
			return ((::RPG::Client::EmotionData*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::EmotionID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE_GETAVATAREMOTION_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateSettingData(::RPG::GameCore::PhotoGraphSettingItemType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphSettingItemType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE_UPDATESETTINGDATA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::PhotoGraphSettingData* GetSettingData(::RPG::GameCore::PhotoGraphSettingItemType a1)
		{
			return ((::RPG::Client::PhotoGraphSettingData*(*)(::PVOID, ::RPG::GameCore::PhotoGraphSettingItemType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE_GETSETTINGDATA_OFFSET))(this, a1);
		}

		::System::Void InitBySettingData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE_INITBYSETTINGDATA_OFFSET))(this);
		}

		::System::Void ResetSettingData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE_RESETSETTINGDATA_OFFSET))(this);
		}

		::RPG::GameCore::PhotoGraphRoamingConfig* GetRoamingConfig(::RPG::Client::CameraDataAndFlags_RoamingStyle a1)
		{
			return ((::RPG::GameCore::PhotoGraphRoamingConfig*(*)(::PVOID, ::RPG::Client::CameraDataAndFlags_RoamingStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE_GETROAMINGCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::PhotoGraphLogoConfig* GetLogoConfig()
		{
			return ((::RPG::GameCore::PhotoGraphLogoConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE_GETLOGOCONFIG_OFFSET))(this);
		}

		::System::Void SetLookAtCamera(::RPG::GameCore::GameWorld* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE_SETLOOKATCAMERA_OFFSET))(this, a1, a2);
		}

		::System::Void _OnShowLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE__ONSHOWLOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _OnHideLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _LoadPhotoGraphConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE__LOADPHOTOGRAPHCONFIG_OFFSET))(this);
		}

		::System::Void _UnloadPhotoGraphConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE__UNLOADPHOTOGRAPHCONFIG_OFFSET))(this);
		}

		::System::Void _LoadPlayerConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE__LOADPLAYERCONFIG_OFFSET))(this);
		}

		::System::Void _ProcessSettingChange(::RPG::GameCore::PhotoGraphSettingItemType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphSettingItemType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE__PROCESSSETTINGCHANGE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PhotoGraphSettingConfig* get_PhotoGraphSettingConfig()
		{
			return ((::RPG::GameCore::PhotoGraphSettingConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE_GET_PHOTOGRAPHSETTINGCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PhotoGraphSettingItemType, ::RPG::Client::PhotoGraphSettingData*>* get_PhotoGraphSettings()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PhotoGraphSettingItemType, ::RPG::Client::PhotoGraphSettingData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE_GET_PHOTOGRAPHSETTINGS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::PhotoGraphFreeStyleDataConfig*>* get_FreeStyleConfig()
		{
			return ((::Il2CppArray<::RPG::GameCore::PhotoGraphFreeStyleDataConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE_GET_FREESTYLECONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphFilterConfig*>* get_FilterConfig()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphFilterConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE_GET_FILTERCONFIG_OFFSET))(this);
		}

		::System::Boolean get_InLookAtCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE_GET_INLOOKATCAMERA_OFFSET))(this);
		}

		::System::Void set_InLookAtCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE_SET_INLOOKATCAMERA_OFFSET))(this, a1);
		}
	};
}
