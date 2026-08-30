#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageBoxDialogContext_MessageBoxMode.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWABOVEDIALOGTEXTMODAL_OFFSET UNITYSDK_OFFSET(0xD69FE30)
#define RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWABOVEDIALOGTEXT_OFFSET UNITYSDK_OFFSET(0xD69FD60)
#define RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWDIALOGTEXTANDRESTARTGAME_OFFSET UNITYSDK_OFFSET(0xD69FFE0)
#define RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWDIALOGTEXTMODAL_OFFSET UNITYSDK_OFFSET(0xD69FC50)
#define RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWDIALOGTEXT_OFFSET UNITYSDK_OFFSET(0xD69FB80)
#define RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWMIHOYOSDKCODE_OFFSET UNITYSDK_OFFSET(0xD6A0150)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageBoxDialogUtil_TypeDefinitionIndex = 72735;

	class MessageBoxDialogUtil : public ::System::Object
	{
	public:
		static ::System::Void ShowDialogText(::RPG::Client::TextID a1, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWDIALOGTEXT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ShowDialogTextModal(::RPG::Client::TextID a1, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWDIALOGTEXTMODAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ShowAboveDialogText(::RPG::Client::TextID a1, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWABOVEDIALOGTEXT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ShowAboveDialogTextModal(::RPG::Client::TextID a1, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWABOVEDIALOGTEXTMODAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ShowDialogTextAndRestartGame(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWDIALOGTEXTANDRESTARTGAME_OFFSET))(a1);
		}

		static ::System::Void ShowMiHoYoSDKCode(::System::Int32 a1, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGUTIL_SHOWMIHOYOSDKCODE_OFFSET))(a1, a2, a3);
		}
	};
}
