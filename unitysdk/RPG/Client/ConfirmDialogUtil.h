#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ConfirmDialogContext_DialogBtnMode.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/System/Object.h"

class Class_1_BD570EF86E624FB1;
namespace RPG::Client { class ConfirmDialogContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CONFIRMDIALOGUTIL_ONDIALOGEXIT_OFFSET UNITYSDK_OFFSET(0x9420DC0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_ONFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x9421890)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWABOVECONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x9420FD0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWANTIADDICTIONHINT_OFFSET UNITYSDK_OFFSET(0x9422E70)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCONFIRMDIALOG_1_OFFSET UNITYSDK_OFFSET(0x9420E20)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x9420B70)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCUSTOMOKCANCELFUNCCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x94235F0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCUSTOMOKCANCELHINT_OFFSET UNITYSDK_OFFSET(0x94215C0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCUSTOMTEXTCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x9423370)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWFORCEUPDATEHINT_OFFSET UNITYSDK_OFFSET(0x9421690)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFBYMTP_OFFSET UNITYSDK_OFFSET(0x9422720)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTBYCHANGEDPWD_OFFSET UNITYSDK_OFFSET(0x9422A80)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTBYEXPIRED_OFFSET UNITYSDK_OFFSET(0x94228D0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTBYMUIP_OFFSET UNITYSDK_OFFSET(0x9422C80)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTBYSQUEEZED_OFFSET UNITYSDK_OFFSET(0x9422500)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTINBLACKLIST_OFFSET UNITYSDK_OFFSET(0x9422220)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTNOTINWHITELIST_OFFSET UNITYSDK_OFFSET(0x9421FA0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWNETMSGHINT_OFFSET UNITYSDK_OFFSET(0x9421920)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWOKCANCELHINTWITHSTRINGCONTENT_OFFSET UNITYSDK_OFFSET(0x94214E0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWOKCANCELHINT_OFFSET UNITYSDK_OFFSET(0x9421450)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWOKHINTWITHOUTRSPESC_OFFSET UNITYSDK_OFFSET(0x9421210)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWOKHINT_OFFSET UNITYSDK_OFFSET(0x9421180)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWPLAYGOCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x94237C0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWRELOGINHINT_OFFSET UNITYSDK_OFFSET(0x9421A80)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWRESTARTHINT_OFFSET UNITYSDK_OFFSET(0x94212C0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWSERVERSTOPHINT_OFFSET UNITYSDK_OFFSET(0x9421DA0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWVIDEONOTEXITCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x9423B90)

namespace RPG::Client
{
	inline static constexpr unsigned int ConfirmDialogUtil_TypeDefinitionIndex = 59588;

	class ConfirmDialogUtil : public ::System::Object
	{
	public:
		static ::RPG::Client::ConfirmDialogContext* ShowConfirmDialog(::RPG::Client::UILayer layer, ::RPG::Client::TextID content, ::RPG::Client::TextID title, ::RPG::Client::ConfirmDialogContext_DialogBtnMode mode, ::System::Action_1<::System::Boolean>* dispatch)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::RPG::Client::UILayer, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::ConfirmDialogContext_DialogBtnMode, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCONFIRMDIALOG_OFFSET))(layer, content, title, mode, dispatch);
		}

		static ::System::Void OnDialogExit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_ONDIALOGEXIT_OFFSET))();
		}

		static ::RPG::Client::ConfirmDialogContext* ShowConfirmDialog_1(::System::Action_1<::System::Boolean>* dispatch)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCONFIRMDIALOG_1_OFFSET))(dispatch);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowAboveConfirmDialog(::System::Action_1<::System::Boolean>* dispatch)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWABOVECONFIRMDIALOG_OFFSET))(dispatch);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowOkHint(::RPG::Client::TextID context, ::RPG::Client::TextID title, ::System::Action_1<::System::Boolean>* dispatch)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWOKHINT_OFFSET))(context, title, dispatch);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowOkHintWithoutRspEsc(::RPG::Client::TextID context, ::RPG::Client::TextID title, ::System::Action_1<::System::Boolean>* dispatch, ::RPG::Client::ConfirmDialogContext_DialogBtnMode mode)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Action_1<::System::Boolean>*, ::RPG::Client::ConfirmDialogContext_DialogBtnMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWOKHINTWITHOUTRSPESC_OFFSET))(context, title, dispatch, mode);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowRestartHint(::RPG::Client::TextID context, ::RPG::Client::TextID title, ::System::Action_1<::System::Boolean>* dispatch)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWRESTARTHINT_OFFSET))(context, title, dispatch);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowOkCancelHint(::RPG::Client::TextID context, ::RPG::Client::TextID title, ::System::Action_1<::System::Boolean>* dispatch)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWOKCANCELHINT_OFFSET))(context, title, dispatch);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowOkCancelHintWithStringContent(::System::String* content, ::RPG::Client::TextID title, ::System::Action_1<::System::Boolean>* dispatch)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::System::String*, ::RPG::Client::TextID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWOKCANCELHINTWITHSTRINGCONTENT_OFFSET))(content, title, dispatch);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowCustomOkCancelHint(::System::String* content, ::System::Action_1<::System::Boolean>* dispatch, ::RPG::Client::ConfirmDialogContext_DialogBtnMode mode)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::System::String*, ::System::Action_1<::System::Boolean>*, ::RPG::Client::ConfirmDialogContext_DialogBtnMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCUSTOMOKCANCELHINT_OFFSET))(content, dispatch, mode);
		}

		static ::System::Void ShowForceUpdateHint(::System::String* forceUpdateUrl, ::System::String* forceUpdateMsg)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWFORCEUPDATEHINT_OFFSET))(forceUpdateUrl, forceUpdateMsg);
		}

		static ::System::Void OnFocusChange(::System::Object* args)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_ONFOCUSCHANGE_OFFSET))(args);
		}

		static ::System::Void ShowNetMsgHint(::System::UInt32 retcode, ::System::Action_1<::System::Boolean>* dispatch)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWNETMSGHINT_OFFSET))(retcode, dispatch);
		}

		static ::System::Void ShowReloginHint()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWRELOGINHINT_OFFSET))();
		}

		static ::System::Void ShowServerStopHint(::System::Boolean isRestart)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWSERVERSTOPHINT_OFFSET))(isRestart);
		}

		static ::System::Void ShowKickOffHintNotInWhiteList()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTNOTINWHITELIST_OFFSET))();
		}

		static ::System::Void ShowKickOffHintInBlackList(::System::UInt32 uid, ::Class_1_BD570EF86E624FB1* blackInfo, ::System::String* appealUrl)
		{
			return ((::System::Void(*)(::System::UInt32, ::Class_1_BD570EF86E624FB1*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTINBLACKLIST_OFFSET))(uid, blackInfo, appealUrl);
		}

		static ::System::Void ShowKickOffHintBySqueezed()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTBYSQUEEZED_OFFSET))();
		}

		static ::System::Void ShowKickOffByMTP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFBYMTP_OFFSET))();
		}

		static ::System::Void ShowKickOffHintByExpired()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTBYEXPIRED_OFFSET))();
		}

		static ::System::Void ShowKickOffHintByChangedPwd()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTBYCHANGEDPWD_OFFSET))();
		}

		static ::System::Void ShowKickOffHintByMUIP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTBYMUIP_OFFSET))();
		}

		static ::System::Void ShowAntiAddictionHint(::System::String* msg, ::System::UInt32 type)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWANTIADDICTIONHINT_OFFSET))(msg, type);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowCustomTextConfirmDialog(::RPG::Client::TextID content, ::RPG::Client::TextID title, ::RPG::Client::TextID btnOkTxt, ::RPG::Client::TextID btnCancelTxt, ::System::Action_1<::System::Boolean>* dispatch, ::System::Boolean isForbidClose, ::RPG::Client::UILayer layer, ::RPG::Client::ConfirmDialogContext_DialogBtnMode mode)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Action_1<::System::Boolean>*, ::System::Boolean, ::RPG::Client::UILayer, ::RPG::Client::ConfirmDialogContext_DialogBtnMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCUSTOMTEXTCONFIRMDIALOG_OFFSET))(content, title, btnOkTxt, btnCancelTxt, dispatch, isForbidClose, layer, mode);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowCustomOkCancelFuncConfirmDialog(::System::Action_1<::System::Boolean>* dispatchOkCancel, ::System::Action* dispatchClose, ::System::Action* dispatchBg)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::System::Action_1<::System::Boolean>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCUSTOMOKCANCELFUNCCONFIRMDIALOG_OFFSET))(dispatchOkCancel, dispatchClose, dispatchBg);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowPlayGoConfirmDialog(::System::Boolean isFinished, ::System::Single progress, ::System::Action_1<::System::Boolean>* dispatchOkCancel)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::System::Boolean, ::System::Single, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWPLAYGOCONFIRMDIALOG_OFFSET))(isFinished, progress, dispatchOkCancel);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowVideoNotExitConfirmDialog()
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWVIDEONOTEXITCONFIRMDIALOG_OFFSET))();
		}
	};
}
