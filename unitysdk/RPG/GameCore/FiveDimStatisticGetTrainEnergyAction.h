#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSTATISTICGETTRAINENERGYACTION_METHOD_4_8A3B50CBBEF84500_OFFSET UNITYSDK_OFFSET(0x1D6B13B0)
#define RPG_GAMECORE_FIVEDIMSTATISTICGETTRAINENERGYACTION_METHOD_4_F893B43ACD0D4CC5_OFFSET UNITYSDK_OFFSET(0x1D6B1430)
#define RPG_GAMECORE_FIVEDIMSTATISTICGETTRAINENERGYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B1420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStatisticGetTrainEnergyAction_TypeDefinitionIndex = 18758;

	class FiveDimStatisticGetTrainEnergyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTATISTICGETTRAINENERGYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8A3B50CBBEF84500(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTATISTICGETTRAINENERGYACTION_METHOD_4_8A3B50CBBEF84500_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F893B43ACD0D4CC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimStatisticGetTrainEnergyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTATISTICGETTRAINENERGYACTION_METHOD_4_F893B43ACD0D4CC5_OFFSET))(a1, a2);
		}
	};
}
