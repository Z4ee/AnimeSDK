#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_637;
namespace RPG::Client { class UIController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ScrollRect; }

#define RPG_CLIENT_MONOINCONTROLMOVE_AWAKE_OFFSET UNITYSDK_OFFSET(0xC11DF00)
#define RPG_CLIENT_MONOINCONTROLMOVE_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xC11F070)
#define RPG_CLIENT_MONOINCONTROLMOVE_GET_OFFSET UNITYSDK_OFFSET(0xC11DDE0)
#define RPG_CLIENT_MONOINCONTROLMOVE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC11EF40)
#define RPG_CLIENT_MONOINCONTROLMOVE_SPAWNED_OFFSET UNITYSDK_OFFSET(0xC11F000)
#define RPG_CLIENT_MONOINCONTROLMOVE_UPDATE_OFFSET UNITYSDK_OFFSET(0xC11DF70)
#define RPG_CLIENT_MONOINCONTROLMOVE__CCTOR_OFFSET UNITYSDK_OFFSET(0xC11F0F0)
#define RPG_CLIENT_MONOINCONTROLMOVE__CLEAR_OFFSET UNITYSDK_OFFSET(0xC11EFB0)
#define RPG_CLIENT_MONOINCONTROLMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0xC11F0D0)
#define RPG_CLIENT_MONOINCONTROLMOVE__GETUICONTROLLER_OFFSET UNITYSDK_OFFSET(0xC11EE40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoInControlMove_TypeDefinitionIndex = 57347;

	class MonoInControlMove : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Unity::Profiling::ProfilerMarker* StaticGet_InControlMoveUpdateMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(MonoInControlMove_TypeDefinitionIndex)->GetStaticField(0x13840);
		}
		::System::Boolean ActionEnabled; // 0x18
		::System::Boolean IsVertical; // 0x19
		::System::Single MoveStep; // 0x1C
		::System::Single MoveStepFactor; // 0x20
		::UnityEngine::UI::ScrollRect* ScrollRect; // 0x28
		::System::Single _Threshold; // 0x30
		::Class_0_16E4307DCC419505_637* _ControllerGetter; // 0x38
		::RPG::Client::UIController* OverrideController; // 0x40

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

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLMOVE_UPDATE_OFFSET))(this);
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
