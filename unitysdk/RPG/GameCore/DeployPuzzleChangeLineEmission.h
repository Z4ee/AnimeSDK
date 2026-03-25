#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DEPLOYPUZZLECHANGELINEEMISSION_METHOD_3_4B6AFA27590B624E_OFFSET UNITYSDK_OFFSET(0x17152B90)
#define RPG_GAMECORE_DEPLOYPUZZLECHANGELINEEMISSION_METHOD_3_BD4D9294E10E0706_OFFSET UNITYSDK_OFFSET(0x17152CE0)
#define RPG_GAMECORE_DEPLOYPUZZLECHANGELINEEMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x17152C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeployPuzzleChangeLineEmission_TypeDefinitionIndex = 18657;

	class DeployPuzzleChangeLineEmission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* TargetEmission; // 0x20
		::RPG::GameCore::DynamicFloat* TransitionTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLECHANGELINEEMISSION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4B6AFA27590B624E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeployPuzzleChangeLineEmission*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeployPuzzleChangeLineEmission*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLECHANGELINEEMISSION_METHOD_3_4B6AFA27590B624E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BD4D9294E10E0706(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeployPuzzleChangeLineEmission* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeployPuzzleChangeLineEmission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLECHANGELINEEMISSION_METHOD_3_BD4D9294E10E0706_OFFSET))(a1, a2);
		}
	};
}
