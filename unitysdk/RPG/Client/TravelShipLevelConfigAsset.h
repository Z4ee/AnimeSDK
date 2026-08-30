#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Generation/OctreeAsset.h"

class Class_1_C84A84118567060F;

#define RPG_CLIENT_TRAVELSHIPLEVELCONFIGASSET_METHOD_4_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0x1B2B7B50)
#define RPG_CLIENT_TRAVELSHIPLEVELCONFIGASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B7BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int TravelShipLevelConfigAsset_TypeDefinitionIndex = 68766;

	class TravelShipLevelConfigAsset : public ::RPGTools::Octree::Generation::OctreeAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPLEVELCONFIGASSET__CTOR_OFFSET))(this);
		}

		::Class_1_C84A84118567060F* Method_4_7E9AC3FFDA4606D5()
		{
			return ((::Class_1_C84A84118567060F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAVELSHIPLEVELCONFIGASSET_METHOD_4_7E9AC3FFDA4606D5_OFFSET))(this);
		}
	};
}
