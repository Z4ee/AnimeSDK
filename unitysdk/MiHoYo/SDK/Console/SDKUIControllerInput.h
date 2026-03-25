#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/SDKUIControllerInputKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLERINPUT_GETKEYCODES_OFFSET UNITYSDK_OFFSET(0x15EB2210)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLERINPUT_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x15EB09E0)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLERINPUT_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x15EB2850)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLERINPUT_GETKEY_OFFSET UNITYSDK_OFFSET(0x15EB2CD0)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLERINPUT__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EB14A0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int SDKUIControllerInput_TypeDefinitionIndex = 7590;

	class SDKUIControllerInput : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::Console::SDKUIControllerInputKey, ::UnityEngine::KeyCode>** StaticGet_KeyCodeMappingPS()
		{
			return (::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::Console::SDKUIControllerInputKey, ::UnityEngine::KeyCode>**)Il2CppClass::FromTypeDefinitionIndex(SDKUIControllerInput_TypeDefinitionIndex)->GetStaticField(0x12E10);
		}
		static ::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::Console::SDKUIControllerInputKey, ::UnityEngine::KeyCode>** StaticGet_KeyCodeMappingCX()
		{
			return (::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::Console::SDKUIControllerInputKey, ::UnityEngine::KeyCode>**)Il2CppClass::FromTypeDefinitionIndex(SDKUIControllerInput_TypeDefinitionIndex)->GetStaticField(0x12E18);
		}
		static ::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::Console::SDKUIControllerInputKey, ::System::Collections::Generic::List_1<::UnityEngine::KeyCode>*>** StaticGet_KeyCodeMappingXCloud()
		{
			return (::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::Console::SDKUIControllerInputKey, ::System::Collections::Generic::List_1<::UnityEngine::KeyCode>*>**)Il2CppClass::FromTypeDefinitionIndex(SDKUIControllerInput_TypeDefinitionIndex)->GetStaticField(0x12E20);
		}
		static ::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::Console::SDKUIControllerInputKey, ::UnityEngine::KeyCode>** StaticGet_KeyCodeMappingCommon()
		{
			return (::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::Console::SDKUIControllerInputKey, ::UnityEngine::KeyCode>**)Il2CppClass::FromTypeDefinitionIndex(SDKUIControllerInput_TypeDefinitionIndex)->GetStaticField(0x12E28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLERINPUT__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>* GetKeyCodes(::MiHoYo::SDK::Console::SDKUIControllerInputKey key)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::KeyCode>*(*)(::MiHoYo::SDK::Console::SDKUIControllerInputKey))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLERINPUT_GETKEYCODES_OFFSET))(key);
		}

		static ::System::Boolean GetKeyUp(::MiHoYo::SDK::Console::SDKUIControllerInputKey key)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::Console::SDKUIControllerInputKey))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLERINPUT_GETKEYUP_OFFSET))(key);
		}

		static ::System::Boolean GetKeyDown(::MiHoYo::SDK::Console::SDKUIControllerInputKey key)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::Console::SDKUIControllerInputKey))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLERINPUT_GETKEYDOWN_OFFSET))(key);
		}

		static ::System::Boolean GetKey(::MiHoYo::SDK::Console::SDKUIControllerInputKey key)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::Console::SDKUIControllerInputKey))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLERINPUT_GETKEY_OFFSET))(key);
		}
	};
}
