#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageBoxDialogContext_MessageBoxMode.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWABOVEDIALOGTEXTMODAL_OFFSET UNITYSDK_OFFSET(0xA888180)
#define RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWABOVEDIALOGTEXT_OFFSET UNITYSDK_OFFSET(0xA8880B0)
#define RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWDIALOGTEXTANDRESTARTGAME_OFFSET UNITYSDK_OFFSET(0xA888260)
#define RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWDIALOGTEXTMODAL_OFFSET UNITYSDK_OFFSET(0xA887FE0)
#define RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWDIALOGTEXT_OFFSET UNITYSDK_OFFSET(0xA887F10)
#define RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWMIHOYOSDKCODE_OFFSET UNITYSDK_OFFSET(0xA8883B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageBoxDialogUtil_TypeDefinitionIndex = 67078;

	class MessageBoxDialogUtil : public ::System::Object
	{
	public:
		static ::System::Void ShowDialogText(::RPG::Client::TextID strText, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode mode, ::System::Action_1<::System::Boolean>* OkOrCancelDispatch)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWDIALOGTEXT_OFFSET))(strText, mode, OkOrCancelDispatch);
		}

		static ::System::Void ShowDialogTextModal(::RPG::Client::TextID strText, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode mode, ::System::Action_1<::System::Boolean>* OkOrCancelDispatch)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWDIALOGTEXTMODAL_OFFSET))(strText, mode, OkOrCancelDispatch);
		}

		static ::System::Void ShowAboveDialogText(::RPG::Client::TextID strText, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode mode, ::System::Action_1<::System::Boolean>* OkOrCancelDispatch)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWABOVEDIALOGTEXT_OFFSET))(strText, mode, OkOrCancelDispatch);
		}

		static ::System::Void ShowAboveDialogTextModal(::RPG::Client::TextID strText, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode mode, ::System::Action_1<::System::Boolean>* OkOrCancelDispatch)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWABOVEDIALOGTEXTMODAL_OFFSET))(strText, mode, OkOrCancelDispatch);
		}

		static ::System::Void ShowDialogTextAndRestartGame(::RPG::Client::TextID text)
		{
			return ((::System::Void(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWDIALOGTEXTANDRESTARTGAME_OFFSET))(text);
		}

		static ::System::Void ShowMiHoYoSDKCode(::System::Int32 retcode, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode mode, ::System::Action_1<::System::Boolean>* OkOrCancelDispatch)
		{
			return ((::System::Void(*)(::System::Int32, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWMIHOYOSDKCODE_OFFSET))(retcode, mode, OkOrCancelDispatch);
		}
	};
}
