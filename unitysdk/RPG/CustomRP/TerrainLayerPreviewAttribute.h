#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define RPG_CUSTOMRP_TERRAINLAYERPREVIEWATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1352F0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int TerrainLayerPreviewAttribute_TypeDefinitionIndex = 36183;

	class TerrainLayerPreviewAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_TERRAINLAYERPREVIEWATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
