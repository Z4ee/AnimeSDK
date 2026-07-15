#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/SDKUIControllerInputKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MIHOYO_SDK_PS_SDKUICONTROLLERINPUT_GETKEYCODES_OFFSET UNITYSDK_OFFSET(0x1945AAE0)
#define MIHOYO_SDK_PS_SDKUICONTROLLERINPUT_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x19459130)
#define MIHOYO_SDK_PS_SDKUICONTROLLERINPUT_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x1945B380)
#define MIHOYO_SDK_PS_SDKUICONTROLLERINPUT_GETKEY_OFFSET UNITYSDK_OFFSET(0x1945B970)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int SDKUIControllerInput_TypeDefinitionIndex = 8600;

	class SDKUIControllerInput : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>* GetKeyCodes(::MiHoYo::SDK::PS::SDKUIControllerInputKey a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>*(*)(::MiHoYo::SDK::PS::SDKUIControllerInputKey))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLERINPUT_GETKEYCODES_OFFSET))(a1);
		}

		static ::System::Boolean GetKeyUp(::MiHoYo::SDK::PS::SDKUIControllerInputKey a1)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::PS::SDKUIControllerInputKey))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLERINPUT_GETKEYUP_OFFSET))(a1);
		}

		static ::System::Boolean GetKeyDown(::MiHoYo::SDK::PS::SDKUIControllerInputKey a1)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::PS::SDKUIControllerInputKey))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLERINPUT_GETKEYDOWN_OFFSET))(a1);
		}

		static ::System::Boolean GetKey(::MiHoYo::SDK::PS::SDKUIControllerInputKey a1)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::PS::SDKUIControllerInputKey))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLERINPUT_GETKEY_OFFSET))(a1);
		}
	};
}
