#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_EARLYACCESSUTILS_ISNEEDSWITCHCONTENT_OFFSET UNITYSDK_OFFSET(0x952CEA0)
#define RPG_CLIENT_EARLYACCESSUTILS_REPORTSWITCHDIALOGBUTTON_OFFSET UNITYSDK_OFFSET(0x952D030)
#define RPG_CLIENT_EARLYACCESSUTILS_SHOWEARLYACCESSSWITCHDIALOG_OFFSET UNITYSDK_OFFSET(0x952CBD0)

namespace RPG::Client
{
	inline static constexpr unsigned int EarlyAccessUtils_TypeDefinitionIndex = 51698;

	class EarlyAccessUtils : public ::System::Object
	{
	public:
		// static const ::System::String* _SwitchDialogName; // 0x0

		static ::System::Void ShowEarlyAccessSwitchDialog(::System::UInt32 contentID, ::System::Action* callback)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSUTILS_SHOWEARLYACCESSSWITCHDIALOG_OFFSET))(contentID, callback);
		}

		static ::System::Boolean IsNeedSwitchContent(::System::UInt32 contentID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSUTILS_ISNEEDSWITCHCONTENT_OFFSET))(contentID);
		}

		static ::System::Void ReportSwitchDialogButton(::System::UInt32 contentID, ::System::Boolean isOK, ::System::Guid guid)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_EARLYACCESSUTILS_REPORTSWITCHDIALOGBUTTON_OFFSET))(contentID, isOK, guid);
		}
	};
}
