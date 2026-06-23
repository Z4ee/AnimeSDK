#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::InputSystem { class IMouseService; }

#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1E6A5EB0)
#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1E6A60E0)
#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1E6A5C80)
#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E6A54F0)
#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x1E6A81E0)
#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E6A81D0)
#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A81C0)

namespace MiHoYo::SDK::InputSystem
{
	inline static constexpr unsigned int MouseAdapter_TypeDefinitionIndex = 19275;

	class MouseAdapter : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputSystem::MouseAdapter** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::InputSystem::MouseAdapter**)Il2CppClass::FromTypeDefinitionIndex(MouseAdapter_TypeDefinitionIndex)->GetStaticField(0x8F50);
		}
		::MiHoYo::SDK::InputSystem::IMouseService* m_service; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::InputSystem::MouseAdapter* get_Instance()
		{
			return ((::MiHoYo::SDK::InputSystem::MouseAdapter*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::InputSystem::MouseAdapter* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::InputSystem::MouseAdapter*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_SET_INSTANCE_OFFSET))(value);
		}

		::System::Boolean GetMouseButton(::System::Int32 button)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GETMOUSEBUTTON_OFFSET))(this, button);
		}

		::System::Boolean GetMouseButtonDown(::System::Int32 button)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GETMOUSEBUTTONDOWN_OFFSET))(this, button);
		}

		::System::Boolean GetMouseButtonUp(::System::Int32 button)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GETMOUSEBUTTONUP_OFFSET))(this, button);
		}

		::System::Void RegisterService(::MiHoYo::SDK::InputSystem::IMouseService* service)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IMouseService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_REGISTERSERVICE_OFFSET))(this, service);
		}
	};
}
