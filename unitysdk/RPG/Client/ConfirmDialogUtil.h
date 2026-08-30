#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ConfirmDialogContext_DialogBtnMode.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/System/Object.h"

class Class_1_C9E417278351157F;
namespace RPG::Client { class ConfirmDialogContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CONFIRMDIALOGUTIL_ONDIALOGEXIT_OFFSET UNITYSDK_OFFSET(0x1A298120)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_ONFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x1A298D20)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWABOVECONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1A298360)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWANTIADDICTIONHINT_OFFSET UNITYSDK_OFFSET(0x1A29A450)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCONFIRMDIALOG_1_OFFSET UNITYSDK_OFFSET(0x1A298180)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1A297E90)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCUSTOMOKCANCELFUNCCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1A29AD60)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCUSTOMOKCANCELHINT_OFFSET UNITYSDK_OFFSET(0x1A2989E0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCUSTOMTEXTCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1A29AAA0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWFORCEUPDATEHINT_OFFSET UNITYSDK_OFFSET(0x1A298AB0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFBYMTP_OFFSET UNITYSDK_OFFSET(0x1A299BB0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTBYCHANGEDPWD_OFFSET UNITYSDK_OFFSET(0x1A299FB0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTBYEXPIRED_OFFSET UNITYSDK_OFFSET(0x1A299DB0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTBYMUIP_OFFSET UNITYSDK_OFFSET(0x1A29A210)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTBYSQUEEZED_OFFSET UNITYSDK_OFFSET(0x1A299930)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTINBLACKLIST_OFFSET UNITYSDK_OFFSET(0x1A2996E0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTNOTINWHITELIST_OFFSET UNITYSDK_OFFSET(0x1A299400)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWNETMSGHINT_OFFSET UNITYSDK_OFFSET(0x1A298DB0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWOKCANCELHINTWITHSTRINGCONTENT_OFFSET UNITYSDK_OFFSET(0x1A298900)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWOKCANCELHINT_OFFSET UNITYSDK_OFFSET(0x1A298870)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWOKHINTWITHOUTRSPESC_OFFSET UNITYSDK_OFFSET(0x1A2985D0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWOKHINT_OFFSET UNITYSDK_OFFSET(0x1A298540)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWPLAYGOCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1A29AFE0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWRELOGINHINT_OFFSET UNITYSDK_OFFSET(0x1A298F20)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWRESTARTHINT_OFFSET UNITYSDK_OFFSET(0x1A2986B0)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWSERVERSTOPHINT_OFFSET UNITYSDK_OFFSET(0x1A299250)
#define RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWVIDEONOTEXITCONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1A29B480)

namespace RPG::Client
{
	inline static constexpr unsigned int ConfirmDialogUtil_TypeDefinitionIndex = 72638;

	class ConfirmDialogUtil : public ::System::Object
	{
	public:
		static ::RPG::Client::ConfirmDialogContext* ShowConfirmDialog(::RPG::Client::UILayer a1, ::RPG::Client::TextID a2, ::RPG::Client::TextID a3, ::RPG::Client::ConfirmDialogContext_DialogBtnMode a4, ::System::Action_1<::System::Boolean>* a5)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::RPG::Client::UILayer, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::ConfirmDialogContext_DialogBtnMode, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCONFIRMDIALOG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void OnDialogExit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_ONDIALOGEXIT_OFFSET))();
		}

		static ::RPG::Client::ConfirmDialogContext* ShowConfirmDialog_1(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCONFIRMDIALOG_1_OFFSET))(a1);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowAboveConfirmDialog(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWABOVECONFIRMDIALOG_OFFSET))(a1);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowOkHint(::RPG::Client::TextID a1, ::RPG::Client::TextID a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWOKHINT_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowOkHintWithoutRspEsc(::RPG::Client::TextID a1, ::RPG::Client::TextID a2, ::System::Action_1<::System::Boolean>* a3, ::RPG::Client::ConfirmDialogContext_DialogBtnMode a4)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Action_1<::System::Boolean>*, ::RPG::Client::ConfirmDialogContext_DialogBtnMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWOKHINTWITHOUTRSPESC_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowRestartHint(::RPG::Client::TextID a1, ::RPG::Client::TextID a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWRESTARTHINT_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowOkCancelHint(::RPG::Client::TextID a1, ::RPG::Client::TextID a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWOKCANCELHINT_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowOkCancelHintWithStringContent(::System::String* a1, ::RPG::Client::TextID a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::System::String*, ::RPG::Client::TextID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWOKCANCELHINTWITHSTRINGCONTENT_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowCustomOkCancelHint(::System::String* a1, ::System::Action_1<::System::Boolean>* a2, ::RPG::Client::ConfirmDialogContext_DialogBtnMode a3)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::System::String*, ::System::Action_1<::System::Boolean>*, ::RPG::Client::ConfirmDialogContext_DialogBtnMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCUSTOMOKCANCELHINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ShowForceUpdateHint(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWFORCEUPDATEHINT_OFFSET))(a1, a2);
		}

		static ::System::Void OnFocusChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_ONFOCUSCHANGE_OFFSET))(a1);
		}

		static ::System::Void ShowNetMsgHint(::System::UInt32 a1, ::System::Action_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWNETMSGHINT_OFFSET))(a1, a2);
		}

		static ::System::Void ShowReloginHint()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWRELOGINHINT_OFFSET))();
		}

		static ::System::Void ShowServerStopHint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWSERVERSTOPHINT_OFFSET))(a1);
		}

		static ::System::Void ShowKickOffHintNotInWhiteList()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTNOTINWHITELIST_OFFSET))();
		}

		static ::System::Void ShowKickOffHintInBlackList(::System::UInt32 a1, ::Class_1_C9E417278351157F* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::Class_1_C9E417278351157F*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWKICKOFFHINTINBLACKLIST_OFFSET))(a1, a2, a3);
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

		static ::System::Void ShowAntiAddictionHint(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWANTIADDICTIONHINT_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowCustomTextConfirmDialog(::RPG::Client::TextID a1, ::RPG::Client::TextID a2, ::RPG::Client::TextID a3, ::RPG::Client::TextID a4, ::System::Action_1<::System::Boolean>* a5, ::System::Boolean a6, ::RPG::Client::UILayer a7, ::RPG::Client::ConfirmDialogContext_DialogBtnMode a8)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Action_1<::System::Boolean>*, ::System::Boolean, ::RPG::Client::UILayer, ::RPG::Client::ConfirmDialogContext_DialogBtnMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCUSTOMTEXTCONFIRMDIALOG_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowCustomOkCancelFuncConfirmDialog(::System::Action_1<::System::Boolean>* a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::System::Action_1<::System::Boolean>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWCUSTOMOKCANCELFUNCCONFIRMDIALOG_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowPlayGoConfirmDialog(::System::Boolean a1, ::System::Single a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::System::Boolean, ::System::Single, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWPLAYGOCONFIRMDIALOG_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::ConfirmDialogContext* ShowVideoNotExitConfirmDialog()
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGUTIL_SHOWVIDEONOTEXITCONFIRMDIALOG_OFFSET))();
		}
	};
}
