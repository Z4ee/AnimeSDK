#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/IMECompositionMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MiHoYo::SDK::InputSystem { class IPropertyService; }

#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GETIMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1FA90DD0)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GETMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1FA90950)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GETMOUSESCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x1FA90BA0)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GETSIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x1FA91460)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GETTOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1FA91230)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1FA8F690)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x1FA92270)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_SETIMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1FA91000)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_SETSIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x1FA91690)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1FA92260)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA92250)

namespace MiHoYo::SDK::InputSystem
{
	inline static constexpr unsigned int PropertyAdapter_TypeDefinitionIndex = 19621;

	class PropertyAdapter : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputSystem::PropertyAdapter** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::InputSystem::PropertyAdapter**)Il2CppClass::FromTypeDefinitionIndex(PropertyAdapter_TypeDefinitionIndex)->GetStaticField(0x8FA0);
		}
		::MiHoYo::SDK::InputSystem::IPropertyService* m_service; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::InputSystem::PropertyAdapter* get_Instance()
		{
			return ((::MiHoYo::SDK::InputSystem::PropertyAdapter*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::InputSystem::PropertyAdapter* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::InputSystem::PropertyAdapter*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void RegisterService(::MiHoYo::SDK::InputSystem::IPropertyService* service)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IPropertyService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_REGISTERSERVICE_OFFSET))(this, service);
		}

		::UnityEngine::Vector3 GetMousePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GETMOUSEPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetMouseScrollDelta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GETMOUSESCROLLDELTA_OFFSET))(this);
		}

		::UnityEngine::IMECompositionMode GetImeCompositionMode()
		{
			return ((::UnityEngine::IMECompositionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GETIMECOMPOSITIONMODE_OFFSET))(this);
		}

		::System::Void SetImeCompositionMode(::UnityEngine::IMECompositionMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::IMECompositionMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_SETIMECOMPOSITIONMODE_OFFSET))(this, mode);
		}

		::System::Int32 GetTouchCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GETTOUCHCOUNT_OFFSET))(this);
		}

		::System::Boolean GetSimulateMouseWithTouches()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GETSIMULATEMOUSEWITHTOUCHES_OFFSET))(this);
		}

		::System::Void SetSimulateMouseWithTouches(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_SETSIMULATEMOUSEWITHTOUCHES_OFFSET))(this, value);
		}
	};
}
