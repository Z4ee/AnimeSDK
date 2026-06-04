#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_EARLYACCESSUTILS_ISNEEDSWITCHCONTENT_OFFSET UNITYSDK_OFFSET(0xB8315A0)
#define RPG_CLIENT_EARLYACCESSUTILS_REPORTSWITCHDIALOGBUTTON_OFFSET UNITYSDK_OFFSET(0xB831730)
#define RPG_CLIENT_EARLYACCESSUTILS_SHOWEARLYACCESSSWITCHDIALOG_OFFSET UNITYSDK_OFFSET(0xB8312F0)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessUtils_TypeDefinitionIndex = 59576;

	class EarlyAccessUtils : public ::System::Object
	{
	public:
		// static const ::System::String* _SwitchDialogName; // 0x0

		static ::System::Void ShowEarlyAccessSwitchDialog(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSUTILS_SHOWEARLYACCESSSWITCHDIALOG_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsNeedSwitchContent(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSUTILS_ISNEEDSWITCHCONTENT_OFFSET))(a1);
		}

		static ::System::Void ReportSwitchDialogButton(::System::UInt32 a1, ::System::Boolean a2, ::System::Guid a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSUTILS_REPORTSWITCHDIALOGBUTTON_OFFSET))(a1, a2, a3);
		}
	};
}
