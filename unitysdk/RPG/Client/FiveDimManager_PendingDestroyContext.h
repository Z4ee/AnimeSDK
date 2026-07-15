#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x18423F50)
#define RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0x1841CE90)
#define RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18423FC0)
#define RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18424020)
#define RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT__BUILDDESTROYLISTANDHIDECOLLIDER_OFFSET UNITYSDK_OFFSET(0x18423BC0)
#define RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18424060)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimManager_PendingDestroyContext_TypeDefinitionIndex = 57819;

	class FiveDimManager_PendingDestroyContext : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* InstanceEntity; // 0x10
		::Class_3_1E4F9B0ED3BF21DE* Services; // 0x18
		::Class_1_B4357A1C72BABC6B* Context; // 0x20
		::RPG::PoolList_1<::Class_2_B9E8C2EEAA5C96EC*>* Entities; // 0x28
		::System::Int32 CurrentDestroyIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Init(::Class_3_1E4F9B0ED3BF21DE* a1, ::Class_1_B4357A1C72BABC6B* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_1E4F9B0ED3BF21DE*, ::Class_1_B4357A1C72BABC6B*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _BuildDestroyListAndHideCollider(::Class_2_B9E8C2EEAA5C96EC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMANAGER_PENDINGDESTROYCONTEXT__BUILDDESTROYLISTANDHIDECOLLIDER_OFFSET))(this, a1);
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
