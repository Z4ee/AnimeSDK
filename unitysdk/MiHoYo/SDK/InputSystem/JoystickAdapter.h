#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/InputSystem/KeyType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::InputSystem { class IJoystickService; }

#define MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1E6A7950)
#define MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x1E6A7B10)
#define MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_GETKEY_OFFSET UNITYSDK_OFFSET(0x1E6A7A30)
#define MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E6A5230)
#define MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x1E6A7BF0)
#define MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E6A7940)
#define MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A7930)

namespace MiHoYo::SDK::InputSystem
{
	inline static constexpr unsigned int JoystickAdapter_TypeDefinitionIndex = 19273;

	class JoystickAdapter : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputSystem::JoystickAdapter** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::InputSystem::JoystickAdapter**)Il2CppClass::FromTypeDefinitionIndex(JoystickAdapter_TypeDefinitionIndex)->GetStaticField(0x8F30);
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

		static ::System::Void set_Instance(::MiHoYo::SDK::InputSystem::JoystickAdapter* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::InputSystem::JoystickAdapter*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_SET_INSTANCE_OFFSET))(value);
		}

		::System::Boolean GetKeyDown(::System::Int32 nKey, ::MiHoYo::SDK::InputSystem::KeyType keyType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::InputSystem::KeyType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_GETKEYDOWN_OFFSET))(this, nKey, keyType);
		}

		::System::Boolean GetKey(::System::Int32 nKey, ::MiHoYo::SDK::InputSystem::KeyType keyType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::InputSystem::KeyType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_GETKEY_OFFSET))(this, nKey, keyType);
		}

		::System::Boolean GetKeyUp(::System::Int32 nKey, ::MiHoYo::SDK::InputSystem::KeyType keyType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::InputSystem::KeyType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_GETKEYUP_OFFSET))(this, nKey, keyType);
		}

		::System::Void RegisterService(::MiHoYo::SDK::InputSystem::IJoystickService* service)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IJoystickService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_JOYSTICKADAPTER_REGISTERSERVICE_OFFSET))(this, service);
		}
	};
}
