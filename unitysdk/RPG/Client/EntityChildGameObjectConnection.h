#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class EntityGameObjectConnection; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION_CLEARCONNECTION_OFFSET UNITYSDK_OFFSET(0x1A17F5E0)
#define RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION_GETOWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1A17F630)
#define RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION_INITOWNERGOCONNECTION_OFFSET UNITYSDK_OFFSET(0x1A17F590)
#define RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A17F6F0)
#define RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A17F740)

namespace RPG::Client
{
	inline static constexpr unsigned int EntityChildGameObjectConnection_TypeDefinitionIndex = 68380;

	class EntityChildGameObjectConnection : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::EntityGameObjectConnection* CEMHGCDIIEG; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION__CTOR_OFFSET))(this);
		}

		::System::Void InitOwnerGoConnection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION_INITOWNERGOCONNECTION_OFFSET))(this);
		}

		::System::Void ClearConnection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION_CLEARCONNECTION_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetOwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION_GETOWNERENTITY_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION_ONDESTROY_OFFSET))(this);
		}
	};
}
