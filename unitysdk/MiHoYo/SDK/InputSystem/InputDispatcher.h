#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/InputSystem/KeyType.h"
#include "unitysdk/MiHoYo/SDK/InputSystem/KeyboardType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/IMECompositionMode.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MiHoYo::SDK::InputSystem { class ICommonService; }
namespace MiHoYo::SDK::InputSystem { class IKeyAdapter; }
namespace MiHoYo::SDK::InputSystem { class IKeyMapping; }
namespace MiHoYo::SDK::InputSystem { class IKeyService; }
namespace MiHoYo::SDK::InputSystem { class IMouseService; }
namespace MiHoYo::SDK::InputSystem { class IPropertyService; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1C36C930)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1C36CBD0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x1C36CA80)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETIMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1C36D3C0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEYADAPTER_OFFSET UNITYSDK_OFFSET(0x1C36BF30)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEYCODETYPE_OFFSET UNITYSDK_OFFSET(0x1C36DEB0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x1C36BE40)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x1C36C1A0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEY_OFFSET UNITYSDK_OFFSET(0x1C36C0A0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x1C36C4D0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x1C36C700)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1C36C2A0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1C36CF10)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETMOUSESCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x1C36D190)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETSIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x1C36DA50)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETTOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1C36D820)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x1C36CD20)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C36B4E0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_INITENV_OFFSET UNITYSDK_OFFSET(0x1C36B680)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERCOMMONSERVICE_OFFSET UNITYSDK_OFFSET(0x1C36BCD0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERGAMEPADSERVICE_OFFSET UNITYSDK_OFFSET(0x1C36BB30)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERJOYPADSERVICE_OFFSET UNITYSDK_OFFSET(0x1C36B8F0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERKEYBOARDSERVICE_OFFSET UNITYSDK_OFFSET(0x1C36BA10)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERKEYMAPPING_OFFSET UNITYSDK_OFFSET(0x1C36B710)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERMOUSESERVICE_OFFSET UNITYSDK_OFFSET(0x1C36BBE0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERPROPERTYSERVICE_OFFSET UNITYSDK_OFFSET(0x1C36BD50)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_SETIMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x1C36D5F0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_SETINPUTACTIONASSET_OFFSET UNITYSDK_OFFSET(0x1C36B7A0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_SETSIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x1C36DC80)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C36B670)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C36B5E0)

namespace MiHoYo::SDK::InputSystem
{
	inline static constexpr unsigned int InputDispatcher_TypeDefinitionIndex = 18395;

	class InputDispatcher : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputSystem::InputDispatcher** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::InputSystem::InputDispatcher**)Il2CppClass::FromTypeDefinitionIndex(InputDispatcher_TypeDefinitionIndex)->GetStaticField(0x8ED0);
		}
		::System::Collections::Generic::Dictionary_2<::MiHoYo::SDK::InputSystem::KeyboardType, ::MiHoYo::SDK::InputSystem::IKeyMapping*>* m_dicMapping; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::InputSystem::InputDispatcher* get_Instance()
		{
			return ((::MiHoYo::SDK::InputSystem::InputDispatcher*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::InputSystem::InputDispatcher* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::InputSystem::InputDispatcher*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void InitEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_INITENV_OFFSET))(this);
		}

		::System::Void RegisterKeyMapping(::MiHoYo::SDK::InputSystem::KeyboardType eType, ::MiHoYo::SDK::InputSystem::IKeyMapping* instance)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::KeyboardType, ::MiHoYo::SDK::InputSystem::IKeyMapping*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERKEYMAPPING_OFFSET))(this, eType, instance);
		}

		::System::Void SetInputActionAsset(::System::Object* actions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_SETINPUTACTIONASSET_OFFSET))(this, actions);
		}

		::System::Void RegisterJoypadService(::MiHoYo::SDK::InputSystem::IKeyService* service)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IKeyService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERJOYPADSERVICE_OFFSET))(this, service);
		}

		::System::Void RegisterKeyboardService(::MiHoYo::SDK::InputSystem::IKeyService* service)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IKeyService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERKEYBOARDSERVICE_OFFSET))(this, service);
		}

		::System::Void RegisterGamepadService(::MiHoYo::SDK::InputSystem::IKeyService* service)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IKeyService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERGAMEPADSERVICE_OFFSET))(this, service);
		}

		::System::Void RegisterMouseService(::MiHoYo::SDK::InputSystem::IMouseService* service)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IMouseService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERMOUSESERVICE_OFFSET))(this, service);
		}

		::System::Void RegisterCommonService(::MiHoYo::SDK::InputSystem::ICommonService* service)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::ICommonService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERCOMMONSERVICE_OFFSET))(this, service);
		}

		::System::Void RegisterPropertyService(::MiHoYo::SDK::InputSystem::IPropertyService* service)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IPropertyService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERPROPERTYSERVICE_OFFSET))(this, service);
		}

		::System::Boolean GetKeyDown(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEYDOWN_OFFSET))(this, key);
		}

		::System::Boolean GetKey(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEY_OFFSET))(this, key);
		}

		::System::Boolean GetKeyUp(::UnityEngine::KeyCode key)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEYUP_OFFSET))(this, key);
		}

		::System::Boolean GetMouseButton(::System::Int32 button)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETMOUSEBUTTON_OFFSET))(this, button);
		}

		::System::Boolean GetMouseButtonDown(::System::Int32 button)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETMOUSEBUTTONDOWN_OFFSET))(this, button);
		}

		::System::Boolean GetMouseButtonUp(::System::Int32 button)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETMOUSEBUTTONUP_OFFSET))(this, button);
		}

		::System::Boolean GetButtonDown(::System::String* buttonName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETBUTTONDOWN_OFFSET))(this, buttonName);
		}

		::System::Boolean GetButton(::System::String* buttonName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETBUTTON_OFFSET))(this, buttonName);
		}

		::System::Boolean GetButtonUp(::System::String* buttonName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETBUTTONUP_OFFSET))(this, buttonName);
		}

		::UnityEngine::Touch GetTouch(::System::Int32 index)
		{
			return ((::UnityEngine::Touch(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETTOUCH_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 GetMousePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETMOUSEPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetMouseScrollDelta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETMOUSESCROLLDELTA_OFFSET))(this);
		}

		::UnityEngine::IMECompositionMode GetImeCompositionMode()
		{
			return ((::UnityEngine::IMECompositionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETIMECOMPOSITIONMODE_OFFSET))(this);
		}

		::System::Void SetImeCompositionMode(::UnityEngine::IMECompositionMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::IMECompositionMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_SETIMECOMPOSITIONMODE_OFFSET))(this, mode);
		}

		::System::Int32 GetTouchCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETTOUCHCOUNT_OFFSET))(this);
		}

		::System::Boolean GetSimulateMouseWithTouches()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETSIMULATEMOUSEWITHTOUCHES_OFFSET))(this);
		}

		::System::Void SetSimulateMouseWithTouches(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_SETSIMULATEMOUSEWITHTOUCHES_OFFSET))(this, value);
		}

		::System::Void GetKeyCodeType(::UnityEngine::KeyCode key, ::MiHoYo::SDK::InputSystem::KeyboardType& keyboardType, ::System::Int32& nKey, ::MiHoYo::SDK::InputSystem::KeyType& keyType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::KeyCode, ::MiHoYo::SDK::InputSystem::KeyboardType&, ::System::Int32&, ::MiHoYo::SDK::InputSystem::KeyType&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEYCODETYPE_OFFSET))(this, key, keyboardType, nKey, keyType);
		}

		::MiHoYo::SDK::InputSystem::IKeyAdapter* GetKeyAdapter(::UnityEngine::KeyCode key, ::System::Int32& nKey, ::MiHoYo::SDK::InputSystem::KeyType& keyType)
		{
			return ((::MiHoYo::SDK::InputSystem::IKeyAdapter*(*)(::PVOID, ::UnityEngine::KeyCode, ::System::Int32&, ::MiHoYo::SDK::InputSystem::KeyType&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEYADAPTER_OFFSET))(this, key, nKey, keyType);
		}
	};
}
