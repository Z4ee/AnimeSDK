#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PanelType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUICommon_Input_ConfigMobileButtonPanel; }
namespace MoleMole { class ConfigUICommon_Input_ConfigMobilePanelLayout; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUICOMMON_INPUT_CONFIGMOBILEBUTTONPANELPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x18F39C80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_ConfigMobileButtonPanelPosition_TypeDefinitionIndex = 52108;

	class ConfigUICommon_Input_ConfigMobileButtonPanelPosition : public ::System::Object
	{
	public:
		::MoleMole::ConfigUICommon_Input_ConfigMobilePanelLayout* Layout; // 0x10
		::System::Collections::Generic::Dictionary_2<::MoleMole::ConfigUICommon_Input_PanelType, ::MoleMole::ConfigUICommon_Input_ConfigMobileButtonPanel*>* Panels; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_CONFIGMOBILEBUTTONPANELPOSITION__CTOR_OFFSET))(this);
		}
	};
}
