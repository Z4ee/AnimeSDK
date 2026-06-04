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

#define MIHOYO_SDK_WIN_NOTICEMANAGER_BUILDREPORTMSGWITHTYPE_OFFSET UNITYSDK_OFFSET(0x1827C060)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKCUSTOMPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1827AC20)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKLOGOUTREDPOINT_OFFSET UNITYSDK_OFFSET(0x182813D0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x18279C50)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_GETURLSTRING_OFFSET UNITYSDK_OFFSET(0x1827A0D0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_HIDE_OFFSET UNITYSDK_OFFSET(0x1827C850)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_MANUALLYCLOSE_OFFSET UNITYSDK_OFFSET(0x1827C8D0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWERROR_OFFSET UNITYSDK_OFFSET(0x1827B220)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWNORMALCLOSED_OFFSET UNITYSDK_OFFSET(0x1827B4E0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWRESULT_OFFSET UNITYSDK_OFFSET(0x1827B230)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONCHECKCUSTOMPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1827EB00)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONCHECKLOGOUTANNLIST_OFFSET UNITYSDK_OFFSET(0x182800E0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONCONSUMELOGOUTREDPOINT_OFFSET UNITYSDK_OFFSET(0x18281610)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONCUSTOMNOTICEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1827DF50)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONGETCHECKPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1827E400)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONINPUTENABLESTATUS_OFFSET UNITYSDK_OFFSET(0x1827E3F0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1827D270)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0x1827D3B0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGEFINISH_OFFSET UNITYSDK_OFFSET(0x1827D6A0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONREADY_OFFSET UNITYSDK_OFFSET(0x1827E320)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONSETSERVERID_OFFSET UNITYSDK_OFFSET(0x1827FA80)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1827D7C0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_PACKCUSTOMNOTICEURL_OFFSET UNITYSDK_OFFSET(0x1827F040)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_PRELOAD_OFFSET UNITYSDK_OFFSET(0x1827B4F0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_REBUILDURLWITHCUSTOMPARAMS_OFFSET UNITYSDK_OFFSET(0x1827F2C0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_REPLACEKEYONLYPATHANDQUERY_OFFSET UNITYSDK_OFFSET(0x1827F6C0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_REQUESTREDPOINTTEXT_OFFSET UNITYSDK_OFFSET(0x1827B040)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SENDCLOSENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x1827C1A0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SETCOOKIES_OFFSET UNITYSDK_OFFSET(0x1827CAB0)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWCUSTOMNOTICE_OFFSET UNITYSDK_OFFSET(0x1827C460)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWCUSTOMPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1827C700)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWLOADING_OFFSET UNITYSDK_OFFSET(0x1827CE10)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWNOTICEERROR_OFFSET UNITYSDK_OFFSET(0x1827D030)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWNOTICE_OFFSET UNITYSDK_OFFSET(0x1827C220)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1827C530)
#define MIHOYO_SDK_WIN_NOTICEMANAGER_UPDATEJOYPADCONTROL_OFFSET UNITYSDK_OFFSET(0x1827F930)
#define MIHOYO_SDK_WIN_NOTICEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18281940)
#define MIHOYO_SDK_WIN_NOTICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18281930)
#define MIHOYO_SDK_WIN_NOTICEMANAGER__PRELOAD_B__13_0_OFFSET UNITYSDK_OFFSET(0x18281970)
#define MIHOYO_SDK_WIN_NOTICEMANAGER__PRELOAD_B__13_1_OFFSET UNITYSDK_OFFSET(0x18281C00)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int NoticeManager_TypeDefinitionIndex = 9050;

	class NoticeManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::NoticeManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::NoticeManager**)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_TypeDefinitionIndex)->GetStaticField(0x112F0);
		}
		static ::System::Boolean* StaticGet_isShowPopNotice()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_TypeDefinitionIndex)->GetStaticField(0x5310);
		}
		::System::Action_1<::System::String*>* m_callbackShowNotice; // 0x10
		::System::String* HoYoLogoutAnnRedPoint; // 0x18
		::System::String* m_customNoticeType; // 0x20
		::MiHoYo::SDK::Web* noticeWeb; // 0x28
		::UnityEngine::Coroutine* noticeCoroutine; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void CheckPopNotice(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKPOPNOTICE_OFFSET))(this, a1);
		}

		::System::Void CheckCustomPopNotice(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKCUSTOMPOPNOTICE_OFFSET))(this, a1);
		}

		::System::Void RequestRedPointText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_REQUESTREDPOINTTEXT_OFFSET))(this);
		}

		::System::Void NotifyShowError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWERROR_OFFSET))(this, a1);
		}

		::System::Void NotifyShowNormalClosed(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWNORMALCLOSED_OFFSET))(this, a1);
		}

		::System::Void NotifyShowResult(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_NOTIFYSHOWRESULT_OFFSET))(this, a1, a2);
		}

		::System::Void PreLoad(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_PRELOAD_OFFSET))(this, a1, a2);
		}

		::System::Void ShowNotice(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWNOTICE_OFFSET))(this, a1, a2);
		}

		::System::Void ShowCustomNotice(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWCUSTOMNOTICE_OFFSET))(this, a1, a2);
		}

		::System::Boolean ShowPopNotice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWPOPNOTICE_OFFSET))(this);
		}

		::System::Boolean ShowCustomPopNotice(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SHOWCUSTOMPOPNOTICE_OFFSET))(this, a1);
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

		::System::Void OnPageClose(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGECLOSE_OFFSET))(this, a1);
		}

		::System::Void OnPageError(::MiHoYo::SDK::Web* a1, ::System::String* a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGEERROR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnPageFinish(::MiHoYo::SDK::Web* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONPAGEFINISH_OFFSET))(this, a1, a2);
		}

		::System::Void OnUniWebViewMessage(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONUNIWEBVIEWMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void OnCustomNoticeMessage(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONCUSTOMNOTICEMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void OnReady(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONREADY_OFFSET))(this, a1);
		}

		::System::Void OnInputEnableStatus(::MiHoYo::SDK::Web* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONINPUTENABLESTATUS_OFFSET))(this, a1, a2);
		}

		::System::Void SendCloseNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_SENDCLOSENOTIFICATION_OFFSET))(this);
		}

		::System::Void OnGetCheckPopNotice(::MiHoYo::SDK::NetworkResponseModel* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONGETCHECKPOPNOTICE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCheckCustomPopNotice(::MiHoYo::SDK::NetworkResponseModel* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONCHECKCUSTOMPOPNOTICE_OFFSET))(this, a1, a2);
		}

		::System::String* GetURLString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_GETURLSTRING_OFFSET))(this, a1, a2);
		}

		::System::Void PackCustomNoticeUrl(::MiHoYo::SDK::JSONObject* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_PACKCUSTOMNOTICEURL_OFFSET))(this, a1, a2);
		}

		::System::String* RebuildUrlWithCustomParams(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_REBUILDURLWITHCUSTOMPARAMS_OFFSET))(this, a1, a2);
		}

		static ::System::String* ReplaceKeyOnlyPathAndQuery(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_REPLACEKEYONLYPATHANDQUERY_OFFSET))(a1, a2, a3);
		}

		::System::Void UpdateJoypadControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_UPDATEJOYPADCONTROL_OFFSET))(this);
		}

		::System::Void OnSetServerID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONSETSERVERID_OFFSET))(this);
		}

		::System::Void OnCheckLogoutAnnList(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONCHECKLOGOUTANNLIST_OFFSET))(this, a1);
		}

		::System::Void OnConsumeLogoutRedPoint(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_ONCONSUMELOGOUTREDPOINT_OFFSET))(this, a1);
		}

		::System::Void CheckLogoutRedPoint(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_CHECKLOGOUTREDPOINT_OFFSET))(this, a1);
		}

		::System::String* BuildReportMsgWithType(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER_BUILDREPORTMSGWITHTYPE_OFFSET))(this, a1);
		}

		::System::Void _PreLoad_b__13_0(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER__PRELOAD_B__13_0_OFFSET))(this, a1);
		}

		::System::Void _PreLoad_b__13_1(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_NOTICEMANAGER__PRELOAD_B__13_1_OFFSET))(this, a1);
		}
	};
}
