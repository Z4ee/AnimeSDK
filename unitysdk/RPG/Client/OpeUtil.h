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

#define RPG_CLIENT_OPEUTIL_CLEARSETDEVICECOROUTINE_OFFSET UNITYSDK_OFFSET(0xD9F0230)
#define RPG_CLIENT_OPEUTIL_CONVERTENCRYPTURL_OFFSET UNITYSDK_OFFSET(0xD9F0500)
#define RPG_CLIENT_OPEUTIL_CONVERTEVENTURL_OFFSET UNITYSDK_OFFSET(0xD9ED370)
#define RPG_CLIENT_OPEUTIL_DEVICEINFOURL_OFFSET UNITYSDK_OFFSET(0xD9F0390)
#define RPG_CLIENT_OPEUTIL_GENERALURLPARAMSTRING_OFFSET UNITYSDK_OFFSET(0xD9ECE10)
#define RPG_CLIENT_OPEUTIL_GENERALURL_1_OFFSET UNITYSDK_OFFSET(0xD9ED0F0)
#define RPG_CLIENT_OPEUTIL_GENERALURL_OFFSET UNITYSDK_OFFSET(0xD9ED060)
#define RPG_CLIENT_OPEUTIL_ISGPSINFONEEDED_OFFSET UNITYSDK_OFFSET(0xD9F07A0)
#define RPG_CLIENT_OPEUTIL_OPENBANAPPEALURL_OFFSET UNITYSDK_OFFSET(0xD9ED300)
#define RPG_CLIENT_OPEUTIL_OPENDISPATCHURL_OFFSET UNITYSDK_OFFSET(0xD9F1230)
#define RPG_CLIENT_OPEUTIL_OPENGACHADETAILURL_OFFSET UNITYSDK_OFFSET(0xD9F0900)
#define RPG_CLIENT_OPEUTIL_OPENGACHAHISTORYURL_OFFSET UNITYSDK_OFFSET(0xD9F0DD0)
#define RPG_CLIENT_OPEUTIL_OPENURLDIRECT_OFFSET UNITYSDK_OFFSET(0xD9EE2E0)
#define RPG_CLIENT_OPEUTIL_OPENURLINEMBEDDEDBROWSER_OFFSET UNITYSDK_OFFSET(0xD9EE250)
#define RPG_CLIENT_OPEUTIL_OPENURLINEXTERNALBROWSER_OFFSET UNITYSDK_OFFSET(0xD9ED270)
#define RPG_CLIENT_OPEUTIL_OPENURLWITHLOGINSTATE_OFFSET UNITYSDK_OFFSET(0xD9EE370)
#define RPG_CLIENT_OPEUTIL_PARSEURL_1_OFFSET UNITYSDK_OFFSET(0xD9ECC70)
#define RPG_CLIENT_OPEUTIL_PARSEURL_OFFSET UNITYSDK_OFFSET(0xD9EC510)
#define RPG_CLIENT_OPEUTIL_REPEATSENDDEVICEINFO_OFFSET UNITYSDK_OFFSET(0xD9F02F0)
#define RPG_CLIENT_OPEUTIL_SENDDEVICEINFO_OFFSET UNITYSDK_OFFSET(0xD9F0130)
#define RPG_CLIENT_OPEUTIL_SETUPHTTPGAMEPARAMS_OFFSET UNITYSDK_OFFSET(0xD9F1D10)
#define RPG_CLIENT_OPEUTIL_SETUPHTTPRISKCONTROLPARAMS_OFFSET UNITYSDK_OFFSET(0xD9F14C0)
#define RPG_CLIENT_OPEUTIL_SETUPRESERVEDPARAM_OFFSET UNITYSDK_OFFSET(0xD9EF560)
#define RPG_CLIENT_OPEUTIL_SWAPSTR_OFFSET UNITYSDK_OFFSET(0xD9EFF40)
#define RPG_CLIENT_OPEUTIL_TESTOPENURL_OFFSET UNITYSDK_OFFSET(0xD9ED170)
#define RPG_CLIENT_OPEUTIL__ADDAUTHKEYPARAM_OFFSET UNITYSDK_OFFSET(0xD9EE990)
#define RPG_CLIENT_OPEUTIL__ADDCLIIDPARAM_OFFSET UNITYSDK_OFFSET(0xD9EF190)
#define RPG_CLIENT_OPEUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0xD9F20B0)
#define RPG_CLIENT_OPEUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0xD9F20A0)
#define RPG_CLIENT_OPEUTIL__GETCLIID_OFFSET UNITYSDK_OFFSET(0xD9F00B0)
#define RPG_CLIENT_OPEUTIL__INCLUDEAUTHKEY_OFFSET UNITYSDK_OFFSET(0xD9EE6E0)
#define RPG_CLIENT_OPEUTIL__INTERNALOPENURL_OFFSET UNITYSDK_OFFSET(0xD9EED80)
#define RPG_CLIENT_OPEUTIL__SETUPURLPLATFORMTYPEPARAM_OFFSET UNITYSDK_OFFSET(0xD9EE3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int OpeUtil_TypeDefinitionIndex = 59308;

	class OpeUtil : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_CDKEY_URL_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB8C0);
		}
		static ::System::String** StaticGet_CLI_ID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB8C8);
		}
		static ::System::String** StaticGet_OperatingSystem()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB8D0);
		}
		static ::System::String** StaticGet_NEW_SIGN_TYPE_VALUE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB8D8);
		}
		static ::System::String** StaticGet_CDKEY_REQUEST_URL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB8E0);
		}
		static ::UnityEngine::Coroutine** StaticGet_setInfoCoroutine()
		{
			return (::UnityEngine::Coroutine**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB8E8);
		}
		static ::System::String** StaticGet_CHANNEL_ID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB8F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_RESERVED_WORDS()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB8F8);
		}
		static ::System::String** StaticGet_GAME_BIZ()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB900);
		}
		static ::System::String** StaticGet_AUTH_KEY_VERSION_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB908);
		}
		static ::System::String** StaticGet_DeviceModel()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB910);
		}
		static ::System::String** StaticGet_DeviceName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB918);
		}
		static ::System::String** StaticGet_CDKEY_URL_TO_USE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB920);
		}
		static ::System::String** StaticGet_DeviceFP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB928);
		}
		static ::System::String** StaticGet_Platform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB930);
		}
		static ::System::String** StaticGet_PLAT_TYPE_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB938);
		}
		static ::System::String** StaticGet_AppVersion()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB940);
		}
		static ::System::String** StaticGet_CLOUD_GAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB948);
		}
		static ::System::String** StaticGet_DeviceID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB950);
		}
		static ::System::String** StaticGet_AUTH_APP_ID_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB958);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_deviceParamDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB960);
		}
		static ::System::String** StaticGet_ExtraDeviceInfo()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB968);
		}
		static ::System::String** StaticGet_SIGN_TYPE_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB970);
		}
		static ::System::String** StaticGet_AUTH_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0xB978);
		}
		static ::System::Single* StaticGet_TrySpan()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x2790);
		}
		static ::System::Int32* StaticGet_TryCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x2794);
		}
		static ::System::Int32* StaticGet_MaxTryCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x2798);
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

		static ::System::Void ParseUrl(::System::String* a1, ::System::String*& a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_PARSEURL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ParseUrl_1(::System::String* a1, ::System::String*& a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*& a3, ::System::String*& a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*&, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_PARSEURL_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* GeneralUrlParamString(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::String*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_GENERALURLPARAMSTRING_OFFSET))(a1);
		}

		static ::System::String* GeneralUrl(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_GENERALURL_OFFSET))(a1, a2);
		}

		static ::System::String* GeneralUrl_1(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_GENERALURL_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void TestOpenURL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_TESTOPENURL_OFFSET))();
		}

		static ::System::Void OpenBanAppealUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_OPENBANAPPEALURL_OFFSET))(a1);
		}

		static ::System::Void OpenURLInExternalBrowser(::System::String* a1, ::RPG::Client::ParseUrlCallBack* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::ParseUrlCallBack*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_OPENURLINEXTERNALBROWSER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void OpenURLInEmbeddedBrowser(::System::String* a1, ::RPG::Client::ParseUrlCallBack* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::ParseUrlCallBack*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_OPENURLINEMBEDDEDBROWSER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void OpenURLDirect(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_OPENURLDIRECT_OFFSET))(a1, a2);
		}

		static ::System::Void OpenURLWithLoginState(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_OPENURLWITHLOGINSTATE_OFFSET))(a1, a2);
		}

		static ::System::Void ConvertEventUrl(::System::String* a1, ::RPG::Client::ParseUrlCallBack* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::ParseUrlCallBack*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_CONVERTEVENTURL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean _IncludeAuthkey(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__INCLUDEAUTHKEY_OFFSET))(a1);
		}

		static ::System::Void _AddAuthkeyParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__ADDAUTHKEYPARAM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddCliIDParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__ADDCLIIDPARAM_OFFSET))(a1);
		}

		static ::System::Void _InternalOpenUrl(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::String* a3, ::System::Boolean a4, ::RPG::Client::ParseUrlCallBack* a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*, ::System::Boolean, ::RPG::Client::ParseUrlCallBack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__INTERNALOPENURL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::String* _GetCliID()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__GETCLIID_OFFSET))();
		}

		static ::System::Void SendDeviceInfo(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_SENDDEVICEINFO_OFFSET))(a1, a2);
		}

		static ::System::Collections::IEnumerator* RepeatSendDeviceInfo(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_REPEATSENDDEVICEINFO_OFFSET))(a1, a2);
		}

		static ::System::Void ClearSetDeviceCoroutine()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_CLEARSETDEVICECOROUTINE_OFFSET))();
		}

		static ::System::String* DeviceInfoUrl()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_DEVICEINFOURL_OFFSET))();
		}

		static ::System::Void _SetupUrlPlatformTypeParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL__SETUPURLPLATFORMTYPEPARAM_OFFSET))(a1);
		}

		static ::System::Void SetupReservedParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*& a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_SETUPRESERVEDPARAM_OFFSET))(a1, a2);
		}

		static ::System::String* ConvertEncryptUrl(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_CONVERTENCRYPTURL_OFFSET))(a1, a2);
		}

		static ::System::String* SwapStr(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_SWAPSTR_OFFSET))(a1);
		}

		static ::System::Boolean IsGPSInfoNeeded(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_ISGPSINFONEEDED_OFFSET))(a1);
		}

		static ::System::Void OpenGachaDetailURL(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_OPENGACHADETAILURL_OFFSET))(a1);
		}

		static ::System::Void OpenGachaHistoryURL(::System::String* a1, ::RPG::GameCore::GachaType a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::GameCore::GachaType, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_OPENGACHAHISTORYURL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OpenDispatchUrl(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_OPENDISPATCHURL_OFFSET))(a1, a2, a3, a4);
		}

		static ::Class_1_AC6C63F15E9794D3* SetupHttpRiskControlParams(::Class_1_AC6C63F15E9794D3* a1)
		{
			return ((::Class_1_AC6C63F15E9794D3*(*)(::Class_1_AC6C63F15E9794D3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_SETUPHTTPRISKCONTROLPARAMS_OFFSET))(a1);
		}

		static ::Class_1_AC6C63F15E9794D3* SetupHttpGameParams(::Class_1_AC6C63F15E9794D3* a1)
		{
			return ((::Class_1_AC6C63F15E9794D3*(*)(::Class_1_AC6C63F15E9794D3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_SETUPHTTPGAMEPARAMS_OFFSET))(a1);
		}
	};
}
