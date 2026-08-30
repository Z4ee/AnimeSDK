#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DEPLOYPUZZLEGIVEBACKSTONE_METHOD_3_7C24D3B6D6AAC57C_OFFSET UNITYSDK_OFFSET(0x1D816B20)
#define RPG_GAMECORE_DEPLOYPUZZLEGIVEBACKSTONE_METHOD_3_8EF48CC08B7B8A94_OFFSET UNITYSDK_OFFSET(0x1D816BA0)
#define RPG_GAMECORE_DEPLOYPUZZLEGIVEBACKSTONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D816B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeployPuzzleGiveBackStone_TypeDefinitionIndex = 21732;

	class DeployPuzzleGiveBackStone : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEGIVEBACKSTONE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7C24D3B6D6AAC57C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeployPuzzleGiveBackStone*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeployPuzzleGiveBackStone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEGIVEBACKSTONE_METHOD_3_7C24D3B6D6AAC57C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8EF48CC08B7B8A94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DeployPuzzleGiveBackStone* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DeployPuzzleGiveBackStone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPLOYPUZZLEGIVEBACKSTONE_METHOD_3_8EF48CC08B7B8A94_OFFSET))(a1, a2);
		}
	};
}
