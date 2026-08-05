#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PanelPositionType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUICommon_Input_ConfigMobileButtonPanelPosition; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUICOMMON_INPUT_CONFIGMOBILEBUTTONSCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x148818B0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_ConfigMobileButtonScene_TypeDefinitionIndex = 91099;

	class ConfigUICommon_Input_ConfigMobileButtonScene : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::ConfigUICommon_Input_PanelPositionType, ::MoleMole::ConfigUICommon_Input_ConfigMobileButtonPanelPosition*>* PanelPositions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_CONFIGMOBILEBUTTONSCENE__CTOR_OFFSET))(this);
		}
	};
}
