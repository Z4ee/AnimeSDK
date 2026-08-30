#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoLifeCircleEvent.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ADDLIFECIRCLECALLBACK_OFFSET UNITYSDK_OFFSET(0xCEA32B0)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_GETOWNERENTITY_OFFSET UNITYSDK_OFFSET(0xCEA17B0)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCEA34E0)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCEA3480)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCEA3420)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_REMOVELIFECIRCLECALLBACK_OFFSET UNITYSDK_OFFSET(0xCEA3370)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_SETOWNERENTITY_OFFSET UNITYSDK_OFFSET(0xCEA3260)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xCEA3530)

namespace RPG::Client
{
	inline static constexpr unsigned int EntityGameObjectConnection_TypeDefinitionIndex = 68384;

	class EntityGameObjectConnection : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::GameEntity* HOEGAPJBABG; // 0x18
		::System::Action_1<::RPG::Client::EntityGameObjectConnection*>* NCJCIIPKPON; // 0x20
		::System::Action_1<::RPG::Client::EntityGameObjectConnection*>* AENKDHDOBAK; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION__CTOR_OFFSET))(this);
		}

		::System::Void SetOwnerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_SETOWNERENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetOwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_GETOWNERENTITY_OFFSET))(this);
		}

		::System::Void AddLifeCircleCallback(::RPG::Client::MonoLifeCircleEvent a1, ::System::Action_1<::RPG::Client::EntityGameObjectConnection*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoLifeCircleEvent, ::System::Action_1<::RPG::Client::EntityGameObjectConnection*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ADDLIFECIRCLECALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveLifeCircleCallback(::RPG::Client::MonoLifeCircleEvent a1, ::System::Action_1<::RPG::Client::EntityGameObjectConnection*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoLifeCircleEvent, ::System::Action_1<::RPG::Client::EntityGameObjectConnection*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_REMOVELIFECIRCLECALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ONDESTROY_OFFSET))(this);
		}
	};
}
