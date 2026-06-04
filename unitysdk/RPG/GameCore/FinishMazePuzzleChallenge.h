#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_FINISHMAZEPUZZLECHALLENGE_METHOD_3_05D17D2E7A6ECCAF_OFFSET UNITYSDK_OFFSET(0x19721BE0)
#define RPG_GAMECORE_FINISHMAZEPUZZLECHALLENGE_METHOD_3_AF71DF3D05EB4E3E_OFFSET UNITYSDK_OFFSET(0x19721B60)
#define RPG_GAMECORE_FINISHMAZEPUZZLECHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19721BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishMazePuzzleChallenge_TypeDefinitionIndex = 20787;

	class FinishMazePuzzleChallenge : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* MazePuzzleChallengeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHMAZEPUZZLECHALLENGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AF71DF3D05EB4E3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishMazePuzzleChallenge*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishMazePuzzleChallenge*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHMAZEPUZZLECHALLENGE_METHOD_3_AF71DF3D05EB4E3E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_05D17D2E7A6ECCAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FinishMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHMAZEPUZZLECHALLENGE_METHOD_3_05D17D2E7A6ECCAF_OFFSET))(a1, a2);
		}
	};
}
