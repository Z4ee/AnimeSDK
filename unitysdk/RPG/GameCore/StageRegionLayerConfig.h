#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEREGIONLAYERCONFIG_METHOD_2_3FC7238912D0CAF9_OFFSET UNITYSDK_OFFSET(0x1CAEA9A0)
#define RPG_GAMECORE_STAGEREGIONLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAEA9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRegionLayerConfig_TypeDefinitionIndex = 18968;

	class StageRegionLayerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONLAYERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3FC7238912D0CAF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageRegionLayerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageRegionLayerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEREGIONLAYERCONFIG_METHOD_2_3FC7238912D0CAF9_OFFSET))(a1, a2);
		}
	};
}
