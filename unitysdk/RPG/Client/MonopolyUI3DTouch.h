#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class MonopolyDragMapCmpt; }
namespace RPG::Client { class MonopolyUI3DTouch_FingerUtil; }

#define RPG_CLIENT_MONOPOLYUI3DTOUCH_ISPAGENOTFOCUSED_OFFSET UNITYSDK_OFFSET(0xAABEC30)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0xAABEE30)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAABEE70)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_ONSWIPEEND_OFFSET UNITYSDK_OFFSET(0xAABF6A0)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_ONSWIPESTART_OFFSET UNITYSDK_OFFSET(0xAABF140)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_ONSWIPE_OFFSET UNITYSDK_OFFSET(0xAABF490)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_ONTOUCHSTART_OFFSET UNITYSDK_OFFSET(0xAABEEC0)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_ONTOUCHUP_OFFSET UNITYSDK_OFFSET(0xAABF000)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_RESETTOUCH_OFFSET UNITYSDK_OFFSET(0xAABEB10)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_SIMULATETOUCH_OFFSET UNITYSDK_OFFSET(0xAABF3B0)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_START_OFFSET UNITYSDK_OFFSET(0xAABED60)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_SUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xAABE330)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0xAABE720)
#define RPG_CLIENT_MONOPOLYUI3DTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0xAABF7B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyUI3DTouch_TypeDefinitionIndex = 67107;

	class MonopolyUI3DTouch : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonopolyUI3DTouch_FingerUtil* _fingerUtil; // 0x18
		::RPG::Client::MonopolyDragMapCmpt* _DragCmpt; // 0x20
		::System::Boolean _IsApplicationQuiting; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH__CTOR_OFFSET))(this);
		}

		::System::Void SubscribeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_SUBSCRIBEEVENT_OFFSET))(this);
		}

		::System::Void UnsubscribeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_UNSUBSCRIBEEVENT_OFFSET))(this);
		}

		::System::Void ResetTouch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_RESETTOUCH_OFFSET))(this);
		}

		::System::Boolean IsPageNotFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_ISPAGENOTFOCUSED_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_START_OFFSET))(this);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnTouchStart(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_ONTOUCHSTART_OFFSET))(this, gesture);
		}

		::System::Void OnTouchUp(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_ONTOUCHUP_OFFSET))(this, gesture);
		}

		::System::Void OnSwipeStart(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_ONSWIPESTART_OFFSET))(this, gesture);
		}

		::System::Void SimulateTouch(::UnityEngine::Vector2 moveVector)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_SIMULATETOUCH_OFFSET))(this, moveVector);
		}

		::System::Void OnSwipe(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_ONSWIPE_OFFSET))(this, gesture);
		}

		::System::Void OnSwipeEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUI3DTOUCH_ONSWIPEEND_OFFSET))(this, gesture);
		}
	};
}
