#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::LittleGame::FiveDim { class MonoFiveDimFixedJoyStick; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ADDEXTENDNODE_OFFSET UNITYSDK_OFFSET(0x1AC42E00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ADDJOYSTICKDRAGEVENT_OFFSET UNITYSDK_OFFSET(0x1AC42C20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ADDJOYSTICKPOINTDOWNEVENT_OFFSET UNITYSDK_OFFSET(0x1AC42AC0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ADDJOYSTICKPOINTUPEVENT_OFFSET UNITYSDK_OFFSET(0x1AC42B70)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_CREATE_OFFSET UNITYSDK_OFFSET(0x1AC428E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1AC42CD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ENABLE_OFFSET UNITYSDK_OFFSET(0x1AC42D40)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_GETNORMALIZEDDISTANCE_OFFSET UNITYSDK_OFFSET(0x1AC429A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_GETUIANGLE_OFFSET UNITYSDK_OFFSET(0x1AC42A50)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1AC42C80)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC42960)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimFixedJoyStickBridge_TypeDefinitionIndex = 76757;

	class FiveDimFixedJoyStickBridge : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _ExtendNodeList; // 0x10
		::RPG::Client::LittleGame::FiveDim::MonoFiveDimFixedJoyStick* JoyStick; // 0x18

		::System::Void _ctor(::RPG::Client::LittleGame::FiveDim::MonoFiveDimFixedJoyStick* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MonoFiveDimFixedJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::LittleGame::FiveDim::FiveDimFixedJoyStickBridge* Create(::RPG::Client::LittleGame::FiveDim::MonoFiveDimFixedJoyStick* a1)
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimFixedJoyStickBridge*(*)(::RPG::Client::LittleGame::FiveDim::MonoFiveDimFixedJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_CREATE_OFFSET))(a1);
		}

		::System::Single GetNormalizedDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_GETNORMALIZEDDISTANCE_OFFSET))(this);
		}

		::System::Single GetUIAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_GETUIANGLE_OFFSET))(this);
		}

		::System::Void AddJoyStickPointDownEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ADDJOYSTICKPOINTDOWNEVENT_OFFSET))(this, a1);
		}

		::System::Void AddJoyStickPointUpEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ADDJOYSTICKPOINTUPEVENT_OFFSET))(this, a1);
		}

		::System::Void AddJoyStickDragEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ADDJOYSTICKDRAGEVENT_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_DESPAWNED_OFFSET))(this);
		}

		::System::Void Enable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ENABLE_OFFSET))(this, a1);
		}

		::System::Void AddExtendNode(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMFIXEDJOYSTICKBRIDGE_ADDEXTENDNODE_OFFSET))(this, a1);
		}
	};
}
