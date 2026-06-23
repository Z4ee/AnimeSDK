#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_LOD_CROWDLODDISTANCESETTING_GETLODLEVEL_OFFSET UNITYSDK_OFFSET(0x5EF570)
#define NPCCROWD_LOD_CROWDLODDISTANCESETTING_INITLODDEFAULTSETTING_OFFSET UNITYSDK_OFFSET(0xE02DF40)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int CrowdLODDistanceSetting_TypeDefinitionIndex = 46338;

	struct alignas(8) CrowdLODDistanceSetting
	{
		::Il2CppArray<::System::Single>* startLODDistanceCM; // 0x10
		::Il2CppArray<::System::Single>* startLODDistance; // 0x18
		::System::Single lodBias; // 0x20

		static ::NPCCrowd::Lod::CrowdLODDistanceSetting InitLODDefaultSetting(::Il2CppArray<::System::Single>* lodDis, ::System::Single lodBias)
		{
			return ((::NPCCrowd::Lod::CrowdLODDistanceSetting(*)(::Il2CppArray<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_CROWDLODDISTANCESETTING_INITLODDEFAULTSETTING_OFFSET))(lodDis, lodBias);
		}

		::NPCCrowd::Lod::ELODLevel GetLodLevel(::System::Single distanceM, ::System::Single avatarLodBias)
		{
			return ((::NPCCrowd::Lod::ELODLevel(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_CROWDLODDISTANCESETTING_GETLODLEVEL_OFFSET))(this, distanceM, avatarLodBias);
		}
	};
}
