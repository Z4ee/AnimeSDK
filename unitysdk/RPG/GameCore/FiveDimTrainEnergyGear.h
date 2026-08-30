#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_FIVEDIMTRAINENERGYGEAR_METHOD_2_E6126DFFB01380BA_OFFSET UNITYSDK_OFFSET(0x1DCA86B0)
#define RPG_GAMECORE_FIVEDIMTRAINENERGYGEAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA8830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTrainEnergyGear_TypeDefinitionIndex = 21225;

	class FiveDimTrainEnergyGear : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* EnergyGear; // 0x10
		::RPG::GameCore::DynamicFloat* CostEnergy; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAINENERGYGEAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E6126DFFB01380BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTrainEnergyGear*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTrainEnergyGear*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAINENERGYGEAR_METHOD_2_E6126DFFB01380BA_OFFSET))(a1, a2);
		}
	};
}
