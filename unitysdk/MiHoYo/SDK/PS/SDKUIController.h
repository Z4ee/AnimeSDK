#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/SDKUIController_Direction.h"
#include "unitysdk/MiHoYo/SDK/PS/SDKUIRect.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK::PS { class SDKUIDialog; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Selectable; }

#define MIHOYO_SDK_PS_SDKUICONTROLLER_GETACTIVEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x15F8C560)
#define MIHOYO_SDK_PS_SDKUICONTROLLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15F8BA10)
#define MIHOYO_SDK_PS_SDKUICONTROLLER_HIGHLIGHTNEXTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x15F8C0F0)
#define MIHOYO_SDK_PS_SDKUICONTROLLER_SEARCHNEXTHIGHLIGHTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x15F8CB80)
#define MIHOYO_SDK_PS_SDKUICONTROLLER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15F8BA50)
#define MIHOYO_SDK_PS_SDKUICONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x15F8BA90)
#define MIHOYO_SDK_PS_SDKUICONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15F8BAD0)
#define MIHOYO_SDK_PS_SDKUICONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15F8D350)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int SDKUIController_TypeDefinitionIndex = 7541;

	class SDKUIController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::PS::SDKUIController** StaticGet__Instance_k__BackingField()
		{
			return (::MiHoYo::SDK::PS::SDKUIController**)Il2CppClass::FromTypeDefinitionIndex(SDKUIController_TypeDefinitionIndex)->GetStaticField(0x16370);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PS::SDKUIController* get_Instance()
		{
			return ((::MiHoYo::SDK::PS::SDKUIController*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::PS::SDKUIController* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PS::SDKUIController*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER_UPDATE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetActiveGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER_GETACTIVEGAMEOBJECT_OFFSET))(this);
		}

		::System::Void HighlightNextGameObject(::MiHoYo::SDK::PS::SDKUIController_Direction direction)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::SDKUIController_Direction))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER_HIGHLIGHTNEXTGAMEOBJECT_OFFSET))(this, direction);
		}

		::UnityEngine::GameObject* SearchNextHighlightGameObject(::MiHoYo::SDK::PS::SDKUIController_Direction direction, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UI::Selectable*>* components, ::MiHoYo::SDK::PS::SDKUIRect targetRect, ::MiHoYo::SDK::PS::SDKUIDialog* dialog, ::MiHoYo::SDK::PS::SDKUIRect currentHighlightedRect)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::MiHoYo::SDK::PS::SDKUIController_Direction, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UI::Selectable*>*, ::MiHoYo::SDK::PS::SDKUIRect, ::MiHoYo::SDK::PS::SDKUIDialog*, ::MiHoYo::SDK::PS::SDKUIRect))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER_SEARCHNEXTHIGHLIGHTGAMEOBJECT_OFFSET))(this, direction, components, targetRect, dialog, currentHighlightedRect);
		}
	};
}
