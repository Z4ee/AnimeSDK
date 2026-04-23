#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/SDKUIControllerInputKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLERINPUT_GETKEYCODES_OFFSET UNITYSDK_OFFSET(0x174F50B0)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLERINPUT_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x174F38A0)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLERINPUT_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x174F56F0)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLERINPUT_GETKEY_OFFSET UNITYSDK_OFFSET(0x174F5B70)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLERINPUT__CCTOR_OFFSET UNITYSDK_OFFSET(0x174F4340)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int SDKUIControllerInput_TypeDefinitionIndex = 7731;

	class SDKUIControllerInput : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::Console::SDKUIControllerInputKey, ::UnityEngine::KeyCode>** StaticGet_KeyCodeMappingPS()
		{
			return (::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::Console::SDKUIControllerInputKey, ::UnityEngine::KeyCode>**)Il2CppClass::FromTypeDefinitionIndex(SDKUIControllerInput_TypeDefinitionIndex)->GetStaticField(0x169E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::Console::SDKUIControllerInputKey, ::UnityEngine::KeyCode>** StaticGet_KeyCodeMappingCommon()
		{
			return (::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::Console::SDKUIControllerInputKey, ::UnityEngine::KeyCode>**)Il2CppClass::FromTypeDefinitionIndex(SDKUIControllerInput_TypeDefinitionIndex)->GetStaticField(0x169E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::Console::SDKUIControllerInputKey, ::UnityEngine::KeyCode>** StaticGet_KeyCodeMappingCX()
		{
			return (::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::Console::SDKUIControllerInputKey, ::UnityEngine::KeyCode>**)Il2CppClass::FromTypeDefinitionIndex(SDKUIControllerInput_TypeDefinitionIndex)->GetStaticField(0x169F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::Console::SDKUIControllerInputKey, ::System::Collections::Generic::List_1<::UnityEngine::KeyCode>*>** StaticGet_KeyCodeMappingXCloud()
		{
			return (::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::Console::SDKUIControllerInputKey, ::System::Collections::Generic::List_1<::UnityEngine::KeyCode>*>**)Il2CppClass::FromTypeDefinitionIndex(SDKUIControllerInput_TypeDefinitionIndex)->GetStaticField(0x169F8);
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
