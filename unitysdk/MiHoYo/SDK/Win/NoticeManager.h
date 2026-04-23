#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class Web; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_WIN_NOTICEMANAGER_BUILDREPORTMSGWITHTYPE_OFFSET UNITYSDK_OFFSET(0x1747B700)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKCUSTOMPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1747A340)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKLOGOUTREDPOINT_OFFSET UNITYSDK_OFFSET(0x17480F90)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x174792B0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_GETURLSTRING_OFFSET UNITYSDK_OFFSET(0x17479720)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_HIDE_OFFSET UNITYSDK_OFFSET(0x1747BEF0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_MANUALLYCLOSE_OFFSET UNITYSDK_OFFSET(0x1747BF90)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWERROR_OFFSET UNITYSDK_OFFSET(0x1747A9A0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWNORMALCLOSED_OFFSET UNITYSDK_OFFSET(0x1747AC60)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWRESULT_OFFSET UNITYSDK_OFFSET(0x1747A9B0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONCHECKCUSTOMPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1747E390)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONCHECKLOGOUTANNLIST_OFFSET UNITYSDK_OFFSET(0x1747FCB0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONCONSUMELOGOUTREDPOINT_OFFSET UNITYSDK_OFFSET(0x17481210)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONCUSTOMNOTICEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1747D6C0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONGETCHECKPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1747DAB0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0x1747DAA0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1747C9F0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0x1747CB30)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGEFINISH_OFFSET UNITYSDK_OFFSET(0x1747CEE0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONREADY_OFFSET UNITYSDK_OFFSET(0x1747D9D0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONSETSERVERID_OFFSET UNITYSDK_OFFSET(0x1747F610)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1747D000)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_PACKCUSTOMNOTICEURL_OFFSET UNITYSDK_OFFSET(0x1747EA90)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_PRELOAD_OFFSET UNITYSDK_OFFSET(0x1747AC70)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_REBUILDURLWITHCUSTOMPARAMS_OFFSET UNITYSDK_OFFSET(0x1747EDE0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_REPLACEKEYONLYPATHANDQUERY_OFFSET UNITYSDK_OFFSET(0x1747F260)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_REQUESTREDPOINTTEXT_OFFSET UNITYSDK_OFFSET(0x1747A7C0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SENDCLOSENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1747B840)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SETCOOKIES_OFFSET UNITYSDK_OFFSET(0x1747C1A0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWCUSTOMNOTICE_OFFSET UNITYSDK_OFFSET(0x1747BB00)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWCUSTOMPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1747BDA0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWLOADING_OFFSET UNITYSDK_OFFSET(0x1747C570)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWNOTICEERROR_OFFSET UNITYSDK_OFFSET(0x1747C780)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWNOTICE_OFFSET UNITYSDK_OFFSET(0x1747B8C0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1747BBD0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_UPDATEJOYPADCONTROL_OFFSET UNITYSDK_OFFSET(0x1747F4D0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17481580)
#define MIHOYO_SDK_WIN_NOTICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17481570)
#define MIHOYO_SDK_WIN_NOTICEMANAGER__PRELOAD_B__13_0_OFFSET UNITYSDK_OFFSET(0x174815B0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER__PRELOAD_B__13_1_OFFSET UNITYSDK_OFFSET(0x17481820)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int NoticeManager_TypeDefinitionIndex = 8147;

	class NoticeManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::NoticeManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::NoticeManager**)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_TypeDefinitionIndex)->GetStaticField(0x19C00);
		}
		static ::System::Boolean* StaticGet_isShowPopNotice()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_TypeDefinitionIndex)->GetStaticField(0x6DC0);
		}
		::MiHoYo::SDK::Web* noticeWeb; // 0x10
		::System::Action_1<::System::String*>* m_callbackShowNotice; // 0x18
		::System::String* m_customNoticeType; // 0x20
		::UnityEngine::Coroutine* noticeCoroutine; // 0x28
		::System::String* HoYoLogoutAnnRedPoint; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void CheckPopNotice(::System::Boolean isParseTextOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKPOPNOTICE_OFFSET))(this, isParseTextOnly);
		}

		::System::Void CheckCustomPopNotice(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKCUSTOMPOPNOTICE_OFFSET))(this, jsonString);
		}

		::System::Void RequestRedPointText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_REQUESTREDPOINTTEXT_OFFSET))(this);
		}

		::System::Void NotifyShowError(::System::String* strMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWERROR_OFFSET))(this, strMsg);
		}

		::System::Void NotifyShowNormalClosed(::System::String* strMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWNORMALCLOSED_OFFSET))(this, strMsg);
		}

		::System::Void NotifyShowResult(::System::Int32 nRetCode, ::System::String* strMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWRESULT_OFFSET))(this, nRetCode, strMsg);
		}

		::System::Void PreLoad(::System::String* noticeUrl, ::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_PRELOAD_OFFSET))(this, noticeUrl, jsonString);
		}

		::System::Void ShowNotice(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWNOTICE_OFFSET))(this, jsonString, callback);
		}

		::System::Void ShowCustomNotice(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWCUSTOMNOTICE_OFFSET))(this, jsonString, callback);
		}

		::System::Boolean ShowPopNotice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWPOPNOTICE_OFFSET))(this);
		}

		::System::Boolean ShowCustomPopNotice(::System::String* jsonString)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWCUSTOMPOPNOTICE_OFFSET))(this, jsonString);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_HIDE_OFFSET))(this);
		}

		::System::Void ManuallyClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_MANUALLYCLOSE_OFFSET))(this);
		}

		::System::Void SetCookies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SETCOOKIES_OFFSET))(this);
		}

		::System::Void ShowLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWLOADING_OFFSET))(this);
		}

		::System::Void ShowNoticeError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWNOTICEERROR_OFFSET))(this);
		}

		::System::Void OnPageClose(::MiHoYo::SDK::Web* web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGECLOSE_OFFSET))(this, web);
		}

		::System::Void OnPageError(::MiHoYo::SDK::Web* web, ::System::String* url, ::System::Int32 errorCode, ::System::String* errorMessage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGEERROR_OFFSET))(this, web, url, errorCode, errorMessage);
		}

		::System::Void OnPageFinish(::MiHoYo::SDK::Web* web, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGEFINISH_OFFSET))(this, web, url);
		}

		::System::Void OnUniWebViewMessage(::MiHoYo::SDK::Web* web, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONUNIWEBVIEWMESSAGE_OFFSET))(this, web, message);
		}

		::System::Void OnCustomNoticeMessage(::MiHoYo::SDK::Web* web, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONCUSTOMNOTICEMESSAGE_OFFSET))(this, web, message);
		}

		::System::Void OnReady(::MiHoYo::SDK::Web* web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONREADY_OFFSET))(this, web);
		}

		::System::Void OnInputEnableStatus(::MiHoYo::SDK::Web* web, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONINPUTENABLESTATUS_OFFSET))(this, web, enabled);
		}

		::System::Void SendCloseNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SENDCLOSENOTIFICATION_OFFSET))(this);
		}

		::System::Void OnGetCheckPopNotice(::MiHoYo::SDK::NetworkResponseModel* response, ::System::Boolean isCheckTextOnly, ::System::String* strRequestLang)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONGETCHECKPOPNOTICE_OFFSET))(this, response, isCheckTextOnly, strRequestLang);
		}

		::System::Void OnCheckCustomPopNotice(::MiHoYo::SDK::NetworkResponseModel* response, ::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONCHECKCUSTOMPOPNOTICE_OFFSET))(this, response, jsonString);
		}

		::System::String* GetURLString(::System::String* url, ::System::String* jsonString)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_GETURLSTRING_OFFSET))(this, url, jsonString);
		}

		::System::Void PackCustomNoticeUrl(::MiHoYo::SDK::JSONObject* queryMap, ::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_PACKCUSTOMNOTICEURL_OFFSET))(this, queryMap, jsonString);
		}

		::System::String* RebuildUrlWithCustomParams(::System::String* originalUrl, ::System::String* jsonParam)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_REBUILDURLWITHCUSTOMPARAMS_OFFSET))(this, originalUrl, jsonParam);
		}

		static ::System::String* ReplaceKeyOnlyPathAndQuery(::System::String* url, ::System::String* oldValue, ::System::String* newValue)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_REPLACEKEYONLYPATHANDQUERY_OFFSET))(url, oldValue, newValue);
		}

		::System::Void UpdateJoypadControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_UPDATEJOYPADCONTROL_OFFSET))(this);
		}

		::System::Void OnSetServerID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONSETSERVERID_OFFSET))(this);
		}

		::System::Void OnCheckLogoutAnnList(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONCHECKLOGOUTANNLIST_OFFSET))(this, response);
		}

		::System::Void OnConsumeLogoutRedPoint(::MiHoYo::SDK::JSONNode* consumeData)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONCONSUMELOGOUTREDPOINT_OFFSET))(this, consumeData);
		}

		::System::Void CheckLogoutRedPoint(::MiHoYo::SDK::JSONNode* annList)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKLOGOUTREDPOINT_OFFSET))(this, annList);
		}

		::System::String* BuildReportMsgWithType(::System::String* strMsg)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_BUILDREPORTMSGWITHTYPE_OFFSET))(this, strMsg);
		}

		::System::Void _PreLoad_b__13_0(::MiHoYo::SDK::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER__PRELOAD_B__13_0_OFFSET))(this, node);
		}

		::System::Void _PreLoad_b__13_1(::MiHoYo::SDK::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER__PRELOAD_B__13_1_OFFSET))(this, node);
		}
	};
}
