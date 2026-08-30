#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class UIMonoJoyStick; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ADDEXTENDNODE_OFFSET UNITYSDK_OFFSET(0x1B1BB220)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ADDJOYSTICKDRAGEVENT_OFFSET UNITYSDK_OFFSET(0x1B1BAFC0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ADDJOYSTICKPOINTDOWNEVENT_OFFSET UNITYSDK_OFFSET(0x1B1BAE60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ADDJOYSTICKPOINTUPEVENT_OFFSET UNITYSDK_OFFSET(0x1B1BAF10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B1BA060)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1B1BB0F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ENABLE_OFFSET UNITYSDK_OFFSET(0x1B1BB160)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_GETNORMALIZEDDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B1BAD30)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_GETUIANGLE_OFFSET UNITYSDK_OFFSET(0x1B1BADF0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1B1BB080)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1BACF0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int UIJoyStickBridge_TypeDefinitionIndex = 76756;

	class UIJoyStickBridge : public ::System::Object
	{
	public:
		::RPG::Client::UIMonoJoyStick* JoyStick; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _ExtendNodeList; // 0x18

		::System::Void _ctor(::RPG::Client::UIMonoJoyStick* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIMonoJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::LittleGame::FiveDim::UIJoyStickBridge* Create(::RPG::Client::UIMonoJoyStick* a1)
		{
			return ((::RPG::Client::LittleGame::FiveDim::UIJoyStickBridge*(*)(::RPG::Client::UIMonoJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_CREATE_OFFSET))(a1);
		}

		::System::Single GetNormalizedDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_GETNORMALIZEDDISTANCE_OFFSET))(this);
		}

		::System::Single GetUIAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_GETUIANGLE_OFFSET))(this);
		}

		::System::Void AddJoyStickPointDownEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ADDJOYSTICKPOINTDOWNEVENT_OFFSET))(this, a1);
		}

		::System::Void AddJoyStickPointUpEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ADDJOYSTICKPOINTUPEVENT_OFFSET))(this, a1);
		}

		::System::Void AddJoyStickDragEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ADDJOYSTICKDRAGEVENT_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_DESPAWNED_OFFSET))(this);
		}

		::System::Void Enable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ENABLE_OFFSET))(this, a1);
		}

		::System::Void AddExtendNode(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_UIJOYSTICKBRIDGE_ADDEXTENDNODE_OFFSET))(this, a1);
		}
	};
}
