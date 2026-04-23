#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::LittleGame::FiveDim { class MonoFiveDimFixedJoyStick; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ADDEXTENDNODE_OFFSET UNITYSDK_OFFSET(0xA6A5340)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ADDJOYSTICKDRAGEVENT_OFFSET UNITYSDK_OFFSET(0xA6A50E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ADDJOYSTICKPOINTDOWNEVENT_OFFSET UNITYSDK_OFFSET(0xA6A4E80)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ADDJOYSTICKPOINTUPEVENT_OFFSET UNITYSDK_OFFSET(0xA6A4FB0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_CREATE_OFFSET UNITYSDK_OFFSET(0xA6A4BD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ENABLE_OFFSET UNITYSDK_OFFSET(0xA6A52A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_GETNORMALIZEDDISTANCE_OFFSET UNITYSDK_OFFSET(0xA6A4C90)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_GETUIANGLE_OFFSET UNITYSDK_OFFSET(0xA6A4DC0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_SPAWNED_OFFSET UNITYSDK_OFFSET(0xA6A51F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA6A4C50)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFixedJoyStickBridge_TypeDefinitionIndex = 70932;

	class FiveDimFixedJoyStickBridge : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::FiveDim::MonoFiveDimFixedJoyStick* JoyStick; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _ExtendNodeList; // 0x18

		::System::Void _ctor(::RPG::Client::LittleGame::FiveDim::MonoFiveDimFixedJoyStick* joyStick)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MonoFiveDimFixedJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE__CTOR_OFFSET))(this, joyStick);
		}

		static ::RPG::Client::LittleGame::FiveDim::FiveDimFixedJoyStickBridge* Create(::RPG::Client::LittleGame::FiveDim::MonoFiveDimFixedJoyStick* joyStick)
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimFixedJoyStickBridge*(*)(::RPG::Client::LittleGame::FiveDim::MonoFiveDimFixedJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_CREATE_OFFSET))(joyStick);
		}

		::System::Single GetNormalizedDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_GETNORMALIZEDDISTANCE_OFFSET))(this);
		}

		::System::Single GetUIAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_GETUIANGLE_OFFSET))(this);
		}

		::System::Void AddJoyStickPointDownEvent(::UnityEngine::Events::UnityAction* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ADDJOYSTICKPOINTDOWNEVENT_OFFSET))(this, call);
		}

		::System::Void AddJoyStickPointUpEvent(::UnityEngine::Events::UnityAction* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ADDJOYSTICKPOINTUPEVENT_OFFSET))(this, call);
		}

		::System::Void AddJoyStickDragEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ADDJOYSTICKDRAGEVENT_OFFSET))(this, call);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_SPAWNED_OFFSET))(this);
		}

		::System::Void Enable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ENABLE_OFFSET))(this, enable);
		}

		::System::Void AddExtendNode(::UnityEngine::Transform* extendNode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ADDEXTENDNODE_OFFSET))(this, extendNode);
		}
	};
}
