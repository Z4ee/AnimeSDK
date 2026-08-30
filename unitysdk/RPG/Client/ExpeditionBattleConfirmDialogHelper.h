#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConfirmDialogContext; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_EXPEDITIONBATTLECONFIRMDIALOGHELPER_SHOWBATTLEERRORDIALOG_OFFSET UNITYSDK_OFFSET(0xCEF75C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleConfirmDialogHelper_TypeDefinitionIndex = 63920;

	class ExpeditionBattleConfirmDialogHelper : public ::System::Object
	{
	public:
		static ::RPG::Client::ConfirmDialogContext* ShowBattleErrorDialog(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::RPG::Client::ConfirmDialogContext*(*)(::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLECONFIRMDIALOGHELPER_SHOWBATTLEERRORDIALOG_OFFSET))(a1);
		}
	};
}
