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

#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x181965F0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETBUTTONUP_OFFSET UNITYSDK_OFFSET(0x18196890)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x18196740)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETIMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x18197080)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEYADAPTER_OFFSET UNITYSDK_OFFSET(0x18195BD0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEYCODETYPE_OFFSET UNITYSDK_OFFSET(0x18197B70)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEYDOWN_OFFSET UNITYSDK_OFFSET(0x18195AD0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEYUP_OFFSET UNITYSDK_OFFSET(0x18195E50)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEY_OFFSET UNITYSDK_OFFSET(0x18195D40)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETMOUSEBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x18196190)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETMOUSEBUTTONUP_OFFSET UNITYSDK_OFFSET(0x181963C0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETMOUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x18195F60)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x18196BD0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETMOUSESCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x18196E50)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETSIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x18197710)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETTOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x181974E0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETTOUCH_OFFSET UNITYSDK_OFFSET(0x181969E0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18195110)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_INITENV_OFFSET UNITYSDK_OFFSET(0x181952B0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERCOMMONSERVICE_OFFSET UNITYSDK_OFFSET(0x18195960)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERGAMEPADSERVICE_OFFSET UNITYSDK_OFFSET(0x181957A0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERJOYPADSERVICE_OFFSET UNITYSDK_OFFSET(0x18195520)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERKEYBOARDSERVICE_OFFSET UNITYSDK_OFFSET(0x18195660)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERKEYMAPPING_OFFSET UNITYSDK_OFFSET(0x18195340)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERMOUSESERVICE_OFFSET UNITYSDK_OFFSET(0x18195870)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERPROPERTYSERVICE_OFFSET UNITYSDK_OFFSET(0x181959E0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_SETIMECOMPOSITIONMODE_OFFSET UNITYSDK_OFFSET(0x181972B0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_SETINPUTACTIONASSET_OFFSET UNITYSDK_OFFSET(0x181953D0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_SETSIMULATEMOUSEWITHTOUCHES_OFFSET UNITYSDK_OFFSET(0x18197940)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x181952A0)
#define MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x18195210)

namespace MiHoYo::SDK::InputSystem
{
	inline static constexpr unsigned int InputDispatcher_TypeDefinitionIndex = 9793;

	class InputDispatcher : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::InputSystem::InputDispatcher** StaticGet_sm_instance()
		{
			return (::MiHoYo::SDK::InputSystem::InputDispatcher**)Il2CppClass::FromTypeDefinitionIndex(InputDispatcher_TypeDefinitionIndex)->GetStaticField(0xB40);
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

		static ::System::Void set_Instance(::MiHoYo::SDK::InputSystem::InputDispatcher* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::InputSystem::InputDispatcher*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void InitEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_INITENV_OFFSET))(this);
		}

		::System::Void RegisterKeyMapping(::MiHoYo::SDK::InputSystem::KeyboardType a1, ::MiHoYo::SDK::InputSystem::IKeyMapping* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::KeyboardType, ::MiHoYo::SDK::InputSystem::IKeyMapping*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERKEYMAPPING_OFFSET))(this, a1, a2);
		}

		::System::Void SetInputActionAsset(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_SETINPUTACTIONASSET_OFFSET))(this, a1);
		}

		::System::Void RegisterJoypadService(::MiHoYo::SDK::InputSystem::IKeyService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IKeyService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERJOYPADSERVICE_OFFSET))(this, a1);
		}

		::System::Void RegisterKeyboardService(::MiHoYo::SDK::InputSystem::IKeyService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IKeyService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERKEYBOARDSERVICE_OFFSET))(this, a1);
		}

		::System::Void RegisterGamepadService(::MiHoYo::SDK::InputSystem::IKeyService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IKeyService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERGAMEPADSERVICE_OFFSET))(this, a1);
		}

		::System::Void RegisterMouseService(::MiHoYo::SDK::InputSystem::IMouseService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IMouseService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERMOUSESERVICE_OFFSET))(this, a1);
		}

		::System::Void RegisterCommonService(::MiHoYo::SDK::InputSystem::ICommonService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::ICommonService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERCOMMONSERVICE_OFFSET))(this, a1);
		}

		::System::Void RegisterPropertyService(::MiHoYo::SDK::InputSystem::IPropertyService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::InputSystem::IPropertyService*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_REGISTERPROPERTYSERVICE_OFFSET))(this, a1);
		}

		::System::Boolean GetKeyDown(::UnityEngine::KeyCode a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEYDOWN_OFFSET))(this, a1);
		}

		::System::Boolean GetKey(::UnityEngine::KeyCode a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEY_OFFSET))(this, a1);
		}

		::System::Boolean GetKeyUp(::UnityEngine::KeyCode a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::KeyCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEYUP_OFFSET))(this, a1);
		}

		::System::Boolean GetMouseButton(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETMOUSEBUTTON_OFFSET))(this, a1);
		}

		::System::Boolean GetMouseButtonDown(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETMOUSEBUTTONDOWN_OFFSET))(this, a1);
		}

		::System::Boolean GetMouseButtonUp(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETMOUSEBUTTONUP_OFFSET))(this, a1);
		}

		::System::Boolean GetButtonDown(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETBUTTONDOWN_OFFSET))(this, a1);
		}

		::System::Boolean GetButton(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETBUTTON_OFFSET))(this, a1);
		}

		::System::Boolean GetButtonUp(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETBUTTONUP_OFFSET))(this, a1);
		}

		::UnityEngine::Touch GetTouch(::System::Int32 a1)
		{
			return ((::UnityEngine::Touch(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETTOUCH_OFFSET))(this, a1);
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

		::System::Void SetImeCompositionMode(::UnityEngine::IMECompositionMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::IMECompositionMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_SETIMECOMPOSITIONMODE_OFFSET))(this, a1);
		}

		::System::Int32 GetTouchCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETTOUCHCOUNT_OFFSET))(this);
		}

		::System::Boolean GetSimulateMouseWithTouches()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETSIMULATEMOUSEWITHTOUCHES_OFFSET))(this);
		}

		::System::Void SetSimulateMouseWithTouches(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_SETSIMULATEMOUSEWITHTOUCHES_OFFSET))(this, a1);
		}

		::System::Void GetKeyCodeType(::UnityEngine::KeyCode a1, ::MiHoYo::SDK::InputSystem::KeyboardType& a2, ::System::Int32& a3, ::MiHoYo::SDK::InputSystem::KeyType& a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::KeyCode, ::MiHoYo::SDK::InputSystem::KeyboardType&, ::System::Int32&, ::MiHoYo::SDK::InputSystem::KeyType&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEYCODETYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::MiHoYo::SDK::InputSystem::IKeyAdapter* GetKeyAdapter(::UnityEngine::KeyCode a1, ::System::Int32& a2, ::MiHoYo::SDK::InputSystem::KeyType& a3)
		{
			return ((::MiHoYo::SDK::InputSystem::IKeyAdapter*(*)(::PVOID, ::UnityEngine::KeyCode, ::System::Int32&, ::MiHoYo::SDK::InputSystem::KeyType&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INPUTSYSTEM_INPUTDISPATCHER_GETKEYADAPTER_OFFSET))(this, a1, a2, a3);
		}
	};
}
