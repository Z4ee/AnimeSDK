#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/EnvType.h"
#include "unitysdk/MiHoYo/SDK/SceneType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ABTestModel; }
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class ColorModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class LocalConfig; }
namespace MiHoYo::SDK { class MDKConfig; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK { class PSConfig; }
namespace MiHoYo::SDK { class SkinColorModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_ADDPAYLIMITTIPSKEY_OFFSET UNITYSDK_OFFSET(0x182089B0)
#define MIHOYO_SDK_CONFIGMANAGER_CHECKSCENETYPE_OFFSET UNITYSDK_OFFSET(0x18206650)
#define MIHOYO_SDK_CONFIGMANAGER_CHECKSHOWMAILBIND_OFFSET UNITYSDK_OFFSET(0x18205E70)
#define MIHOYO_SDK_CONFIGMANAGER_DEVICEFPREFRESH_OFFSET UNITYSDK_OFFSET(0x181FFD80)
#define MIHOYO_SDK_CONFIGMANAGER_ENVISOVERSEA_OFFSET UNITYSDK_OFFSET(0x182031A0)
#define MIHOYO_SDK_CONFIGMANAGER_GETABTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x18207E00)
#define MIHOYO_SDK_CONFIGMANAGER_GETABTESTKEY_OFFSET UNITYSDK_OFFSET(0x18207D20)
#define MIHOYO_SDK_CONFIGMANAGER_GETASBPATH_OFFSET UNITYSDK_OFFSET(0x18200250)
#define MIHOYO_SDK_CONFIGMANAGER_GETBOXCONFIGCACHEKEY_OFFSET UNITYSDK_OFFSET(0x18205DC0)
#define MIHOYO_SDK_CONFIGMANAGER_GETBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x182062A0)
#define MIHOYO_SDK_CONFIGMANAGER_GETBUNDLEID_OFFSET UNITYSDK_OFFSET(0x18200560)
#define MIHOYO_SDK_CONFIGMANAGER_GETDEVICEFP_OFFSET UNITYSDK_OFFSET(0x181FFD20)
#define MIHOYO_SDK_CONFIGMANAGER_GETDEVICEID_OFFSET UNITYSDK_OFFSET(0x181DA8F0)
#define MIHOYO_SDK_CONFIGMANAGER_GETENVTYPEWITHSTRING_OFFSET UNITYSDK_OFFSET(0x181F79F0)
#define MIHOYO_SDK_CONFIGMANAGER_GETJOYPADCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x18203A20)
#define MIHOYO_SDK_CONFIGMANAGER_GETJOYPADENABLE_OFFSET UNITYSDK_OFFSET(0x18203A40)
#define MIHOYO_SDK_CONFIGMANAGER_GETJOYPADEXCHANGE_OFFSET UNITYSDK_OFFSET(0x18203A80)
#define MIHOYO_SDK_CONFIGMANAGER_GETJOYPADTYPE_OFFSET UNITYSDK_OFFSET(0x18203A60)
#define MIHOYO_SDK_CONFIGMANAGER_GETLISTPRICETIERKEY_1_OFFSET UNITYSDK_OFFSET(0x18208E40)
#define MIHOYO_SDK_CONFIGMANAGER_GETLISTPRICETIERKEY_OFFSET UNITYSDK_OFFSET(0x18208B30)
#define MIHOYO_SDK_CONFIGMANAGER_GETLOGOUTCHOICE_OFFSET UNITYSDK_OFFSET(0x182092F0)
#define MIHOYO_SDK_CONFIGMANAGER_GETMODULESCONFIG_OFFSET UNITYSDK_OFFSET(0x182005C0)
#define MIHOYO_SDK_CONFIGMANAGER_GETPROTOCOLURL_OFFSET UNITYSDK_OFFSET(0x182093F0)
#define MIHOYO_SDK_CONFIGMANAGER_GETRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x18200290)
#define MIHOYO_SDK_CONFIGMANAGER_GET_ANNOUNCEURL_OFFSET UNITYSDK_OFFSET(0x181FFB60)
#define MIHOYO_SDK_CONFIGMANAGER_ISCONSOLEINPUTENABLE_OFFSET UNITYSDK_OFFSET(0x18209C20)
#define MIHOYO_SDK_CONFIGMANAGER_ISEXISTPAYLIMITTIPSKEY_OFFSET UNITYSDK_OFFSET(0x182080F0)
#define MIHOYO_SDK_CONFIGMANAGER_ISINVALIDDEVICEID_OFFSET UNITYSDK_OFFSET(0x181FFC60)
#define MIHOYO_SDK_CONFIGMANAGER_ISKEYBOARADINPUTENABLE_OFFSET UNITYSDK_OFFSET(0x18209CB0)
#define MIHOYO_SDK_CONFIGMANAGER_ISLOGINRECORDCHECKED_OFFSET UNITYSDK_OFFSET(0x18209B20)
#define MIHOYO_SDK_CONFIGMANAGER_ISOVERSEA_OFFSET UNITYSDK_OFFSET(0x181D7C80)
#define MIHOYO_SDK_CONFIGMANAGER_ISTEST_OFFSET UNITYSDK_OFFSET(0x18206BA0)
#define MIHOYO_SDK_CONFIGMANAGER_ISUSECNPAYPLAT_OFFSET UNITYSDK_OFFSET(0x18203870)
#define MIHOYO_SDK_CONFIGMANAGER_LOADBOXCONFIGCACHECONSOLEOVERSEAS_OFFSET UNITYSDK_OFFSET(0x182048B0)
#define MIHOYO_SDK_CONFIGMANAGER_LOADBOXCONFIGCACHE_OFFSET UNITYSDK_OFFSET(0x18204BF0)
#define MIHOYO_SDK_CONFIGMANAGER_LOADCOLORCONFIG_OFFSET UNITYSDK_OFFSET(0x182031C0)
#define MIHOYO_SDK_CONFIGMANAGER_LOADLOCALCONFIG_OFFSET UNITYSDK_OFFSET(0x18202750)
#define MIHOYO_SDK_CONFIGMANAGER_LOADLOCALMDKCONFIG_OFFSET UNITYSDK_OFFSET(0x18206E00)
#define MIHOYO_SDK_CONFIGMANAGER_LOADPSCONFIG_OFFSET UNITYSDK_OFFSET(0x18203610)
#define MIHOYO_SDK_CONFIGMANAGER_LOADSKINCOLORCONFIG_OFFSET UNITYSDK_OFFSET(0x18203460)
#define MIHOYO_SDK_CONFIGMANAGER_ONGETBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x18204FB0)
#define MIHOYO_SDK_CONFIGMANAGER_ONGETCOMBOCONFIGPS_OFFSET UNITYSDK_OFFSET(0x18207BA0)
#define MIHOYO_SDK_CONFIGMANAGER_ONGETCOMBOCONFIG_OFFSET UNITYSDK_OFFSET(0x18207330)
#define MIHOYO_SDK_CONFIGMANAGER_ONGETPASSPORTCONFIG_OFFSET UNITYSDK_OFFSET(0x18209FE0)
#define MIHOYO_SDK_CONFIGMANAGER_ONGETSWBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x18205880)
#define MIHOYO_SDK_CONFIGMANAGER_REQUESTBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x181F74E0)
#define MIHOYO_SDK_CONFIGMANAGER_REQUESTCOMBOCONFIGPS_OFFSET UNITYSDK_OFFSET(0x182042B0)
#define MIHOYO_SDK_CONFIGMANAGER_REQUESTCOMBOCONFIG_1_OFFSET UNITYSDK_OFFSET(0x182045E0)
#define MIHOYO_SDK_CONFIGMANAGER_REQUESTCOMBOCONFIG_OFFSET UNITYSDK_OFFSET(0x18203FB0)
#define MIHOYO_SDK_CONFIGMANAGER_REQUESTMDKCONFIG_OFFSET UNITYSDK_OFFSET(0x18203A90)
#define MIHOYO_SDK_CONFIGMANAGER_REQUESTPASSPORTGETCONFIG_OFFSET UNITYSDK_OFFSET(0x18209D40)
#define MIHOYO_SDK_CONFIGMANAGER_REQUESTSWBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x182055F0)
#define MIHOYO_SDK_CONFIGMANAGER_SAVEBOXCONFIGCACHE_OFFSET UNITYSDK_OFFSET(0x18205280)
#define MIHOYO_SDK_CONFIGMANAGER_SAVEBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x18206330)
#define MIHOYO_SDK_CONFIGMANAGER_SAVELOGOUTCHOICE_OFFSET UNITYSDK_OFFSET(0x18209210)
#define MIHOYO_SDK_CONFIGMANAGER_SETAPPID_OFFSET UNITYSDK_OFFSET(0x182002D0)
#define MIHOYO_SDK_CONFIGMANAGER_SETAPPKEY_OFFSET UNITYSDK_OFFSET(0x182004F0)
#define MIHOYO_SDK_CONFIGMANAGER_SETCOMBOAPPID_OFFSET UNITYSDK_OFFSET(0x18200340)
#define MIHOYO_SDK_CONFIGMANAGER_SETCOMBOAPPKEY_OFFSET UNITYSDK_OFFSET(0x182003B0)
#define MIHOYO_SDK_CONFIGMANAGER_SETDEVICEID_OFFSET UNITYSDK_OFFSET(0x181F7330)
#define MIHOYO_SDK_CONFIGMANAGER_SETENV_OFFSET UNITYSDK_OFFSET(0x181F7B60)
#define MIHOYO_SDK_CONFIGMANAGER_SETGAMEKEY_OFFSET UNITYSDK_OFFSET(0x18200420)
#define MIHOYO_SDK_CONFIGMANAGER_SETGAMEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x181FFE20)
#define MIHOYO_SDK_CONFIGMANAGER_SETJOYPADCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x18203A10)
#define MIHOYO_SDK_CONFIGMANAGER_SETJOYPADENABLE_1_OFFSET UNITYSDK_OFFSET(0x18203A30)
#define MIHOYO_SDK_CONFIGMANAGER_SETJOYPADENABLE_OFFSET UNITYSDK_OFFSET(0x182039D0)
#define MIHOYO_SDK_CONFIGMANAGER_SETJOYPADEXCHANGE_OFFSET UNITYSDK_OFFSET(0x18203A70)
#define MIHOYO_SDK_CONFIGMANAGER_SETJOYPADTYPE_OFFSET UNITYSDK_OFFSET(0x18203A50)
#define MIHOYO_SDK_CONFIGMANAGER_SETLISTPRICETIERKEY_1_OFFSET UNITYSDK_OFFSET(0x18209190)
#define MIHOYO_SDK_CONFIGMANAGER_SETLISTPRICETIERKEY_OFFSET UNITYSDK_OFFSET(0x18208EB0)
#define MIHOYO_SDK_CONFIGMANAGER_SETLOCALGUESTSTATUS_OFFSET UNITYSDK_OFFSET(0x18200110)
#define MIHOYO_SDK_CONFIGMANAGER_SETPAYLIMITTIPSKEY_OFFSET UNITYSDK_OFFSET(0x18208480)
#define MIHOYO_SDK_CONFIGMANAGER_SETSHOWLOGINCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x182001B0)
#define MIHOYO_SDK_CONFIGMANAGER_SET_ANNOUNCEURL_OFFSET UNITYSDK_OFFSET(0x181FFBE0)
#define MIHOYO_SDK_CONFIGMANAGER_UPDATECHANNEL_OFFSET UNITYSDK_OFFSET(0x18203800)
#define MIHOYO_SDK_CONFIGMANAGER_UPDATECONFIG_OFFSET UNITYSDK_OFFSET(0x18206CA0)
#define MIHOYO_SDK_CONFIGMANAGER_UPDATEGAMEKEY_OFFSET UNITYSDK_OFFSET(0x181F79E0)
#define MIHOYO_SDK_CONFIGMANAGER_UPDATEQRAPPICONS_OFFSET UNITYSDK_OFFSET(0x18206EC0)
#define MIHOYO_SDK_CONFIGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1820A130)
#define MIHOYO_SDK_CONFIGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1820A0A0)
#define MIHOYO_SDK_CONFIGMANAGER__DEVICEFPREFRESH_B__51_0_OFFSET UNITYSDK_OFFSET(0x1820A1F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager_TypeDefinitionIndex = 8142;

	class ConfigManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_psClientId()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ConfigManager_TypeDefinitionIndex)->GetStaticField(0x640);
		}
		static ::MiHoYo::SDK::ConfigManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::ConfigManager**)Il2CppClass::FromTypeDefinitionIndex(ConfigManager_TypeDefinitionIndex)->GetStaticField(0x648);
		}
		static ::System::Boolean* StaticGet_configLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigManager_TypeDefinitionIndex)->GetStaticField(0x570);
		}
		static ::System::Boolean* StaticGet_sm_bCNAccountPlatInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigManager_TypeDefinitionIndex)->GetStaticField(0x571);
		}
		static ::System::Boolean* StaticGet_isAutoTestEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConfigManager_TypeDefinitionIndex)->GetStaticField(0x572);
		}
		// static const ::System::String* DEVICE_ID; // 0x0
		// static const ::System::String* DEVICE_FP; // 0x0
		// static const ::System::String* REGISTRY_KEY_NAME; // 0x0
		// static const ::System::String* SOFTWARE; // 0x0
		// static const ::System::String* ANNOUNCE_URL; // 0x0
		// static const ::System::String* PROTOCOL_KEY; // 0x0
		// static const ::System::String* PROTOCOL_SHOW_FLAG; // 0x0
		// static const ::System::String* PROTOCOL_LAUNCH_VERSION; // 0x0
		// static const ::System::String* PROTOCOL_LAUNCH_SHOW_FLAG; // 0x0
		// static const ::System::String* PROTOCOL_LAUNCH_FALLBACK_FLAG; // 0x0
		// static const ::System::String* CONFIG_MODEL_NAME; // 0x0
		// static const ::System::String* AB_TEST_LOGIN_CONFIGS; // 0x0
		// static const ::System::String* CLIENT_CONFIG; // 0x0
		// static const ::System::String* PAY_DIALOG_ABTEST_CN; // 0x0
		// static const ::System::String* WEBVIEW_RENDER_METHOD; // 0x0
		// static const ::System::String* USER_AGREEMENT_SHOW_FLAG; // 0x0
		// static const ::System::String* PAY_LIMIT_TIPS_KEY; // 0x0
		// static const ::System::String* MIHOYOSDK_LIST_PRICE_TIER_KEY; // 0x0
		// static const ::System::String* USER_AGREEMENT_STATE_LAST_TIME; // 0x0
		// static const ::System::String* USER_CENTER_ENABLE_LAST_TIME; // 0x0
		// static const ::System::String* QR_CODE_ENABLE_LAST_TIME; // 0x0
		// static const ::System::String* QR_CODE_BBS_ENABLE_LAST_TIME; // 0x0
		// static const ::System::String* QR_CODE_CLOUD_ENABLE_LAST_TIME; // 0x0
		// static const ::System::String* LOGOUT_CHOICE_CACHED; // 0x0
		// static const ::System::String* BOX_CONFIGS; // 0x0
		// static const ::System::String* PRELOAD_ENABLE; // 0x0
		// static const ::System::String* PRELOAD_URL; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* consleControlMethod; // 0x10
		::System::String* _announce_url; // 0x18
		::System::String* deviceFP; // 0x20
		::System::String* deviceID; // 0x28
		::System::String* joypadType; // 0x30
		::System::String* joypadExchange; // 0x38
		::System::String* webViewRenderMethod; // 0x40
		::System::Int32 joypadCloseBtn; // 0x48
		::System::Boolean joypadEnable; // 0x4C
		::System::Boolean userLogin; // 0x4D
		::System::Boolean accountListLoginInProcess; // 0x4E
		::System::Boolean hoyopass; // 0x4F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER__CCTOR_OFFSET))();
		}

		::System::String* get_announceURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GET_ANNOUNCEURL_OFFSET))(this);
		}

		::System::Void set_announceURL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SET_ANNOUNCEURL_OFFSET))(this, a1);
		}

		::System::Void SetDeviceID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETDEVICEID_OFFSET))(this, a1);
		}

		::System::Boolean IsInvalidDeviceID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ISINVALIDDEVICEID_OFFSET))(this);
		}

		::System::String* GetDeviceID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETDEVICEID_OFFSET))(this);
		}

		::System::String* GetDeviceFP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETDEVICEFP_OFFSET))(this);
		}

		::System::Void DeviceFPRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_DEVICEFPREFRESH_OFFSET))(this);
		}

		::System::Void SetGameParameters(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETGAMEPARAMETERS_OFFSET))(this, a1);
		}

		::System::Void SetLocalGuestStatus(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETLOCALGUESTSTATUS_OFFSET))(this, a1);
		}

		::System::Void SetShowLoginCloseButton(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETSHOWLOGINCLOSEBUTTON_OFFSET))(this, a1);
		}

		::System::String* GetAsbPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETASBPATH_OFFSET))(this);
		}

		::System::String* GetResourcePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETRESOURCEPATH_OFFSET))(this);
		}

		::System::Void SetAppID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETAPPID_OFFSET))(this, a1);
		}

		::System::Void SetComboAppID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETCOMBOAPPID_OFFSET))(this, a1);
		}

		::System::Void SetComboAppKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETCOMBOAPPKEY_OFFSET))(this, a1);
		}

		::System::Void SetGameKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETGAMEKEY_OFFSET))(this, a1);
		}

		::System::Void SetAppKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETAPPKEY_OFFSET))(this, a1);
		}

		::System::String* GetBundleID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETBUNDLEID_OFFSET))(this);
		}

		::MiHoYo::SDK::LocalConfig* GetModulesConfig(::MiHoYo::SDK::EnvType a1)
		{
			return ((::MiHoYo::SDK::LocalConfig*(*)(::PVOID, ::MiHoYo::SDK::EnvType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETMODULESCONFIG_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::LocalConfig* LoadLocalConfig(::MiHoYo::SDK::EnvType a1, ::System::Boolean a2)
		{
			return ((::MiHoYo::SDK::LocalConfig*(*)(::PVOID, ::MiHoYo::SDK::EnvType, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_LOADLOCALCONFIG_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::ColorModel* LoadColorConfig()
		{
			return ((::MiHoYo::SDK::ColorModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_LOADCOLORCONFIG_OFFSET))(this);
		}

		::MiHoYo::SDK::SkinColorModel* LoadSkinColorConfig()
		{
			return ((::MiHoYo::SDK::SkinColorModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_LOADSKINCOLORCONFIG_OFFSET))(this);
		}

		::MiHoYo::SDK::PSConfig* LoadPSConfig()
		{
			return ((::MiHoYo::SDK::PSConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_LOADPSCONFIG_OFFSET))(this);
		}

		static ::MiHoYo::SDK::EnvType GetEnvTypeWithString(::System::String* a1)
		{
			return ((::MiHoYo::SDK::EnvType(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETENVTYPEWITHSTRING_OFFSET))(a1);
		}

		::System::Void SetEnv(::MiHoYo::SDK::EnvType a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::EnvType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETENV_OFFSET))(this, a1);
		}

		::System::Void UpdateGameKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_UPDATEGAMEKEY_OFFSET))(this, a1);
		}

		::System::Void UpdateChannel(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_UPDATECHANNEL_OFFSET))(this, a1);
		}

		::System::Boolean IsOverSea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ISOVERSEA_OFFSET))(this);
		}

		::System::Boolean EnvIsOversea(::MiHoYo::SDK::EnvType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::EnvType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ENVISOVERSEA_OFFSET))(this, a1);
		}

		::System::Boolean IsUseCNPayPlat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ISUSECNPAYPLAT_OFFSET))(this);
		}

		::System::Void SetJoyPadEnable(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETJOYPADENABLE_OFFSET))(this, a1);
		}

		::System::Void SetJoyPadCloseButton(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETJOYPADCLOSEBUTTON_OFFSET))(this, a1);
		}

		::System::Int32 GetJoyPadCloseButton()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETJOYPADCLOSEBUTTON_OFFSET))(this);
		}

		::System::Void SetJoyPadEnable_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETJOYPADENABLE_1_OFFSET))(this, a1);
		}

		::System::Boolean GetJoyPadEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETJOYPADENABLE_OFFSET))(this);
		}

		::System::Void SetJoyPadType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETJOYPADTYPE_OFFSET))(this, a1);
		}

		::System::String* GetJoyPadType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETJOYPADTYPE_OFFSET))(this);
		}

		::System::Void SetJoyPadExchange(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETJOYPADEXCHANGE_OFFSET))(this, a1);
		}

		::System::String* GetJoyPadExchange()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETJOYPADEXCHANGE_OFFSET))(this);
		}

		::System::Void RequestMDKConfig(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_REQUESTMDKCONFIG_OFFSET))(this, a1);
		}

		::System::Void RequestComboConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_REQUESTCOMBOCONFIG_OFFSET))(this);
		}

		::System::Void RequestComboConfigPS()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_REQUESTCOMBOCONFIGPS_OFFSET))(this);
		}

		::System::Void RequestComboConfig_1(::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_REQUESTCOMBOCONFIG_1_OFFSET))(this, a1);
		}

		::System::Void RequestBoxConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_REQUESTBOXCONFIG_OFFSET))(this);
		}

		::System::Void OnGetBoxConfig(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ONGETBOXCONFIG_OFFSET))(this, a1);
		}

		::System::Void RequestSwBoxConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_REQUESTSWBOXCONFIG_OFFSET))(this);
		}

		::System::Void OnGetSwBoxConfig(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ONGETSWBOXCONFIG_OFFSET))(this, a1);
		}

		::System::Void SaveBoxConfigCache(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SAVEBOXCONFIGCACHE_OFFSET))(this, a1);
		}

		::System::Void LoadBoxConfigCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_LOADBOXCONFIGCACHE_OFFSET))(this);
		}

		::System::Void LoadBoxConfigCacheConsoleOverseas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_LOADBOXCONFIGCACHECONSOLEOVERSEAS_OFFSET))(this);
		}

		::System::String* GetBoxConfigCacheKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETBOXCONFIGCACHEKEY_OFFSET))(this);
		}

		::System::Boolean CheckShowMailBind(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_CHECKSHOWMAILBIND_OFFSET))(this, a1);
		}

		::System::String* GetBoxConfig()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETBOXCONFIG_OFFSET))(this);
		}

		::System::Void SaveBoxConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SAVEBOXCONFIG_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::SceneType CheckSceneType()
		{
			return ((::MiHoYo::SDK::SceneType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_CHECKSCENETYPE_OFFSET))(this);
		}

		::System::Boolean IsTest(::System::String*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ISTEST_OFFSET))(this, a1);
		}

		::System::Void UpdateConfig(::MiHoYo::SDK::MDKConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MDKConfig*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_UPDATECONFIG_OFFSET))(this, a1);
		}

		::System::Void LoadLocalMDKConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_LOADLOCALMDKCONFIG_OFFSET))(this);
		}

		::System::Void UpdateQRAppIcons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_UPDATEQRAPPICONS_OFFSET))(this);
		}

		::System::Void OnGetComboConfig(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ONGETCOMBOCONFIG_OFFSET))(this, a1);
		}

		::System::Void OnGetComboConfigPS(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ONGETCOMBOCONFIGPS_OFFSET))(this, a1);
		}

		::System::String* GetABTestKey(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETABTESTKEY_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::ABTestModel* GetABTestConfig(::System::String* a1)
		{
			return ((::MiHoYo::SDK::ABTestModel*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETABTESTCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean IsExistPayLimitTipsKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ISEXISTPAYLIMITTIPSKEY_OFFSET))(this);
		}

		::System::Void SetPayLimitTipsKey(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETPAYLIMITTIPSKEY_OFFSET))(this, a1);
		}

		::System::Void AddPayLimitTipsKey(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ADDPAYLIMITTIPSKEY_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::JSONNode* GetListPriceTierKey(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETLISTPRICETIERKEY_OFFSET))(this, a1, a2, a3);
		}

		::MiHoYo::SDK::JSONNode* GetListPriceTierKey_1(::System::String* a1, ::System::String* a2)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETLISTPRICETIERKEY_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetListPriceTierKey(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETLISTPRICETIERKEY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetListPriceTierKey_1(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SETLISTPRICETIERKEY_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SaveLogoutChoice(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_SAVELOGOUTCHOICE_OFFSET))(this, a1);
		}

		::System::Boolean GetLogoutChoice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETLOGOUTCHOICE_OFFSET))(this);
		}

		::System::String* GetProtocolUrl(::System::String* a1, ::System::String*& a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_GETPROTOCOLURL_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsLoginRecordChecked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ISLOGINRECORDCHECKED_OFFSET))(this);
		}

		::System::Boolean IsConsoleInputEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ISCONSOLEINPUTENABLE_OFFSET))(this);
		}

		::System::Boolean IsKeyboaradInputEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ISKEYBOARADINPUTENABLE_OFFSET))(this);
		}

		::System::Void RequestPassportGetConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_REQUESTPASSPORTGETCONFIG_OFFSET))(this);
		}

		::System::Void OnGetPassportConfig(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ONGETPASSPORTCONFIG_OFFSET))(this, a1);
		}

		::System::Void _DeviceFPRefresh_b__51_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER__DEVICEFPREFRESH_B__51_0_OFFSET))(this, a1);
		}
	};
}
