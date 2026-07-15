#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::InputSystem { class IMouseService; }

#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1D2D8D30)
#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1D2D8EE0)
#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1D2D8B80)
#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D2D83D0)
#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_REGISTERSERVICE_OFFSET UNITYSDK_OFFSET(0x1D2DACB0)
#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D2DACA0)
#define MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2DAC90)

namespace MiHoYo::SDK::InputSystem
{
	inline static constexpr unsigned int MouseAdapter_TypeDefinitionIndex = 9805;

	class MouseAdapter : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputSystem::MouseAdapter** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::InputSystem::MouseAdapter**)Il2CppClass::FromTypeDefinitionIndex(MouseAdapter_TypeDefinitionIndex)->GetStaticField(0x7F0);
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

		static ::System::Void set_Instance(::MiHoYo::SDK::InputSystem::MouseAdapter* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::InputSystem::MouseAdapter*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Boolean GetMouseButton(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GETMOUSEBUTTON_OFFSET))(this, a1);
		}

		::System::Boolean GetMouseButtonDown(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GETMOUSEBUTTONDOWN_OFFSET))(this, a1);
		}

		::System::Boolean GetMouseButtonUp(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_GETMOUSEBUTTONUP_OFFSET))(this, a1);
		}

		::System::Void RegisterService(::MiHoYo::SDK::InputSystem::IMouseService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IMouseService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_MOUSEADAPTER_REGISTERSERVICE_OFFSET))(this, a1);
		}
	};
}
