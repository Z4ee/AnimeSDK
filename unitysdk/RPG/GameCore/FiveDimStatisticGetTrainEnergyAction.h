#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTATISTICGETTRAINENERGYACTION_METHOD_3_333D9934F8A04E12_OFFSET UNITYSDK_OFFSET(0x1D87DDA0)
#define RPG_GAMECORE_FIVEDIMSTATISTICGETTRAINENERGYACTION_METHOD_3_4A6E36A13DC06813_OFFSET UNITYSDK_OFFSET(0x1D87DD20)
#define RPG_GAMECORE_FIVEDIMSTATISTICGETTRAINENERGYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87DD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStatisticGetTrainEnergyAction_TypeDefinitionIndex = 18548;

	class FiveDimStatisticGetTrainEnergyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTATISTICGETTRAINENERGYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4A6E36A13DC06813(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTATISTICGETTRAINENERGYACTION_METHOD_3_4A6E36A13DC06813_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_333D9934F8A04E12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTATISTICGETTRAINENERGYACTION_METHOD_3_333D9934F8A04E12_OFFSET))(a1, a2);
		}
	};
}
