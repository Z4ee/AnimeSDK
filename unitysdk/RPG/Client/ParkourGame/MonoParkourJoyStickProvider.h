#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::ParkourGame { class MonoParkourJoyStickProvider_IgnorePressState; }
namespace RPG::Client::ParkourGame { class MonoParkourJoyStickProvider_LeftPressState; }
namespace RPG::Client::ParkourGame { class MonoParkourJoyStickProvider_RightPressState; }
namespace RPG::Client::ParkourGame { class MonoParkourJoyStickProvider_UnpressState; }
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC335530)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xC335A80)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC3359E0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xC335DA0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xC335BE0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xC335D50)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_REGISTEREVENTS_OFFSET UNITYSDK_OFFSET(0xC3354B0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_SPAWNED_OFFSET UNITYSDK_OFFSET(0xC335A30)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC335B60)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC335FE0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xC335F20)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER__ENABLEDRAGHINT_OFFSET UNITYSDK_OFFSET(0xC335E10)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER__INIT_OFFSET UNITYSDK_OFFSET(0xC335580)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER__ONPOINTERUPCALLBACK_OFFSET UNITYSDK_OFFSET(0xC335AE0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER__SETUPSTATE_OFFSET UNITYSDK_OFFSET(0xC335C50)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER__UPDATEPRESSDRAGHINTVIEW_OFFSET UNITYSDK_OFFSET(0xC335E70)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourJoyStickProvider_TypeDefinitionIndex = 69227;

	class MonoParkourJoyStickProvider : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Single* StaticGet_GMIgnorePressDistance()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MonoParkourJoyStickProvider_TypeDefinitionIndex)->GetStaticField(0xB10);
		}
		::System::Single IgnorePressDistance; // 0x18
		::System::Single MaxPressDistance; // 0x1C
		::UnityEngine::Vector3 _CenterPos; // 0x20
		::RPG::Client::ParkourGame::MonoParkourJoyStickProvider_IgnorePressState* _IgnorePressState; // 0x30
		::RPG::Client::ParkourGame::MonoParkourJoyStickProvider_RightPressState* _RightPressState; // 0x38
		::RPG::Client::ParkourGame::MonoParkourJoyStickProvider_LeftPressState* _LeftPressState; // 0x40
		::RPG::Client::ParkourGame::MonoParkourJoyStickProvider_UnpressState* _UnpressState; // 0x48
		::RPG::Common::StateMachine_1<::RPG::Client::ParkourGame::MonoParkourJoyStickProvider*>* _StateMachine; // 0x50
		::UnityEngine::RectTransform* _PointTransform; // 0x58
		::UnityEngine::EventSystems::PointerEventData* _LastDragEventData; // 0x60
		::UnityEngine::RectTransform* _PressHintTransform; // 0x68
		::UnityEngine::UI::Image* _PressHintImage; // 0x70
		::UnityEngine::Events::UnityAction* _LeftTriggerAction; // 0x78
		::UnityEngine::Events::UnityAction* _RightTriggerAction; // 0x80
		::UnityEngine::Events::UnityAction* _LeftReleaseAction; // 0x88
		::UnityEngine::Events::UnityAction* _RightReleaseAction; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER__CCTOR_OFFSET))();
		}

		::System::Void RegisterEvents(::UnityEngine::Events::UnityAction* a1, ::UnityEngine::Events::UnityAction* a2, ::UnityEngine::Events::UnityAction* a3, ::UnityEngine::Events::UnityAction* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::UnityEngine::Events::UnityAction*, ::UnityEngine::Events::UnityAction*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_REGISTEREVENTS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_SPAWNED_OFFSET))(this);
		}

		::System::Void OnApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_ONAPPLICATIONPAUSE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_UPDATE_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void _SetupState(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER__SETUPSTATE_OFFSET))(this, a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER__INIT_OFFSET))(this);
		}

		::System::Void _OnPointerUpCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER__ONPOINTERUPCALLBACK_OFFSET))(this);
		}

		::System::Void _UpdatePressDragHintView(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER__UPDATEPRESSDRAGHINTVIEW_OFFSET))(this, a1);
		}

		::System::Void _EnableDragHint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURJOYSTICKPROVIDER__ENABLEDRAGHINT_OFFSET))(this, a1);
		}
	};
}
