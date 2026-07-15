#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeployBoardState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DEPLOYPUZZLECHANGEBOARDSTATE_METHOD_3_55A252E8672E7540_OFFSET UNITYSDK_OFFSET(0x1C102720)
#define RPG_GAMECORE_DEPLOYPUZZLECHANGEBOARDSTATE_METHOD_3_823EBB1B039CF7E6_OFFSET UNITYSDK_OFFSET(0x1C1026A0)
#define RPG_GAMECORE_DEPLOYPUZZLECHANGEBOARDSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1026F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeployPuzzleChangeBoardState_TypeDefinitionIndex = 19581;

	class DeployPuzzleChangeBoardState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DeployBoardState NewState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLECHANGEBOARDSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_823EBB1B039CF7E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeployPuzzleChangeBoardState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeployPuzzleChangeBoardState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLECHANGEBOARDSTATE_METHOD_3_823EBB1B039CF7E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_55A252E8672E7540(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeployPuzzleChangeBoardState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeployPuzzleChangeBoardState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLECHANGEBOARDSTATE_METHOD_3_55A252E8672E7540_OFFSET))(a1, a2);
		}
	};
}
