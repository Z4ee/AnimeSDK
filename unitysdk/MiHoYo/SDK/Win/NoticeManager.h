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

#define MIHOYO_SDK_WIN_NOTICEMANAGER_BUILDREPORTMSGWITHTYPE_OFFSET UNITYSDK_OFFSET(0x1CD23450)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKCUSTOMPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1CD21F00)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKLOGOUTREDPOINT_OFFSET UNITYSDK_OFFSET(0x1CD28B80)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1CD20970)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_GETURLSTRING_OFFSET UNITYSDK_OFFSET(0x1CD20D00)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_HIDE_OFFSET UNITYSDK_OFFSET(0x1CD23DF0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_MANUALLYCLOSE_OFFSET UNITYSDK_OFFSET(0x1CD23E30)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWERROR_OFFSET UNITYSDK_OFFSET(0x1CD22690)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWNORMALCLOSED_OFFSET UNITYSDK_OFFSET(0x1CD22990)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWRESULT_OFFSET UNITYSDK_OFFSET(0x1CD226A0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONCHECKCUSTOMPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1CD25F60)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONCHECKLOGOUTANNLIST_OFFSET UNITYSDK_OFFSET(0x1CD27A90)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONCONSUMELOGOUTREDPOINT_OFFSET UNITYSDK_OFFSET(0x1CD28D70)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONCUSTOMNOTICEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CD25140)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONGETCHECKPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1CD25530)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0x1CD25520)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1CD245E0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0x1CD24790)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGEFINISH_OFFSET UNITYSDK_OFFSET(0x1CD24AE0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONREADY_OFFSET UNITYSDK_OFFSET(0x1CD25450)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONSETSERVERID_OFFSET UNITYSDK_OFFSET(0x1CD27610)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CD24C00)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_PACKCUSTOMNOTICEURL_OFFSET UNITYSDK_OFFSET(0x1CD26850)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_PRELOAD_OFFSET UNITYSDK_OFFSET(0x1CD229A0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_REBUILDURLWITHCUSTOMPARAMS_OFFSET UNITYSDK_OFFSET(0x1CD26CE0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_REPLACEKEYONLYPATHANDQUERY_OFFSET UNITYSDK_OFFSET(0x1CD271B0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_REQUESTREDPOINTTEXT_OFFSET UNITYSDK_OFFSET(0x1CD22510)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SENDCLOSENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1CD23680)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SETCOOKIES_OFFSET UNITYSDK_OFFSET(0x1CD23F40)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWCUSTOMNOTICE_OFFSET UNITYSDK_OFFSET(0x1CD23930)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWCUSTOMPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1CD23BF0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWLOADING_OFFSET UNITYSDK_OFFSET(0x1CD24280)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWNOTICEERROR_OFFSET UNITYSDK_OFFSET(0x1CD24370)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWNOTICE_OFFSET UNITYSDK_OFFSET(0x1CD23740)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1CD23A90)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_UPDATEJOYPADCONTROL_OFFSET UNITYSDK_OFFSET(0x1CD27490)
#define MIHOYO_SDK_WIN_NOTICEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD291F0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD291E0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER__PRELOAD_B__13_0_OFFSET UNITYSDK_OFFSET(0x1CD29230)
#define MIHOYO_SDK_WIN_NOTICEMANAGER__PRELOAD_B__13_1_OFFSET UNITYSDK_OFFSET(0x1CD29360)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int NoticeManager_TypeDefinitionIndex = 21488;

	class NoticeManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::NoticeManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::NoticeManager**)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_TypeDefinitionIndex)->GetStaticField(0xA7D0);
		}
		static ::System::Boolean* StaticGet_isShowPopNotice()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_TypeDefinitionIndex)->GetStaticField(0x4690);
		}
		::System::String* HoYoLogoutAnnRedPoint; // 0x10
		::System::String* m_customNoticeType; // 0x18
		::UnityEngine::Coroutine* noticeCoroutine; // 0x20
		::System::Action_1<::System::String*>* m_callbackShowNotice; // 0x28
		::MiHoYo::SDK::Web* noticeWeb; // 0x30

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
