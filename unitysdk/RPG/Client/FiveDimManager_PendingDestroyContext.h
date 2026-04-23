#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0xA3AC370)
#define RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0xA3A5800)
#define RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_ONALLOC_OFFSET UNITYSDK_OFFSET(0xA3AC3E0)
#define RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xA3AC440)
#define RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT__BUILDDESTROYLISTANDHIDECOLLIDER_OFFSET UNITYSDK_OFFSET(0xA3AC050)
#define RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA3AC480)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimManager_PendingDestroyContext_TypeDefinitionIndex = 55824;

	class FiveDimManager_PendingDestroyContext : public ::System::Object
	{
	public:
		::Class_1_24C2E7EF22229C6A* Context; // 0x10
		::RPG::PoolList_1<::Class_2_9DD8A46984F1AFFD*>* Entities; // 0x18
		::RPG::GameCore::GameEntity* InstanceEntity; // 0x20
		::Class_3_1A92845FAFA5EC77* Services; // 0x28
		::System::Int32 CurrentDestroyIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_3_1A92845FAFA5EC77* services, ::Class_1_24C2E7EF22229C6A* context, ::RPG::GameCore::GameEntity* instanceEntity)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_1A92845FAFA5EC77*, ::Class_1_24C2E7EF22229C6A*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_INIT_OFFSET))(this, services, context, instanceEntity);
		}

		::System::Void _BuildDestroyListAndHideCollider(::Class_2_9DD8A46984F1AFFD* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT__BUILDDESTROYLISTANDHIDECOLLIDER_OFFSET))(this, entity);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_ONRECYCLE_OFFSET))(this);
		}
	};
}
