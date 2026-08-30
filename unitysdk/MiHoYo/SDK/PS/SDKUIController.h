#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/SDKUIController_Direction.h"
#include "unitysdk/MiHoYo/SDK/PS/SDKUIRect.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MiHoYo::SDK::PS { class SDKUIDialog; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Selectable; }

#define MIHOYO_SDK_PS_SDKUICONTROLLER_GETACTIVEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BA700F0)
#define MIHOYO_SDK_PS_SDKUICONTROLLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BA6F470)
#define MIHOYO_SDK_PS_SDKUICONTROLLER_HIGHLIGHTNEXTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BA6FC80)
#define MIHOYO_SDK_PS_SDKUICONTROLLER_SEARCHNEXTHIGHLIGHTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BA706D0)
#define MIHOYO_SDK_PS_SDKUICONTROLLER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BA6F480)
#define MIHOYO_SDK_PS_SDKUICONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1BA6F490)
#define MIHOYO_SDK_PS_SDKUICONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BA6F4A0)
#define MIHOYO_SDK_PS_SDKUICONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA71010)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int SDKUIController_TypeDefinitionIndex = 8864;

	class SDKUIController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MiHoYo::SDK::PS::SDKUIController** StaticGet__Instance_k__BackingField()
		{
			return (::MiHoYo::SDK::PS::SDKUIController**)Il2CppClass::FromTypeDefinitionIndex(SDKUIController_TypeDefinitionIndex)->GetStaticField(0x24190);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PS::SDKUIController* get_Instance()
		{
			return ((::MiHoYo::SDK::PS::SDKUIController*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::PS::SDKUIController* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::PS::SDKUIController*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER_SET_INSTANCE_OFFSET))(a1);
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

		::System::Void HighlightNextGameObject(::MiHoYo::SDK::PS::SDKUIController_Direction a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::SDKUIController_Direction))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER_HIGHLIGHTNEXTGAMEOBJECT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* SearchNextHighlightGameObject(::MiHoYo::SDK::PS::SDKUIController_Direction a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UI::Selectable*>* a2, ::MiHoYo::SDK::PS::SDKUIRect a3, ::MiHoYo::SDK::PS::SDKUIDialog* a4, ::MiHoYo::SDK::PS::SDKUIRect a5)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::MiHoYo::SDK::PS::SDKUIController_Direction, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UI::Selectable*>*, ::MiHoYo::SDK::PS::SDKUIRect, ::MiHoYo::SDK::PS::SDKUIDialog*, ::MiHoYo::SDK::PS::SDKUIRect))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_SDKUICONTROLLER_SEARCHNEXTHIGHLIGHTGAMEOBJECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
