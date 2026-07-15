#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimTrainEnergySpeedMapItem; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMTRAINLEVELCONFIG_METHOD_2_A77DDF28E878E4CB_OFFSET UNITYSDK_OFFSET(0x1BE9F450)
#define RPG_GAMECORE_FIVEDIMTRAINLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB7880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTrainLevelConfig_TypeDefinitionIndex = 17798;

	class FiveDimTrainLevelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EnergyLevelVarName; // 0x10
		::System::String* DistanceDynamicValueName; // 0x18
		::System::Single MaxEnergy; // 0x20
		::System::Single MaxEnergyForDisplay; // 0x24
		::Il2CppArray<::RPG::GameCore::FiveDimTrainEnergySpeedMapItem*>* SpeedMapping; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAINLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A77DDF28E878E4CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTrainLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTrainLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAINLEVELCONFIG_METHOD_2_A77DDF28E878E4CB_OFFSET))(a1, a2);
		}
	};
}
