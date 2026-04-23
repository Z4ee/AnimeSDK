#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/Object.h"

class Class_1_AC6C63F15E9794D3;
namespace RPG::Client { class ParseUrlCallBack; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define RPG_CLIENT_OPEUTIL_CLEARSETDEVICECOROUTINE_OFFSET UNITYSDK_OFFSET(0xABF4B70)
#define RPG_CLIENT_OPEUTIL_CONVERTENCRYPTURL_OFFSET UNITYSDK_OFFSET(0xABF4EF0)
#define RPG_CLIENT_OPEUTIL_CONVERTEVENTURL_OFFSET UNITYSDK_OFFSET(0xABF1E40)
#define RPG_CLIENT_OPEUTIL_DEVICEINFOURL_OFFSET UNITYSDK_OFFSET(0xABF4D80)
#define RPG_CLIENT_OPEUTIL_GENERALURLPARAMSTRING_OFFSET UNITYSDK_OFFSET(0xABF1950)
#define RPG_CLIENT_OPEUTIL_GENERALURL_1_OFFSET UNITYSDK_OFFSET(0xABF1BC0)
#define RPG_CLIENT_OPEUTIL_GENERALURL_OFFSET UNITYSDK_OFFSET(0xABD53B0)
#define RPG_CLIENT_OPEUTIL_ISGPSINFONEEDED_OFFSET UNITYSDK_OFFSET(0xABF5210)
#define RPG_CLIENT_OPEUTIL_OPENBANAPPEALURL_OFFSET UNITYSDK_OFFSET(0xABF1DD0)
#define RPG_CLIENT_OPEUTIL_OPENDISPATCHURL_OFFSET UNITYSDK_OFFSET(0xABF5C60)
#define RPG_CLIENT_OPEUTIL_OPENGACHADETAILURL_OFFSET UNITYSDK_OFFSET(0xABF5380)
#define RPG_CLIENT_OPEUTIL_OPENGACHAHISTORYURL_OFFSET UNITYSDK_OFFSET(0xABF5820)
#define RPG_CLIENT_OPEUTIL_OPENURLDIRECT_OFFSET UNITYSDK_OFFSET(0xABF2D10)
#define RPG_CLIENT_OPEUTIL_OPENURLINEMBEDDEDBROWSER_OFFSET UNITYSDK_OFFSET(0xABF2C80)
#define RPG_CLIENT_OPEUTIL_OPENURLINEXTERNALBROWSER_OFFSET UNITYSDK_OFFSET(0xABF1D40)
#define RPG_CLIENT_OPEUTIL_OPENURLWITHLOGINSTATE_OFFSET UNITYSDK_OFFSET(0xABF2DA0)
#define RPG_CLIENT_OPEUTIL_PARSEURL_1_OFFSET UNITYSDK_OFFSET(0xABF17B0)
#define RPG_CLIENT_OPEUTIL_PARSEURL_OFFSET UNITYSDK_OFFSET(0xABD4E50)
#define RPG_CLIENT_OPEUTIL_REPEATSENDDEVICEINFO_OFFSET UNITYSDK_OFFSET(0xABF4CE0)
#define RPG_CLIENT_OPEUTIL_SENDDEVICEINFO_OFFSET UNITYSDK_OFFSET(0xABF49F0)
#define RPG_CLIENT_OPEUTIL_SETUPHTTPGAMEPARAMS_OFFSET UNITYSDK_OFFSET(0xABF65C0)
#define RPG_CLIENT_OPEUTIL_SETUPHTTPRISKCONTROLPARAMS_OFFSET UNITYSDK_OFFSET(0xABF5FD0)
#define RPG_CLIENT_OPEUTIL_SETUPRESERVEDPARAM_OFFSET UNITYSDK_OFFSET(0xABF3DD0)
#define RPG_CLIENT_OPEUTIL_SWAPSTR_OFFSET UNITYSDK_OFFSET(0xABF4800)
#define RPG_CLIENT_OPEUTIL_TESTOPENURL_OFFSET UNITYSDK_OFFSET(0xABF1C40)
#define RPG_CLIENT_OPEUTIL__ADDAUTHKEYPARAM_OFFSET UNITYSDK_OFFSET(0xABF3330)
#define RPG_CLIENT_OPEUTIL__ADDCLIIDPARAM_OFFSET UNITYSDK_OFFSET(0xABF3A90)
#define RPG_CLIENT_OPEUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0xABF6880)
#define RPG_CLIENT_OPEUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0xABF6870)
#define RPG_CLIENT_OPEUTIL__GETCLIID_OFFSET UNITYSDK_OFFSET(0xABF4970)
#define RPG_CLIENT_OPEUTIL__INCLUDEAUTHKEY_OFFSET UNITYSDK_OFFSET(0xABF3110)
#define RPG_CLIENT_OPEUTIL__INTERNALOPENURL_OFFSET UNITYSDK_OFFSET(0xABF3690)
#define RPG_CLIENT_OPEUTIL__SETUPURLPLATFORMTYPEPARAM_OFFSET UNITYSDK_OFFSET(0xABF2E20)

namespace RPG::Client
{
	inline static constexpr unsigned int OpeUtil_TypeDefinitionIndex = 54704;

	class OpeUtil : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_AppVersion()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B360);
		}
		static ::System::String** StaticGet_CDKEY_URL_TO_USE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B368);
		}
		static ::System::String** StaticGet_GAME_BIZ()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B370);
		}
		static ::System::String** StaticGet_CLOUD_GAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B378);
		}
		static ::System::String** StaticGet_ExtraDeviceInfo()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B380);
		}
		static ::System::String** StaticGet_DeviceID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B388);
		}
		static ::System::String** StaticGet_CDKEY_URL_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B390);
		}
		static ::System::String** StaticGet_AUTH_APP_ID_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B398);
		}
		static ::System::String** StaticGet_OperatingSystem()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B3A0);
		}
		static ::System::String** StaticGet_CHANNEL_ID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B3A8);
		}
		static ::System::String** StaticGet_NEW_SIGN_TYPE_VALUE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B3B0);
		}
		static ::UnityEngine::Coroutine** StaticGet_setInfoCoroutine()
		{
			return (::UnityEngine::Coroutine**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B3B8);
		}
		static ::System::String** StaticGet_PLAT_TYPE_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B3C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_deviceParamDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B3C8);
		}
		static ::System::String** StaticGet_DeviceFP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B3D0);
		}
		static ::System::String** StaticGet_DeviceName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B3D8);
		}
		static ::System::String** StaticGet_DeviceModel()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B3E0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_RESERVED_WORDS()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B3E8);
		}
		static ::System::String** StaticGet_Platform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B3F0);
		}
		static ::System::String** StaticGet_AUTH_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B3F8);
		}
		static ::System::String** StaticGet_SIGN_TYPE_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B400);
		}
		static ::System::String** StaticGet_CLI_ID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B408);
		}
		static ::System::String** StaticGet_AUTH_KEY_VERSION_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B410);
		}
		static ::System::String** StaticGet_CDKEY_REQUEST_URL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x5B418);
		}
		static ::System::Single* StaticGet_TrySpan()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x101C0);
		}
		static ::System::Int32* StaticGet_TryCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x101C4);
		}
		static ::System::Int32* StaticGet_MaxTryCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x101C8);
		}
		// static const ::System::String* SIGN_KEY; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__CCTOR_OFFSET))();
		}

		static ::System::Void ParseUrl(::System::String* url, ::System::String*& baseUrl, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*& paramDict)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_PARSEURL_OFFSET))(url, baseUrl, paramDict);
		}

		static ::System::Void ParseUrl_1(::System::String* url, ::System::String*& baseUrl, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*& paramDict, ::System::String*& fragment)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_PARSEURL_1_OFFSET))(url, baseUrl, paramDict, fragment);
		}

		static ::System::String* GeneralUrlParamString(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* paramDict)
		{
			return ((::System::String*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_GENERALURLPARAMSTRING_OFFSET))(paramDict);
		}

		static ::System::String* GeneralUrl(::System::String* baseUrl, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* paramDict)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_GENERALURL_OFFSET))(baseUrl, paramDict);
		}

		static ::System::String* GeneralUrl_1(::System::String* baseUrl, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* paramDict, ::System::String* fragment)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_GENERALURL_1_OFFSET))(baseUrl, paramDict, fragment);
		}

		static ::System::Void TestOpenURL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_TESTOPENURL_OFFSET))();
		}

		static ::System::Void OpenBanAppealUrl(::System::String* sourceUrl)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_OPENBANAPPEALURL_OFFSET))(sourceUrl);
		}

		static ::System::Void OpenURLInExternalBrowser(::System::String* sourceUrl, ::RPG::Client::ParseUrlCallBack* callBack, ::System::Boolean addLanguage, ::System::Boolean addPlatform)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::ParseUrlCallBack*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_OPENURLINEXTERNALBROWSER_OFFSET))(sourceUrl, callBack, addLanguage, addPlatform);
		}

		static ::System::Void OpenURLInEmbeddedBrowser(::System::String* sourceUrl, ::RPG::Client::ParseUrlCallBack* callBack, ::System::Boolean addLanguage, ::System::Boolean addPlatform)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::ParseUrlCallBack*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_OPENURLINEMBEDDEDBROWSER_OFFSET))(sourceUrl, callBack, addLanguage, addPlatform);
		}

		static ::System::Void OpenURLDirect(::System::String* sourceUrl, ::System::Boolean isExternalBrowser)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_OPENURLDIRECT_OFFSET))(sourceUrl, isExternalBrowser);
		}

		static ::System::Void OpenURLWithLoginState(::System::String* url, ::System::Boolean isExternalBrowser)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_OPENURLWITHLOGINSTATE_OFFSET))(url, isExternalBrowser);
		}

		static ::System::Void ConvertEventUrl(::System::String* sourceUrl, ::RPG::Client::ParseUrlCallBack* callBack, ::System::Boolean isExternalBrowser, ::System::Boolean addLanguage, ::System::Boolean addPlatform, ::System::Boolean hasAuthkeyInUrl)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::ParseUrlCallBack*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_CONVERTEVENTURL_OFFSET))(sourceUrl, callBack, isExternalBrowser, addLanguage, addPlatform, hasAuthkeyInUrl);
		}

		static ::System::Boolean _IncludeAuthkey(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* paramDict)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__INCLUDEAUTHKEY_OFFSET))(paramDict);
		}

		static ::System::Void _AddAuthkeyParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* paramDict, ::System::String* url, ::System::Boolean skipAddAuthkey)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__ADDAUTHKEYPARAM_OFFSET))(paramDict, url, skipAddAuthkey);
		}

		static ::System::Void _AddCliIDParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* paramDict)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__ADDCLIIDPARAM_OFFSET))(paramDict);
		}

		static ::System::Void _InternalOpenUrl(::System::String* baseUrl, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* paramDict, ::System::String* fragment, ::System::Boolean isExternalBrowser, ::RPG::Client::ParseUrlCallBack* callback)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*, ::System::Boolean, ::RPG::Client::ParseUrlCallBack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__INTERNALOPENURL_OFFSET))(baseUrl, paramDict, fragment, isExternalBrowser, callback);
		}

		static ::System::String* _GetCliID()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__GETCLIID_OFFSET))();
		}

		static ::System::Void SendDeviceInfo(::System::String* authKey, ::System::String* cliID)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_SENDDEVICEINFO_OFFSET))(authKey, cliID);
		}

		static ::System::Collections::IEnumerator* RepeatSendDeviceInfo(::System::String* authKey, ::System::String* cliID)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_REPEATSENDDEVICEINFO_OFFSET))(authKey, cliID);
		}

		static ::System::Void ClearSetDeviceCoroutine()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_CLEARSETDEVICECOROUTINE_OFFSET))();
		}

		static ::System::String* DeviceInfoUrl()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_DEVICEINFOURL_OFFSET))();
		}

		static ::System::Void _SetupUrlPlatformTypeParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* paramDict)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__SETUPURLPLATFORMTYPEPARAM_OFFSET))(paramDict);
		}

		static ::System::Void SetupReservedParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* paramDict, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*& reservedDict)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_SETUPRESERVEDPARAM_OFFSET))(paramDict, reservedDict);
		}

		static ::System::String* ConvertEncryptUrl(::System::String* baseUrl, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* paramDict)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_CONVERTENCRYPTURL_OFFSET))(baseUrl, paramDict);
		}

		static ::System::String* SwapStr(::System::String* sourceStr)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_SWAPSTR_OFFSET))(sourceStr);
		}

		static ::System::Boolean IsGPSInfoNeeded(::System::String* sourceUrl)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_ISGPSINFONEEDED_OFFSET))(sourceUrl);
		}

		static ::System::Void OpenGachaDetailURL(::System::String* sourceURL)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_OPENGACHADETAILURL_OFFSET))(sourceURL);
		}

		static ::System::Void OpenGachaHistoryURL(::System::String* sourceURL, ::RPG::GameCore::GachaType gachaType, ::System::Collections::Generic::List_1<::System::UInt32>* decideItemIDs)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::GameCore::GachaType, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_OPENGACHAHISTORYURL_OFFSET))(sourceURL, gachaType, decideItemIDs);
		}

		static ::System::Void OpenDispatchUrl(::System::String* url_key, ::System::Boolean useWebView, ::System::Boolean addLanguage, ::System::Boolean addPlatform)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_OPENDISPATCHURL_OFFSET))(url_key, useWebView, addLanguage, addPlatform);
		}

		static ::Class_1_AC6C63F15E9794D3* SetupHttpRiskControlParams(::Class_1_AC6C63F15E9794D3* req)
		{
			return ((::Class_1_AC6C63F15E9794D3*(*)(::Class_1_AC6C63F15E9794D3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_SETUPHTTPRISKCONTROLPARAMS_OFFSET))(req);
		}

		static ::Class_1_AC6C63F15E9794D3* SetupHttpGameParams(::Class_1_AC6C63F15E9794D3* req)
		{
			return ((::Class_1_AC6C63F15E9794D3*(*)(::Class_1_AC6C63F15E9794D3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_SETUPHTTPGAMEPARAMS_OFFSET))(req);
		}
	};
}
