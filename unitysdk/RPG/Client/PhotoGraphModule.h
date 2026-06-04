#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_RoamingStyle.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFovLevel.h"
#include "unitysdk/RPG/GameCore/PhotoGraphSettingItemType.h"

namespace RPG::Client { class PhotoGraphFilterConfig; }
namespace RPG::Client { class PhotoGraphFilterConfigAsset; }
namespace RPG::Client { class PhotoGraphSettingData; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class PhotoGraphEmotionConfigRow; }
namespace RPG::GameCore { class PhotoGraphFreeStyleConfig; }
namespace RPG::GameCore { class PhotoGraphFreeStyleDataConfig; }
namespace RPG::GameCore { class PhotoGraphLogoConfig; }
namespace RPG::GameCore { class PhotoGraphRoamingConfig; }
namespace RPG::GameCore { class PhotoGraphSettingConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PHOTOGRAPHMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC380070)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GETAVATAREMOTIONCONFIGS_OFFSET UNITYSDK_OFFSET(0xC3802F0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GETLOGOCONFIG_OFFSET UNITYSDK_OFFSET(0xC3812F0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GETROAMINGCONFIG_OFFSET UNITYSDK_OFFSET(0xC3811E0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GETSETTINGDATA_OFFSET UNITYSDK_OFFSET(0xC380DD0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GET_FILTERCONFIG_OFFSET UNITYSDK_OFFSET(0xC382010)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GET_FREESTYLECONFIG_OFFSET UNITYSDK_OFFSET(0xC381FF0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GET_INLOOKATCAMERA_OFFSET UNITYSDK_OFFSET(0xC3820B0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GET_PHOTOGRAPHSETTINGCONFIG_OFFSET UNITYSDK_OFFSET(0xC381FD0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_GET_PHOTOGRAPHSETTINGS_OFFSET UNITYSDK_OFFSET(0xC381FE0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_INITBYSETTINGDATA_OFFSET UNITYSDK_OFFSET(0xC380EB0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC37FFF0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_RESETSETTINGDATA_OFFSET UNITYSDK_OFFSET(0xC381030)
#define RPG_CLIENT_PHOTOGRAPHMODULE_SETLOOKATCAMERA_OFFSET UNITYSDK_OFFSET(0xC3814D0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_SET_INLOOKATCAMERA_OFFSET UNITYSDK_OFFSET(0xC3820C0)
#define RPG_CLIENT_PHOTOGRAPHMODULE_UPDATESETTINGDATA_OFFSET UNITYSDK_OFFSET(0xC380690)
#define RPG_CLIENT_PHOTOGRAPHMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC380190)
#define RPG_CLIENT_PHOTOGRAPHMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC37FE10)
#define RPG_CLIENT_PHOTOGRAPHMODULE__LOADPHOTOGRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0xC3815E0)
#define RPG_CLIENT_PHOTOGRAPHMODULE__LOADPLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0xC381860)
#define RPG_CLIENT_PHOTOGRAPHMODULE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xC381AD0)
#define RPG_CLIENT_PHOTOGRAPHMODULE__ONSHOWLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xC381570)
#define RPG_CLIENT_PHOTOGRAPHMODULE__PROCESSSETTINGCHANGE_OFFSET UNITYSDK_OFFSET(0xC380A90)
#define RPG_CLIENT_PHOTOGRAPHMODULE__UNLOADPHOTOGRAPHCONFIG_OFFSET UNITYSDK_OFFSET(0xC3800C0)
#define RPG_CLIENT_PHOTOGRAPHMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC382150)
#define RPG_CLIENT_PHOTOGRAPHMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC3820D0)
#define RPG_CLIENT_PHOTOGRAPHMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC382160)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphModule_TypeDefinitionIndex = 62139;

	class PhotoGraphModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* PhotoGraphSettingConfigJsonPath; // 0x0
		// static const ::System::String* _PhotoGraphFreeStyleConfigJsonPath; // 0x0
		// static const ::System::String* _PhotoGraphFilterConfigAssetPath; // 0x0
		::RPG::GameCore::PhotoGraphSettingConfig* _PhotoGraphSettingConfig; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PhotoGraphSettingItemType, ::RPG::Client::PhotoGraphSettingData*>* _PhotoGraphSettings; // 0x18
		::RPG::GameCore::PhotoGraphFreeStyleConfig* _FreeStyleConfig; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PhotoGraphFovLevel, ::System::Single>* FovLevelToRatio; // 0x28
		::RPG::Client::PhotoGraphFilterConfigAsset* _FilterConfig; // 0x30
		::System::String* CurFreeStyleKey; // 0x38
		::System::Single CurFOVRatio; // 0x40
		::System::UInt32 CurEmotionID; // 0x44
		::System::Boolean IsShareEnable; // 0x48
		::System::Boolean _IsPlayerConfigLoaded; // 0x49
		::System::Boolean _InLookAtCamera_k__BackingField; // 0x4A
		::System::Boolean _IsConfigLoaded; // 0x4B

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

		::System::Collections::Generic::List_1<::RPG::GameCore::PhotoGraphEmotionConfigRow*>* GetAvatarEmotionConfigs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::PhotoGraphEmotionConfigRow*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE_GETAVATAREMOTIONCONFIGS_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
