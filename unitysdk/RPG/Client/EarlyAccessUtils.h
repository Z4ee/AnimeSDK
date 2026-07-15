#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_EARLYACCESSUTILS_ISMISSIONINCANUNLOCKEARLYACCESSCONTENT_OFFSET UNITYSDK_OFFSET(0x17727600)
#define RPG_CLIENT_EARLYACCESSUTILS_ISNEEDSWITCHCONTENT_OFFSET UNITYSDK_OFFSET(0x17727390)
#define RPG_CLIENT_EARLYACCESSUTILS_REPORTSWITCHDIALOGBUTTON_OFFSET UNITYSDK_OFFSET(0x17727930)
#define RPG_CLIENT_EARLYACCESSUTILS_SHOWEARLYACCESSBLOCKERRORTIPS_OFFSET UNITYSDK_OFFSET(0x177278D0)
#define RPG_CLIENT_EARLYACCESSUTILS_SHOWEARLYACCESSSWITCHDIALOG_OFFSET UNITYSDK_OFFSET(0x17727060)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessUtils_TypeDefinitionIndex = 60861;

	class EarlyAccessUtils : public ::System::Object
	{
	public:
		// static const ::System::Int32 _MainMissionPreUnlockId = 0x5EB; // 0x0
		// static const ::System::String* _SwitchDialogName; // 0x0

		static ::System::Void ShowEarlyAccessSwitchDialog(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSUTILS_SHOWEARLYACCESSSWITCHDIALOG_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsNeedSwitchContent(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSUTILS_ISNEEDSWITCHCONTENT_OFFSET))(a1);
		}

		static ::System::Boolean IsMissionInCanUnlockEarlyAccessContent(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSUTILS_ISMISSIONINCANUNLOCKEARLYACCESSCONTENT_OFFSET))(a1);
		}

		static ::System::Void ShowEarlyAccessBlockErrorTips()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSUTILS_SHOWEARLYACCESSBLOCKERRORTIPS_OFFSET))();
		}

		static ::System::Void ReportSwitchDialogButton(::System::UInt32 a1, ::System::Boolean a2, ::System::Guid a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSUTILS_REPORTSWITCHDIALOGBUTTON_OFFSET))(a1, a2, a3);
		}
	};
}
