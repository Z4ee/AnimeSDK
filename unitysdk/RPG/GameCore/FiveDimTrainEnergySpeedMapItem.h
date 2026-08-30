#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMTRAINENERGYSPEEDMAPITEM_METHOD_2_F8FA5C9D02BCAA09_OFFSET UNITYSDK_OFFSET(0x1D1074A0)
#define RPG_GAMECORE_FIVEDIMTRAINENERGYSPEEDMAPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1075B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTrainEnergySpeedMapItem_TypeDefinitionIndex = 18316;

	class FiveDimTrainEnergySpeedMapItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Energy; // 0x10
		::System::Single Speed; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAINENERGYSPEEDMAPITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F8FA5C9D02BCAA09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTrainEnergySpeedMapItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTrainEnergySpeedMapItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAINENERGYSPEEDMAPITEM_METHOD_2_F8FA5C9D02BCAA09_OFFSET))(a1, a2);
		}
	};
}
