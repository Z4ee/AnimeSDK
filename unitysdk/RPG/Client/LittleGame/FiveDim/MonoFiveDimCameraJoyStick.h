#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK_AWAKE_OFFSET UNITYSDK_OFFSET(0x9A19EC0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK_GET__CENTERPOS_OFFSET UNITYSDK_OFFSET(0x9A1AA90)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK_GET__MAXRADIUS_OFFSET UNITYSDK_OFFSET(0x9A1AB90)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9A19FD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9A19F70)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK_ONDRAG_OFFSET UNITYSDK_OFFSET(0x9A19E30)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x9A19CE0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x9A19D60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9A19E80)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK__CTOR_OFFSET UNITYSDK_OFFSET(0x9A1AD60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK__ENDJOYCAMERAOBSERVE_OFFSET UNITYSDK_OFFSET(0x9A19DB0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK__GETMOVEDIR_OFFSET UNITYSDK_OFFSET(0x9A1A4B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK__INITVIEW_OFFSET UNITYSDK_OFFSET(0x9A1A5B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK__INIT_OFFSET UNITYSDK_OFFSET(0x9A19F20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK__SETNODEPOSBYSCREENPOS_OFFSET UNITYSDK_OFFSET(0x9A1A060)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int MonoFiveDimCameraJoyStick_TypeDefinitionIndex = 62896;

	class MonoFiveDimCameraJoyStick : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::EventSystems::PointerEventData* _LastEventData; // 0x18
		::UnityEngine::RectTransform* _Node; // 0x20
		::UnityEngine::RectTransform* _Frame; // 0x28
		::UnityEngine::RectTransform* _PointCenter; // 0x30
		::UnityEngine::RectTransform* _PointLeft; // 0x38
		::UnityEngine::RectTransform* _PointRight; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK_SPAWNED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK_AWAKE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK_LATEUPDATE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK__INIT_OFFSET))(this);
		}

		::System::Void _EndJoyCameraObserve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK__ENDJOYCAMERAOBSERVE_OFFSET))(this);
		}

		::System::Void _InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK__INITVIEW_OFFSET))(this);
		}

		::System::Void _SetNodePosByScreenPos(::UnityEngine::Vector2 inputPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK__SETNODEPOSBYSCREENPOS_OFFSET))(this, inputPos);
		}

		::UnityEngine::Vector2 _GetMoveDir()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK__GETMOVEDIR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get__CenterPos()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK_GET__CENTERPOS_OFFSET))(this);
		}

		::System::Single get__MaxRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_MONOFIVEDIMCAMERAJOYSTICK_GET__MAXRADIUS_OFFSET))(this);
		}
	};
}
