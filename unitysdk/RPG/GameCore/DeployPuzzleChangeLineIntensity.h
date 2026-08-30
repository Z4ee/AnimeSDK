#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DEPLOYPUZZLECHANGELINEINTENSITY_METHOD_3_7297CD96B64313A5_OFFSET UNITYSDK_OFFSET(0x1D01F850)
#define RPG_GAMECORE_DEPLOYPUZZLECHANGELINEINTENSITY_METHOD_3_DCBEDDEB5C78BDDB_OFFSET UNITYSDK_OFFSET(0x1D01F7C0)
#define RPG_GAMECORE_DEPLOYPUZZLECHANGELINEINTENSITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D01F820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeployPuzzleChangeLineIntensity_TypeDefinitionIndex = 21735;

	class DeployPuzzleChangeLineIntensity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single LineFadeoutDuration; // 0x20
		::System::Single TargetIntensity; // 0x24
		::System::Boolean IsHintLine; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLECHANGELINEINTENSITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DCBEDDEB5C78BDDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeployPuzzleChangeLineIntensity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeployPuzzleChangeLineIntensity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLECHANGELINEINTENSITY_METHOD_3_DCBEDDEB5C78BDDB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7297CD96B64313A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeployPuzzleChangeLineIntensity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeployPuzzleChangeLineIntensity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLECHANGELINEINTENSITY_METHOD_3_7297CD96B64313A5_OFFSET))(a1, a2);
		}
	};
}
