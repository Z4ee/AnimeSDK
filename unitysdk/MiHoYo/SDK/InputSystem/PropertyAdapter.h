#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/IMECompositionMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MiHoYo::SDK::InputSystem { class IPropertyService; }

#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GETIMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1B6DE050)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GETMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B6DDCD0)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GETMOUSESCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x1B6DDEA0)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GETSIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x1B6DE560)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GETTOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1B6DE3B0)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B6DCD10)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x1B6DF630)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_SETIMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1B6DE200)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_SETSIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x1B6DE710)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B6DF620)
#define MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6DF610)

namespace MiHoYo::SDK::InputSystem
{
	inline static constexpr unsigned int PropertyAdapter_TypeDefinitionIndex = 10085;

	class PropertyAdapter : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputSystem::PropertyAdapter** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::InputSystem::PropertyAdapter**)Il2CppClass::FromTypeDefinitionIndex(PropertyAdapter_TypeDefinitionIndex)->GetStaticField(0x750);
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

		static ::System::Void set_Instance(::MiHoYo::SDK::InputSystem::PropertyAdapter* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::InputSystem::PropertyAdapter*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void RegisterService(::MiHoYo::SDK::InputSystem::IPropertyService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IPropertyService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_REGISTERSERVICE_OFFSET))(this, a1);
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

		::System::Void SetImeCompositionMode(::UnityEngine::IMECompositionMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::IMECompositionMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_SETIMECOMPOSITIONMODE_OFFSET))(this, a1);
		}

		::System::Int32 GetTouchCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GETTOUCHCOUNT_OFFSET))(this);
		}

		::System::Boolean GetSimulateMouseWithTouches()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_GETSIMULATEMOUSEWITHTOUCHES_OFFSET))(this);
		}

		::System::Void SetSimulateMouseWithTouches(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_PROPERTYADAPTER_SETSIMULATEMOUSEWITHTOUCHES_OFFSET))(this, a1);
		}
	};
}
