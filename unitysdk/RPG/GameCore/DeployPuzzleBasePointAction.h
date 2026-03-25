#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeployPuzzleBasePointActionType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DEPLOYPUZZLEBASEPOINTACTION_METHOD_3_3BC00A5C73185324_OFFSET UNITYSDK_OFFSET(0x171525B0)
#define RPG_GAMECORE_DEPLOYPUZZLEBASEPOINTACTION_METHOD_3_76AF6D7E48E8CA10_OFFSET UNITYSDK_OFFSET(0x17152700)
#define RPG_GAMECORE_DEPLOYPUZZLEBASEPOINTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17152670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeployPuzzleBasePointAction_TypeDefinitionIndex = 20152;

	class DeployPuzzleBasePointAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DeployPuzzleBasePointActionType TargetAction; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEBASEPOINTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3BC00A5C73185324(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeployPuzzleBasePointAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeployPuzzleBasePointAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEBASEPOINTACTION_METHOD_3_3BC00A5C73185324_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_76AF6D7E48E8CA10(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeployPuzzleBasePointAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeployPuzzleBasePointAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEBASEPOINTACTION_METHOD_3_76AF6D7E48E8CA10_OFFSET))(a1, a2);
		}
	};
}
