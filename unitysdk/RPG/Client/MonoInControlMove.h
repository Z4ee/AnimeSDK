#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_711;
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class UIController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ScrollRect; }

#define RPG_CLIENT_MONOINCONTROLMOVE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ACE57D0)
#define RPG_CLIENT_MONOINCONTROLMOVE_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1ACE6720)
#define RPG_CLIENT_MONOINCONTROLMOVE_GETACTIONHINTNAME_OFFSET UNITYSDK_OFFSET(0x1ACE5950)
#define RPG_CLIENT_MONOINCONTROLMOVE_GET_OFFSET UNITYSDK_OFFSET(0x1ACE56B0)
#define RPG_CLIENT_MONOINCONTROLMOVE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1ACE65F0)
#define RPG_CLIENT_MONOINCONTROLMOVE_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1ACE66B0)
#define RPG_CLIENT_MONOINCONTROLMOVE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1ACE5A70)
#define RPG_CLIENT_MONOINCONTROLMOVE__APPLYLOCALDELTA_OFFSET UNITYSDK_OFFSET(0x1ACE64C0)
#define RPG_CLIENT_MONOINCONTROLMOVE__CANPROCESSINPUT_OFFSET UNITYSDK_OFFSET(0x1ACE5EA0)
#define RPG_CLIENT_MONOINCONTROLMOVE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACE67A0)
#define RPG_CLIENT_MONOINCONTROLMOVE__CLEAR_OFFSET UNITYSDK_OFFSET(0x1ACE6660)
#define RPG_CLIENT_MONOINCONTROLMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACE6780)
#define RPG_CLIENT_MONOINCONTROLMOVE__GETUICONTROLLER_OFFSET UNITYSDK_OFFSET(0x1ACE6370)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoInControlMove_TypeDefinitionIndex = 61438;

	class MonoInControlMove : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Unity::Profiling::ProfilerMarker* StaticGet_InControlMoveUpdateMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(MonoInControlMove_TypeDefinitionIndex)->GetStaticField(0x8510);
		}
		// static const ::System::String* VERTICAL_ACTION_HINT_NAME; // 0x0
		// static const ::System::String* HORIZONTAL_ACTION_HINT_NAME; // 0x0
		// static const ::System::String* VERTICAL_LEFT_STICK_ACTION_HINT_NAME; // 0x0
		// static const ::System::String* HORIZONTAL_LEFT_STICK_ACTION_HINT_NAME; // 0x0
		::System::Boolean ActionEnabled; // 0x18
		::System::Boolean IsVertical; // 0x19
		::System::Boolean UseLeftStick; // 0x1A
		::System::Single MoveStep; // 0x1C
		::System::Single MoveStepFactor; // 0x20
		::UnityEngine::UI::ScrollRect* ScrollRect; // 0x28
		::RPG::Client::MonoInControlTip* MonoInControlTip; // 0x30
		::System::Single _Threshold; // 0x38
		::Class_0_16E4307DCC419505_711* _ControllerGetter; // 0x40
		::RPG::Client::UIController* OverrideController; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLMOVE__CCTOR_OFFSET))();
		}

		static ::RPG::Client::MonoInControlMove* Get(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::MonoInControlMove*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLMOVE_GET_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLMOVE_AWAKE_OFFSET))(this);
		}

		::System::String* GetActionHintName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLMOVE_GETACTIONHINTNAME_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLMOVE_UPDATE_OFFSET))(this);
		}

		::System::Boolean _CanProcessInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLMOVE__CANPROCESSINPUT_OFFSET))(this);
		}

		::System::Void _ApplyLocalDelta(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLMOVE__APPLYLOCALDELTA_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLMOVE_ONDESTROY_OFFSET))(this);
		}

		::System::Void _Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLMOVE__CLEAR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLMOVE_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLMOVE_DESPAWNED_OFFSET))(this);
		}

		::RPG::Client::UIController* _GetUIController()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLMOVE__GETUICONTROLLER_OFFSET))(this);
		}
	};
}
