#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"

namespace MiHoYo::SDK::InputSystem { class ICommonService; }
namespace System { class String; }

#define MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GETBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1BBB8CB0)
#define MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GETBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1BBB8F10)
#define MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x1BBB8DE0)
#define MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x1BBB9040)
#define MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BBB8AF0)
#define MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x1BBB91C0)
#define MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_SETINPUTACTIONASSET_OFFSET UNITYSDK_OFFSET(0x1BBB8B80)
#define MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BBB8B70)
#define MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB8B60)

namespace MiHoYo::SDK::InputSystem
{
	inline static constexpr unsigned int CommonAdapter_TypeDefinitionIndex = 10093;

	class CommonAdapter : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputSystem::CommonAdapter** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::InputSystem::CommonAdapter**)Il2CppClass::FromTypeDefinitionIndex(CommonAdapter_TypeDefinitionIndex)->GetStaticField(0x6E0);
		}
		::MiHoYo::SDK::InputSystem::ICommonService* m_service; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::InputSystem::CommonAdapter* get_Instance()
		{
			return ((::MiHoYo::SDK::InputSystem::CommonAdapter*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::InputSystem::CommonAdapter* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::InputSystem::CommonAdapter*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void SetInputActionAsset(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_SETINPUTACTIONASSET_OFFSET))(this, a1);
		}

		::System::Boolean GetButtonDown(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GETBUTTONDOWN_OFFSET))(this, a1);
		}

		::System::Boolean GetButton(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GETBUTTON_OFFSET))(this, a1);
		}

		::System::Boolean GetButtonUp(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GETBUTTONUP_OFFSET))(this, a1);
		}

		::UnityEngine::Touch GetTouch(::System::Int32 a1)
		{
			return ((::UnityEngine::Touch(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GETTOUCH_OFFSET))(this, a1);
		}

		::System::Void RegisterService(::MiHoYo::SDK::InputSystem::ICommonService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::ICommonService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_REGISTERSERVICE_OFFSET))(this, a1);
		}
	};
}
