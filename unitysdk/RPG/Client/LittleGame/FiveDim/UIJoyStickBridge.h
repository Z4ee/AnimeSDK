#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class UIMonoJoyStick; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ADDEXTENDNODE_OFFSET UNITYSDK_OFFSET(0x9A1ECA0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ADDJOYSTICKDRAGEVENT_OFFSET UNITYSDK_OFFSET(0x9A1EB30)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ADDJOYSTICKPOINTDOWNEVENT_OFFSET UNITYSDK_OFFSET(0x9A1E9D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ADDJOYSTICKPOINTUPEVENT_OFFSET UNITYSDK_OFFSET(0x9A1EA80)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_CREATE_OFFSET UNITYSDK_OFFSET(0x9A1DE70)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ENABLE_OFFSET UNITYSDK_OFFSET(0x9A1EC00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_GETNORMALIZEDDISTANCE_OFFSET UNITYSDK_OFFSET(0x9A1E8A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_GETUIANGLE_OFFSET UNITYSDK_OFFSET(0x9A1E960)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9A1EB90)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A1E860)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int UIJoyStickBridge_TypeDefinitionIndex = 62891;

	class UIJoyStickBridge : public ::System::Object
	{
	public:
		::RPG::Client::UIMonoJoyStick* JoyStick; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _ExtendNodeList; // 0x18

		::System::Void _ctor(::RPG::Client::UIMonoJoyStick* joyStick)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIMonoJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE__CTOR_OFFSET))(this, joyStick);
		}

		static ::RPG::Client::LittleGame::FiveDim::UIJoyStickBridge* Create(::RPG::Client::UIMonoJoyStick* joyStick)
		{
			return ((::RPG::Client::LittleGame::FiveDim::UIJoyStickBridge*(*)(::RPG::Client::UIMonoJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_CREATE_OFFSET))(joyStick);
		}

		::System::Single GetNormalizedDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_GETNORMALIZEDDISTANCE_OFFSET))(this);
		}

		::System::Single GetUIAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_GETUIANGLE_OFFSET))(this);
		}

		::System::Void AddJoyStickPointDownEvent(::UnityEngine::Events::UnityAction* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ADDJOYSTICKPOINTDOWNEVENT_OFFSET))(this, call);
		}

		::System::Void AddJoyStickPointUpEvent(::UnityEngine::Events::UnityAction* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ADDJOYSTICKPOINTUPEVENT_OFFSET))(this, call);
		}

		::System::Void AddJoyStickDragEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ADDJOYSTICKDRAGEVENT_OFFSET))(this, call);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_SPAWNED_OFFSET))(this);
		}

		::System::Void Enable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ENABLE_OFFSET))(this, enable);
		}

		::System::Void AddExtendNode(::UnityEngine::Transform* extendNode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ADDEXTENDNODE_OFFSET))(this, extendNode);
		}
	};
}
