#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/NPCSpawnPointRuntime.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd::AI { class AttractorRuntime; }
namespace NPCCrowd::AI { class SpawnConfigForAttractor; }
namespace NPCCrowd::AI { class SpawnPointGroup; }

#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_PATHCOUNTVALID_OFFSET UNITYSDK_OFFSET(0x17FB6F00)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SETATTRACTORENABLE_OFFSET UNITYSDK_OFFSET(0x17FB6F90)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SETATTRACTORVALID_OFFSET UNITYSDK_OFFSET(0x17FB6F40)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SPAWNINFOVALID_OFFSET UNITYSDK_OFFSET(0x17FB6E20)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SPAWNNPC_OFFSET UNITYSDK_OFFSET(0x17FB6FE0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB6BB0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR___BASE_PATHCOUNTVALID_OFFSET UNITYSDK_OFFSET(0x17FB71D0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR___BASE_SPAWNINFOVALID_OFFSET UNITYSDK_OFFSET(0x17FB71E0)
#define NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR___BASE_SPAWNNPC_OFFSET UNITYSDK_OFFSET(0x17FB71F0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSpawnPointRuntimeForAttractor_TypeDefinitionIndex = 52341;

	class NPCSpawnPointRuntimeForAttractor : public ::NPCCrowd::NPCSpawnPointRuntime
	{
	public:
		::NPCCrowd::AI::AttractorRuntime* attractorRuntime; // 0xA0
		::System::Int32 attractorHandler; // 0xA8
		::System::Boolean attractorValid; // 0xAC
		::System::Boolean infoValid; // 0xAD
		::System::Boolean attractorEnable; // 0xAE

		::System::Void _ctor(::NPCCrowd::AI::SpawnConfigForAttractor* config, ::NPCCrowd::AI::SpawnPointGroup* groupConfig)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::SpawnConfigForAttractor*, ::NPCCrowd::AI::SpawnPointGroup*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR__CTOR_OFFSET))(this, config, groupConfig);
		}

		::System::Boolean SpawnInfoValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SPAWNINFOVALID_OFFSET))(this);
		}

		::System::Boolean PathCountValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_PATHCOUNTVALID_OFFSET))(this);
		}

		::System::Void SetAttractorValid(::System::Boolean valid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SETATTRACTORVALID_OFFSET))(this, valid);
		}

		::System::Void SetAttractorEnable(::System::Boolean valid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SETATTRACTORENABLE_OFFSET))(this, valid);
		}

		::System::Boolean SpawnNPC(::Class_3_F2DAD7F45F518868*& npcComp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR_SPAWNNPC_OFFSET))(this, npcComp);
		}

		::System::Boolean __base_PathCountValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR___BASE_PATHCOUNTVALID_OFFSET))(this);
		}

		::System::Boolean __base_SpawnInfoValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR___BASE_SPAWNINFOVALID_OFFSET))(this);
		}

		::System::Boolean __base_SpawnNPC(::Class_3_F2DAD7F45F518868*& P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*&))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNPOINTRUNTIMEFORATTRACTOR___BASE_SPAWNNPC_OFFSET))(this, P0);
		}
	};
}
