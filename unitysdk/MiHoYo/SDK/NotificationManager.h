#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define MIHOYO_SDK_NOTIFICATIONMANAGER_CREATENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x17591B10)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_HIDESDKDIALOG_OFFSET UNITYSDK_OFFSET(0x17591BF0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_ISENABLELOGINFLOWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x175924D0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDANTIADDICTION_OFFSET UNITYSDK_OFFSET(0x17592360)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDBINDACCOUNT_OFFSET UNITYSDK_OFFSET(0x17592330)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDBINDMOBILEACCOUNT_OFFSET UNITYSDK_OFFSET(0x175920E0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDFATIGUEREMINDER_OFFSET UNITYSDK_OFFSET(0x17592440)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWCHANNELERROR_OFFSET UNITYSDK_OFFSET(0x175926C0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWCLIENTERROR_OFFSET UNITYSDK_OFFSET(0x17581410)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWHTTPERROR_OFFSET UNITYSDK_OFFSET(0x17592C80)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWSERVERRESPONSEERROR_OFFSET UNITYSDK_OFFSET(0x17592A00)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGOUT_OFFSET UNITYSDK_OFFSET(0x17592300)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x17577D70)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDPOPIMAGESHOW_OFFSET UNITYSDK_OFFSET(0x17592470)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDREALNAMEACCOUNT_OFFSET UNITYSDK_OFFSET(0x17592110)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDREDPOINTINFO_OFFSET UNITYSDK_OFFSET(0x175920B0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SENDUNIWEBVIEW_OFFSET UNITYSDK_OFFSET(0x17591C20)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWBEFORELOGINNOTICEREDPOINT_OFFSET UNITYSDK_OFFSET(0x17592060)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWCUSTOMNOTICEIMPORTANTREDPOINT_OFFSET UNITYSDK_OFFSET(0x17592190)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWCUSTOMNOTICEREDPOINT_OFFSET UNITYSDK_OFFSET(0x17591DC0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWCUSTOMPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x17591C80)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWNOTICEIMPORTANTREDPOINT_OFFSET UNITYSDK_OFFSET(0x17592140)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWNOTICEREDPOINTTEXT_OFFSET UNITYSDK_OFFSET(0x17591F30)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWNOTICEREDPOINT_OFFSET UNITYSDK_OFFSET(0x17591D70)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x17591C50)
#define MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWSDKDIALOG_OFFSET UNITYSDK_OFFSET(0x17591AE0)
#define MIHOYO_SDK_NOTIFICATIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17592E20)
#define MIHOYO_SDK_NOTIFICATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17592E10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NotificationManager_TypeDefinitionIndex = 7106;

	class NotificationManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::NotificationManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::NotificationManager**)Il2CppClass::FromTypeDefinitionIndex(NotificationManager_TypeDefinitionIndex)->GetStaticField(0x740);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER__CCTOR_OFFSET))();
		}

		::System::Void SendNotification(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDNOTIFICATION_OFFSET))(this, message);
		}

		::System::Void ShowSDKDialog(::System::String* dialogName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWSDKDIALOG_OFFSET))(this, dialogName);
		}

		::System::Void HideSDKDialog(::System::String* dialogName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_HIDESDKDIALOG_OFFSET))(this, dialogName);
		}

		::System::Void SendUniWebView(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDUNIWEBVIEW_OFFSET))(this, url);
		}

		::System::Void ShowPopNotice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWPOPNOTICE_OFFSET))(this);
		}

		::System::Void ShowCustomPopNotice(::System::String* strType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWCUSTOMPOPNOTICE_OFFSET))(this, strType);
		}

		::System::Void ShowNoticeRedPoint(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWNOTICEREDPOINT_OFFSET))(this, isShow);
		}

		::System::Void ShowCustomNoticeRedPoint(::System::Boolean isShow, ::System::String* strType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWCUSTOMNOTICEREDPOINT_OFFSET))(this, isShow, strType);
		}

		::System::Void ShowNoticeRedPointText(::System::Int32 nRetCode, ::System::String* strRedPointText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWNOTICEREDPOINTTEXT_OFFSET))(this, nRetCode, strRedPointText);
		}

		::System::Void ShowBeforeLoginNoticeRedPoint(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWBEFORELOGINNOTICEREDPOINT_OFFSET))(this, isShow);
		}

		::System::Void SendRedPointInfo(::System::String* strRedPointInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDREDPOINTINFO_OFFSET))(this, strRedPointInfo);
		}

		::System::Void SendBindMobileAccount(::System::String* open_id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDBINDMOBILEACCOUNT_OFFSET))(this, open_id);
		}

		::System::Void SendRealNameAccount(::System::String* open_id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDREALNAMEACCOUNT_OFFSET))(this, open_id);
		}

		::System::Void ShowNoticeImportantRedPoint(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWNOTICEIMPORTANTREDPOINT_OFFSET))(this, isShow);
		}

		::System::Void ShowCustomNoticeImportantRedPoint(::System::Boolean isShow, ::System::String* strType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SHOWCUSTOMNOTICEIMPORTANTREDPOINT_OFFSET))(this, isShow, strType);
		}

		::System::Void SendLogout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGOUT_OFFSET))(this);
		}

		::System::Void SendBindAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDBINDACCOUNT_OFFSET))(this);
		}

		::System::Void SendAntiAddiction(::MiHoYo::SDK::JSONNode* msg)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDANTIADDICTION_OFFSET))(this, msg);
		}

		::System::Void SendFatigueReminder(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDFATIGUEREMINDER_OFFSET))(this, msg);
		}

		::System::Void SendPopImageShow(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDPOPIMAGESHOW_OFFSET))(this, msg);
		}

		::System::Boolean IsEnableLoginFlowNotification()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_ISENABLELOGINFLOWNOTIFICATION_OFFSET))(this);
		}

		::System::Void SendLoginFlowChannelError(::System::Int32 code, ::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWCHANNELERROR_OFFSET))(this, code, msg);
		}

		::System::Void SendLoginFlowServerResponseError(::System::Int32 code, ::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWSERVERRESPONSEERROR_OFFSET))(this, code, msg);
		}

		::System::Void SendLoginFlowHttpError(::System::Int32 code, ::System::String* msg, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWHTTPERROR_OFFSET))(this, code, msg, url);
		}

		::System::Void SendLoginFlowClientError(::System::Int32 nErrCode, ::System::String* strMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_SENDLOGINFLOWCLIENTERROR_OFFSET))(this, nErrCode, strMsg);
		}

		::System::String* CreateNotification(::System::String* eventName, ::System::String* param)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NOTIFICATIONMANAGER_CREATENOTIFICATION_OFFSET))(this, eventName, param);
		}
	};
}
