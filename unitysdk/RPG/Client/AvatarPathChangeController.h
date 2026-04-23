#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AvatarPathChangeCameraController; }
namespace RPG::GameCore { class AvatarPathChangeConfig; }
namespace RPG::GameCore { class AvatarPathChangeToTargetConfig; }
namespace RPG::GameCore { class FreeStyleComponent; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_AVATARPATHCHANGECONTROLLER_ADDTICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9DB3A40)
#define RPG_CLIENT_AVATARPATHCHANGECONTROLLER_CHECKFREESTYLEANIMFINISH_OFFSET UNITYSDK_OFFSET(0x9DB3AA0)
#define RPG_CLIENT_AVATARPATHCHANGECONTROLLER_CLEARTICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x9DB3B20)
#define RPG_CLIENT_AVATARPATHCHANGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9DB3B70)
#define RPG_CLIENT_AVATARPATHCHANGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9DB3BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPathChangeController_TypeDefinitionIndex = 65752;

	class AvatarPathChangeController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::AvatarPathChangeCameraController* CameraController; // 0x18
		::System::Single FinishSnapTime; // 0x20
		::System::Single StartAnimTime; // 0x24
		::RPG::GameCore::AvatarPathChangeConfig* _AvatarPathChangeConfig; // 0x28
		::RPG::GameCore::AvatarPathChangeToTargetConfig* _SwitchConfig; // 0x30
		::System::Action_2<::XLua::LuaTable*, ::System::Single>* _TickCallback; // 0x38
		::XLua::LuaTable* _LuaSelf; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void AddTickCallback(::System::Action_2<::XLua::LuaTable*, ::System::Single>* tickCallback, ::XLua::LuaTable* luaSelf)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::XLua::LuaTable*, ::System::Single>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGECONTROLLER_ADDTICKCALLBACK_OFFSET))(this, tickCallback, luaSelf);
		}

		::System::Boolean CheckFreeStyleAnimFinish(::RPG::GameCore::FreeStyleComponent* freeStyleComponent)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGECONTROLLER_CHECKFREESTYLEANIMFINISH_OFFSET))(this, freeStyleComponent);
		}

		::System::Void ClearTickCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGECONTROLLER_CLEARTICKCALLBACK_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGECONTROLLER_UPDATE_OFFSET))(this);
		}
	};
}
