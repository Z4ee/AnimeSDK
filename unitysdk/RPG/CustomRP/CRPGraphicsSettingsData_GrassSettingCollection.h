#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GRASSSETTINGCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C67CE60)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_GrassSettingCollection_TypeDefinitionIndex = 36987;

	class CRPGraphicsSettingsData_GrassSettingCollection : public ::System::Object
	{
	public:
		::System::Int32 MaxInstancesPerLeafNode; // 0x10
		::System::Int32 HierachicalTreeSplitFactor; // 0x14
		::System::Int32 MaxInstancesPerLeafNodeNonGrass; // 0x18
		::System::Int32 HierachicalTreeSplitFactorNonGrass; // 0x1C
		::System::Single GrassOcclusionSize; // 0x20
		::System::Boolean EnableInOutFade; // 0x24
		::System::Boolean EnableGrassLodFade; // 0x25
		::System::Boolean EnableGrassGPUDriven; // 0x26
		::System::Boolean EnableGrass; // 0x27
		::System::Single OverallDensityFactor; // 0x28
		::System::Boolean EnableGrassDensityReduce; // 0x2C
		::System::Single GrassMaxDistance; // 0x30
		::System::Single GrassConstantDensityRangeFactor; // 0x34
		::System::Single GrassDensityReduceFactor; // 0x38
		::System::Boolean GrassLodVisible; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GRASSSETTINGCOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
