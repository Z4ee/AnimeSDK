#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/InputSystem/KeyType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::InputSystem { class IKeyboardService; }

#define MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1E6A7C20)
#define MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x1E6A7FD0)
#define MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_GETKEY_OFFSET UNITYSDK_OFFSET(0x1E6A7DF0)
#define MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E6A5350)
#define MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x1E6A81B0)
#define MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1E6A7C10)
#define MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A7C00)

namespace MiHoYo::SDK::InputSystem
{
	inline static constexpr unsigned int KeyboardAdapter_TypeDefinitionIndex = 19274;

	class KeyboardAdapter : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputSystem::KeyboardAdapter** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::InputSystem::KeyboardAdapter**)Il2CppClass::FromTypeDefinitionIndex(KeyboardAdapter_TypeDefinitionIndex)->GetStaticField(0x8F40);
		}
		::MiHoYo::SDK::InputSystem::IKeyboardService* m_service; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::InputSystem::KeyboardAdapter* get_Instance()
		{
			return ((::MiHoYo::SDK::InputSystem::KeyboardAdapter*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::InputSystem::KeyboardAdapter* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::InputSystem::KeyboardAdapter*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_SET_INSTANCE_OFFSET))(value);
		}

		::System::Boolean GetKeyDown(::System::Int32 nKey, ::MiHoYo::SDK::InputSystem::KeyType keyType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::InputSystem::KeyType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_GETKEYDOWN_OFFSET))(this, nKey, keyType);
		}

		::System::Boolean GetKey(::System::Int32 nKey, ::MiHoYo::SDK::InputSystem::KeyType keyType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::InputSystem::KeyType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_GETKEY_OFFSET))(this, nKey, keyType);
		}

		::System::Boolean GetKeyUp(::System::Int32 nKey, ::MiHoYo::SDK::InputSystem::KeyType keyType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::InputSystem::KeyType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_GETKEYUP_OFFSET))(this, nKey, keyType);
		}

		::System::Void RegisterService(::MiHoYo::SDK::InputSystem::IKeyboardService* service)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IKeyboardService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_KEYBOARDADAPTER_REGISTERSERVICE_OFFSET))(this, service);
		}
	};
}
