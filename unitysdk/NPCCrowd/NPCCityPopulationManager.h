#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/FNodeRuntime.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"

namespace NPCCrowd { class NPCCityPopulationManager_PopulationNodeRuntime; }
namespace NPCCrowd { class NPCIDGeneratorInt; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCCITYPOPULATIONMANAGER_FINDNODECOMPARE_OFFSET UNITYSDK_OFFSET(0x10D93240)
#define NPCCROWD_NPCCITYPOPULATIONMANAGER_GETPOPULATIONNODERUNTIME_OFFSET UNITYSDK_OFFSET(0x10D93180)
#define NPCCROWD_NPCCITYPOPULATIONMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x10D92DF0)
#define NPCCROWD_NPCCITYPOPULATIONMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x10D92F70)
#define NPCCROWD_NPCCITYPOPULATIONMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10D94EC0)
#define NPCCROWD_NPCCITYPOPULATIONMANAGER_SETWPGRAPHSTATE_OFFSET UNITYSDK_OFFSET(0x10D932B0)
#define NPCCROWD_NPCCITYPOPULATIONMANAGER_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x10D93090)
#define NPCCROWD_NPCCITYPOPULATIONMANAGER_SPAWNNPCFORNODE_OFFSET UNITYSDK_OFFSET(0x10D93CA0)
#define NPCCROWD_NPCCITYPOPULATIONMANAGER_UPDATESPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x10D948B0)
#define NPCCROWD_NPCCITYPOPULATIONMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x10D94850)
#define NPCCROWD_NPCCITYPOPULATIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D94F30)
#define NPCCROWD_NPCCITYPOPULATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D94F20)
#define NPCCROWD_NPCCITYPOPULATIONMANAGER__SETWPGRAPHSTATE_G__CLEARPOPULATION_11_0_OFFSET UNITYSDK_OFFSET(0x10D938A0)
#define NPCCROWD_NPCCITYPOPULATIONMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x10D94F40)
#define NPCCROWD_NPCCITYPOPULATIONMANAGER___BASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10D94FD0)
#define NPCCROWD_NPCCITYPOPULATIONMANAGER___BASE_SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x10D95070)
#define NPCCROWD_NPCCITYPOPULATIONMANAGER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x10D95100)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCityPopulationManager_TypeDefinitionIndex = 73592;

	class NPCCityPopulationManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::Int32* StaticGet_FindNodeCompare_Param_NodeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCCityPopulationManager_TypeDefinitionIndex)->GetStaticField(0xBDA0);
		}
		::NPCCrowd::NPCIDGeneratorInt* IDGen; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::AI::FNodeRuntime>* nodeTemp; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::NPCCityPopulationManager_PopulationNodeRuntime*>* allPopulationNode; // 0x28
		::System::Boolean startUpdateNodePopulation; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER__CCTOR_OFFSET))();
		}

		static ::NPCCrowd::NPCCityPopulationManager* Get()
		{
			return ((::NPCCrowd::NPCCityPopulationManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER_INIT_OFFSET))(this);
		}

		::System::Boolean ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER_SHOULDTICK_OFFSET))(this);
		}

		::NPCCrowd::NPCCityPopulationManager_PopulationNodeRuntime* GetPopulationNodeRuntime(::System::Int32 nodeID)
		{
			return ((::NPCCrowd::NPCCityPopulationManager_PopulationNodeRuntime*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER_GETPOPULATIONNODERUNTIME_OFFSET))(this, nodeID);
		}

		static ::System::Boolean FindNodeCompare(::NPCCrowd::NPCCityPopulationManager_PopulationNodeRuntime* t)
		{
			return ((::System::Boolean(*)(::NPCCrowd::NPCCityPopulationManager_PopulationNodeRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER_FINDNODECOMPARE_OFFSET))(t);
		}

		::System::Void SetWPGraphState(::System::Int32 stateID, ::System::Boolean bIsCreateDefaultPed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER_SETWPGRAPHSTATE_OFFSET))(this, stateID, bIsCreateDefaultPed);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateSpawnPoint(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER_UPDATESPAWNPOINT_OFFSET))(this, deltaTime);
		}

		static ::System::Void SpawnNpcForNode(::NPCCrowd::NPCCityPopulationManager_PopulationNodeRuntime* popNode, ::System::UInt16 startNodeID, ::System::Boolean checkSpawnTime, ::NPCCrowd::NPCIDGeneratorInt* IDGen, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::NPCCrowd::NPCCityPopulationManager_PopulationNodeRuntime*, ::System::UInt16, ::System::Boolean, ::NPCCrowd::NPCIDGeneratorInt*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER_SPAWNNPCFORNODE_OFFSET))(popNode, startNodeID, checkSpawnTime, IDGen, deltaTime);
		}

		::System::Void LateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER_LATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void _SetWPGraphState_g__ClearPopulation_11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER__SETWPGRAPHSTATE_G__CLEARPOPULATION_11_0_OFFSET))(this);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER___BASE_LATEUPDATE_OFFSET))(this, P0);
		}

		::System::Boolean __base_ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER___BASE_SHOULDTICK_OFFSET))(this);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCITYPOPULATIONMANAGER___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
