#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdLodManager_LODRenderMode.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_LOD_NPCCROWDLODMANAGER_LODRENDERRULECONFIG_GETRENDERMODE_OFFSET UNITYSDK_OFFSET(0x7E47A0)
#define NPCCROWD_LOD_NPCCROWDLODMANAGER_LODRENDERRULECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x756760)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodManager_LODRenderRuleConfig_TypeDefinitionIndex = 57936;

	struct alignas(1) NPCCrowdLodManager_LODRenderRuleConfig
	{
		::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode LOD0; // 0x10
		::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode LOD1; // 0x11
		::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode LOD2; // 0x12
		::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode LOD3; // 0x13
		::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode LOD4; // 0x14

		::System::Void _ctor(::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode lod0, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode lod1, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode lod2, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode lod3, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode lod4)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode, ::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_LODRENDERRULECONFIG__CTOR_OFFSET))(this, lod0, lod1, lod2, lod3, lod4);
		}

		::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode GetRenderMode(::NPCCrowd::Lod::ELODLevel lodLevel)
		{
			return ((::NPCCrowd::Lod::NPCCrowdLodManager_LODRenderMode(*)(::PVOID, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODMANAGER_LODRENDERRULECONFIG_GETRENDERMODE_OFFSET))(this, lodLevel);
		}
	};
}
