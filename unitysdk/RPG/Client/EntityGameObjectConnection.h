#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoLifeCircleEvent.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ADDLIFECIRCLECALLBACK_OFFSET UNITYSDK_OFFSET(0xB911660)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_GETOWNERENTITY_OFFSET UNITYSDK_OFFSET(0xB90FB60)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB911890)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB911830)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB9117D0)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_REMOVELIFECIRCLECALLBACK_OFFSET UNITYSDK_OFFSET(0xB911720)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_SETOWNERENTITY_OFFSET UNITYSDK_OFFSET(0xB911610)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB9118E0)

namespace RPG::Client
{
	inline static constexpr unsigned int EntityGameObjectConnection_TypeDefinitionIndex = 64001;

	class EntityGameObjectConnection : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::GameEntity* Field_5_0; // 0x18
		::System::Action_1<::RPG::Client::EntityGameObjectConnection*>* Field_5_1; // 0x20
		::System::Action_1<::RPG::Client::EntityGameObjectConnection*>* Field_5_2; // 0x28

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
