#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"

namespace MiHoYo::SDK::InputSystem { class ICommonService; }
namespace System { class String; }

#define MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GETBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1C36ABB0)
#define MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GETBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1C36AD70)
#define MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x1C36AC90)
#define MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x1C36AE50)
#define MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C36AA40)
#define MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x1C36AF80)
#define MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_SETINPUTACTIONASSET_OFFSET UNITYSDK_OFFSET(0x1C36AAD0)
#define MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C36AAC0)
#define MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C36AAB0)

namespace MiHoYo::SDK::InputSystem
{
	inline static constexpr unsigned int CommonAdapter_TypeDefinitionIndex = 18388;

	class CommonAdapter : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputSystem::CommonAdapter** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::InputSystem::CommonAdapter**)Il2CppClass::FromTypeDefinitionIndex(CommonAdapter_TypeDefinitionIndex)->GetStaticField(0x8EB0);
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

		static ::System::Void set_Instance(::MiHoYo::SDK::InputSystem::CommonAdapter* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::InputSystem::CommonAdapter*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void SetInputActionAsset(::System::Object* actions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_SETINPUTACTIONASSET_OFFSET))(this, actions);
		}

		::System::Boolean GetButtonDown(::System::String* buttonName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GETBUTTONDOWN_OFFSET))(this, buttonName);
		}

		::System::Boolean GetButton(::System::String* buttonName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GETBUTTON_OFFSET))(this, buttonName);
		}

		::System::Boolean GetButtonUp(::System::String* buttonName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GETBUTTONUP_OFFSET))(this, buttonName);
		}

		::UnityEngine::Touch GetTouch(::System::Int32 index)
		{
			return ((::UnityEngine::Touch(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_GETTOUCH_OFFSET))(this, index);
		}

		::System::Void RegisterService(::MiHoYo::SDK::InputSystem::ICommonService* service)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::ICommonService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_COMMONADAPTER_REGISTERSERVICE_OFFSET))(this, service);
		}
	};
}
