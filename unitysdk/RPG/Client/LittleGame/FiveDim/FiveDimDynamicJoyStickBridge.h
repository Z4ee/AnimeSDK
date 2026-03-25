#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimDynamicJoyStick; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICKBRIDGE_ADDJOYSTICKDRAGEVENT_OFFSET UNITYSDK_OFFSET(0x99AF950)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICKBRIDGE_ADDJOYSTICKPOINTDOWNEVENT_OFFSET UNITYSDK_OFFSET(0x99AF7F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICKBRIDGE_ADDJOYSTICKPOINTUPEVENT_OFFSET UNITYSDK_OFFSET(0x99AF8A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICKBRIDGE_CREATE_OFFSET UNITYSDK_OFFSET(0x99AF690)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICKBRIDGE_ENABLE_OFFSET UNITYSDK_OFFSET(0x99AFA40)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICKBRIDGE_GETNORMALIZEDDISTANCE_OFFSET UNITYSDK_OFFSET(0x99AF6F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICKBRIDGE_GETUIANGLE_OFFSET UNITYSDK_OFFSET(0x99AF780)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICKBRIDGE_SPAWNED_OFFSET UNITYSDK_OFFSET(0x99AFA00)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICKBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x99AF6E0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimDynamicJoyStickBridge_TypeDefinitionIndex = 62890;

	class FiveDimDynamicJoyStickBridge : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::FiveDim::FiveDimDynamicJoyStick* JoyStick; // 0x10

		::System::Void _ctor(::RPG::Client::LittleGame::FiveDim::FiveDimDynamicJoyStick* joyStick)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimDynamicJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICKBRIDGE__CTOR_OFFSET))(this, joyStick);
		}

		static ::RPG::Client::LittleGame::FiveDim::FiveDimDynamicJoyStickBridge* Create(::RPG::Client::LittleGame::FiveDim::FiveDimDynamicJoyStick* joyStick)
		{
			return ((::RPG::Client::LittleGame::FiveDim::FiveDimDynamicJoyStickBridge*(*)(::RPG::Client::LittleGame::FiveDim::FiveDimDynamicJoyStick*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICKBRIDGE_CREATE_OFFSET))(joyStick);
		}

		::System::Single GetNormalizedDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICKBRIDGE_GETNORMALIZEDDISTANCE_OFFSET))(this);
		}

		::System::Single GetUIAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICKBRIDGE_GETUIANGLE_OFFSET))(this);
		}

		::System::Void AddJoyStickPointDownEvent(::UnityEngine::Events::UnityAction* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICKBRIDGE_ADDJOYSTICKPOINTDOWNEVENT_OFFSET))(this, call);
		}

		::System::Void AddJoyStickPointUpEvent(::UnityEngine::Events::UnityAction* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICKBRIDGE_ADDJOYSTICKPOINTUPEVENT_OFFSET))(this, call);
		}

		::System::Void AddJoyStickDragEvent(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICKBRIDGE_ADDJOYSTICKDRAGEVENT_OFFSET))(this, call);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICKBRIDGE_SPAWNED_OFFSET))(this);
		}

		::System::Void Enable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMDYNAMICJOYSTICKBRIDGE_ENABLE_OFFSET))(this, enable);
		}
	};
}
