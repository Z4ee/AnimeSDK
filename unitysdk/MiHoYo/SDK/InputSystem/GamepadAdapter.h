#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/InputSystem/KeyType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::InputSystem { class IGamepadService; }

#define MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1738A280)
#define MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x1738A5A0)
#define MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_GETKEY_OFFSET UNITYSDK_OFFSET(0x1738A410)
#define MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1738A1C0)
#define MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x1738A730)
#define MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1738A240)
#define MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1738A230)

namespace MiHoYo::SDK::InputSystem
{
	inline static constexpr unsigned int GamepadAdapter_TypeDefinitionIndex = 9960;

	class GamepadAdapter : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputSystem::GamepadAdapter** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::InputSystem::GamepadAdapter**)Il2CppClass::FromTypeDefinitionIndex(GamepadAdapter_TypeDefinitionIndex)->GetStaticField(0xC00);
		}
		::MiHoYo::SDK::InputSystem::IGamepadService* m_service; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::InputSystem::GamepadAdapter* get_Instance()
		{
			return ((::MiHoYo::SDK::InputSystem::GamepadAdapter*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::InputSystem::GamepadAdapter* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::InputSystem::GamepadAdapter*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_SET_INSTANCE_OFFSET))(value);
		}

		::System::Boolean GetKeyDown(::System::Int32 nKey, ::MiHoYo::SDK::InputSystem::KeyType keyType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::InputSystem::KeyType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_GETKEYDOWN_OFFSET))(this, nKey, keyType);
		}

		::System::Boolean GetKey(::System::Int32 nKey, ::MiHoYo::SDK::InputSystem::KeyType keyType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::InputSystem::KeyType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_GETKEY_OFFSET))(this, nKey, keyType);
		}

		::System::Boolean GetKeyUp(::System::Int32 nKey, ::MiHoYo::SDK::InputSystem::KeyType keyType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::InputSystem::KeyType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_GETKEYUP_OFFSET))(this, nKey, keyType);
		}

		::System::Void RegisterService(::MiHoYo::SDK::InputSystem::IGamepadService* service)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IGamepadService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_GAMEPADADAPTER_REGISTERSERVICE_OFFSET))(this, service);
		}
	};
}
