#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONOBJECT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA149ED0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONOBJECT_INITOBJECT_OFFSET UNITYSDK_OFFSET(0xA148BA0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONOBJECT_REFRESHSTATUS_OFFSET UNITYSDK_OFFSET(0xA148BF0)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONOBJECT_SETFINISH_OFFSET UNITYSDK_OFFSET(0xA149490)
#define RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA149F10)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleConditionObject_TypeDefinitionIndex = 64271;

	class RubikCubePuzzleConditionObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* EmptyObj; // 0x18
		::UnityEngine::GameObject* NormalObj; // 0x20
		::UnityEngine::GameObject* TatumObj; // 0x28
		::System::Int32 Status; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONOBJECT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitObject(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONOBJECT_INITOBJECT_OFFSET))(this, a1);
		}

		::System::Void RefreshStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONOBJECT_REFRESHSTATUS_OFFSET))(this);
		}

		::System::Void SetFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_RUBIKCUBEPUZZLECONDITIONOBJECT_SETFINISH_OFFSET))(this, a1);
		}
	};
}
