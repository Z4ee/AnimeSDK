#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/InputSystem/KeyType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::InputSystem { class IJoystickService; }

#define MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1D2DA0C0)
#define MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x1D2DA320)
#define MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_GETKEY_OFFSET UNITYSDK_OFFSET(0x1D2DA1F0)
#define MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D2D80D0)
#define MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x1D2DA450)
#define MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D2DA0B0)
#define MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2DA0A0)

namespace MiHoYo::SDK::InputSystem
{
	inline static constexpr unsigned int JoystickAdapter_TypeDefinitionIndex = 9803;

	class JoystickAdapter : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputSystem::JoystickAdapter** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::InputSystem::JoystickAdapter**)Il2CppClass::FromTypeDefinitionIndex(JoystickAdapter_TypeDefinitionIndex)->GetStaticField(0x7D0);
		}
		::MiHoYo::SDK::InputSystem::IJoystickService* m_service; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::InputSystem::JoystickAdapter* get_Instance()
		{
			return ((::MiHoYo::SDK::InputSystem::JoystickAdapter*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::InputSystem::JoystickAdapter* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::InputSystem::JoystickAdapter*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Boolean GetKeyDown(::System::Int32 a1, ::MiHoYo::SDK::InputSystem::KeyType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::InputSystem::KeyType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_GETKEYDOWN_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetKey(::System::Int32 a1, ::MiHoYo::SDK::InputSystem::KeyType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::InputSystem::KeyType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_GETKEY_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetKeyUp(::System::Int32 a1, ::MiHoYo::SDK::InputSystem::KeyType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::InputSystem::KeyType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_GETKEYUP_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterService(::MiHoYo::SDK::InputSystem::IJoystickService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IJoystickService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_REGISTERSERVICE_OFFSET))(this, a1);
		}
	};
}
