#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/System/Object.h"

class Class_1_92B1BD6FC8375724;
namespace RPG::Client { class ParseUrlCallBack; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define RPG_CLIENT_OPEUTIL_CLEARSETDEVICECOROUTINE_OFFSET UNITYSDK_OFFSET(0x18283980)
#define RPG_CLIENT_OPEUTIL_CONVERTENCRYPTURL_OFFSET UNITYSDK_OFFSET(0x18283CD0)
#define RPG_CLIENT_OPEUTIL_CONVERTEVENTURL_OFFSET UNITYSDK_OFFSET(0x182809F0)
#define RPG_CLIENT_OPEUTIL_DEVICEINFOURL_OFFSET UNITYSDK_OFFSET(0x18283B60)
#define RPG_CLIENT_OPEUTIL_GENERALURLPARAMSTRING_OFFSET UNITYSDK_OFFSET(0x18280520)
#define RPG_CLIENT_OPEUTIL_GENERALURL_1_OFFSET UNITYSDK_OFFSET(0x18280770)
#define RPG_CLIENT_OPEUTIL_GENERALURL_OFFSET UNITYSDK_OFFSET(0x18263A90)
#define RPG_CLIENT_OPEUTIL_ISGPSINFONEEDED_OFFSET UNITYSDK_OFFSET(0x18283FF0)
#define RPG_CLIENT_OPEUTIL_OPENBANAPPEALURL_OFFSET UNITYSDK_OFFSET(0x18280980)
#define RPG_CLIENT_OPEUTIL_OPENDISPATCHURL_OFFSET UNITYSDK_OFFSET(0x18284A40)
#define RPG_CLIENT_OPEUTIL_OPENGACHADETAILURL_OFFSET UNITYSDK_OFFSET(0x18284150)
#define RPG_CLIENT_OPEUTIL_OPENGACHAHISTORYURL_OFFSET UNITYSDK_OFFSET(0x182845E0)
#define RPG_CLIENT_OPEUTIL_OPENURLDIRECT_OFFSET UNITYSDK_OFFSET(0x182819E0)
#define RPG_CLIENT_OPEUTIL_OPENURLINEMBEDDEDBROWSER_OFFSET UNITYSDK_OFFSET(0x18281950)
#define RPG_CLIENT_OPEUTIL_OPENURLINEXTERNALBROWSER_OFFSET UNITYSDK_OFFSET(0x182808F0)
#define RPG_CLIENT_OPEUTIL_OPENURLWITHLOGINSTATE_OFFSET UNITYSDK_OFFSET(0x18281A70)
#define RPG_CLIENT_OPEUTIL_PARSEURL_1_OFFSET UNITYSDK_OFFSET(0x18280380)
#define RPG_CLIENT_OPEUTIL_PARSEURL_OFFSET UNITYSDK_OFFSET(0x18263330)
#define RPG_CLIENT_OPEUTIL_REPEATSENDDEVICEINFO_OFFSET UNITYSDK_OFFSET(0x18283AC0)
#define RPG_CLIENT_OPEUTIL_SENDDEVICEINFO_OFFSET UNITYSDK_OFFSET(0x18283800)
#define RPG_CLIENT_OPEUTIL_SETUPHTTPGAMEPARAMS_OFFSET UNITYSDK_OFFSET(0x18285520)
#define RPG_CLIENT_OPEUTIL_SETUPHTTPRISKCONTROLPARAMS_OFFSET UNITYSDK_OFFSET(0x18284CD0)
#define RPG_CLIENT_OPEUTIL_SETUPRESERVEDPARAM_OFFSET UNITYSDK_OFFSET(0x18282C30)
#define RPG_CLIENT_OPEUTIL_SWAPSTR_OFFSET UNITYSDK_OFFSET(0x18283610)
#define RPG_CLIENT_OPEUTIL_TESTOPENURL_OFFSET UNITYSDK_OFFSET(0x182807F0)
#define RPG_CLIENT_OPEUTIL__ADDAUTHKEYPARAM_OFFSET UNITYSDK_OFFSET(0x18282060)
#define RPG_CLIENT_OPEUTIL__ADDCLIIDPARAM_OFFSET UNITYSDK_OFFSET(0x18282860)
#define RPG_CLIENT_OPEUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x18285890)
#define RPG_CLIENT_OPEUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x18285880)
#define RPG_CLIENT_OPEUTIL__GETCLIID_OFFSET UNITYSDK_OFFSET(0x18283780)
#define RPG_CLIENT_OPEUTIL__INCLUDEAUTHKEY_OFFSET UNITYSDK_OFFSET(0x18281DE0)
#define RPG_CLIENT_OPEUTIL__INTERNALOPENURL_OFFSET UNITYSDK_OFFSET(0x18282450)
#define RPG_CLIENT_OPEUTIL__SETUPURLPLATFORMTYPEPARAM_OFFSET UNITYSDK_OFFSET(0x18281AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int OpeUtil_TypeDefinitionIndex = 56668;

	class OpeUtil : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_DeviceModel()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x631F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_deviceParamDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x631F8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_RESERVED_WORDS()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63200);
		}
		static ::System::String** StaticGet_GAME_BIZ()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63208);
		}
		static ::System::String** StaticGet_CDKEY_URL_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63210);
		}
		static ::System::String** StaticGet_Platform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63218);
		}
		static ::System::String** StaticGet_CLI_ID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63220);
		}
		static ::System::String** StaticGet_NEW_SIGN_TYPE_VALUE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63228);
		}
		static ::System::String** StaticGet_ExtraDeviceInfo()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63230);
		}
		static ::System::String** StaticGet_CLOUD_GAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63238);
		}
		static ::UnityEngine::Coroutine** StaticGet_setInfoCoroutine()
		{
			return (::UnityEngine::Coroutine**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63240);
		}
		static ::System::String** StaticGet_PLAT_TYPE_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63248);
		}
		static ::System::String** StaticGet_OperatingSystem()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63250);
		}
		static ::System::String** StaticGet_AUTH_APP_ID_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63258);
		}
		static ::System::String** StaticGet_CDKEY_URL_TO_USE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63260);
		}
		static ::System::String** StaticGet_SIGN_TYPE_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63268);
		}
		static ::System::String** StaticGet_AUTH_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63270);
		}
		static ::System::String** StaticGet_DeviceName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63278);
		}
		static ::System::String** StaticGet_CHANNEL_ID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63280);
		}
		static ::System::String** StaticGet_AUTH_KEY_VERSION_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63288);
		}
		static ::System::String** StaticGet_AppVersion()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63290);
		}
		static ::System::String** StaticGet_DeviceID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x63298);
		}
		static ::System::String** StaticGet_CDKEY_REQUEST_URL()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x632A0);
		}
		static ::System::String** StaticGet_DeviceFP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x632A8);
		}
		static ::System::Single* StaticGet_TrySpan()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x12FE0);
		}
		static ::System::Int32* StaticGet_TryCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x12FE4);
		}
		static ::System::Int32* StaticGet_MaxTryCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpeUtil_TypeDefinitionIndex)->GetStaticField(0x12FE8);
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

		static ::Class_1_92B1BD6FC8375724* SetupHttpRiskControlParams(::Class_1_92B1BD6FC8375724* a1)
		{
			return ((::Class_1_92B1BD6FC8375724*(*)(::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_SETUPHTTPRISKCONTROLPARAMS_OFFSET))(a1);
		}

		static ::Class_1_92B1BD6FC8375724* SetupHttpGameParams(::Class_1_92B1BD6FC8375724* a1)
		{
			return ((::Class_1_92B1BD6FC8375724*(*)(::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPEUTIL_SETUPHTTPGAMEPARAMS_OFFSET))(a1);
		}
	};
}
