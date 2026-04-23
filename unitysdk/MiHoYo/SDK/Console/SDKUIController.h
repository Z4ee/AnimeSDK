#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/SDKUIController_Direction.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_GETACTIVEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x174F3F00)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x174F3530)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_HIGHLIGHTNEXTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x174F3D20)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x174F3570)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x174F35B0)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x174F35F0)
#define MIHOYO_SDK_CONSOLE_SDKUICONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x174F4330)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int SDKUIController_TypeDefinitionIndex = 7728;

	class SDKUIController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::Console::SDKUIController** StaticGet__Instance_k__BackingField()
		{
			return (::MiHoYo::SDK::Console::SDKUIController**)Il2CppClass::FromTypeDefinitionIndex(SDKUIController_TypeDefinitionIndex)->GetStaticField(0x169C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Console::SDKUIController* get_Instance()
		{
			return ((::MiHoYo::SDK::Console::SDKUIController*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::Console::SDKUIController* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Console::SDKUIController*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_UPDATE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetActiveGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_GETACTIVEGAMEOBJECT_OFFSET))(this);
		}

		::System::Void HighlightNextGameObject(::MiHoYo::SDK::Console::SDKUIController_Direction direction)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::SDKUIController_Direction))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUICONTROLLER_HIGHLIGHTNEXTGAMEOBJECT_OFFSET))(this, direction);
		}
	};
}
