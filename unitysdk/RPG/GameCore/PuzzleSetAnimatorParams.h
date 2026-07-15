#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PuzzleAnimatorParam; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PUZZLESETANIMATORPARAMS_METHOD_3_914E95E81E6BBC69_OFFSET UNITYSDK_OFFSET(0x1B9A8FB0)
#define RPG_GAMECORE_PUZZLESETANIMATORPARAMS_METHOD_3_A3A5E93D664782CB_OFFSET UNITYSDK_OFFSET(0x1B9A9030)
#define RPG_GAMECORE_PUZZLESETANIMATORPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A9000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PuzzleSetAnimatorParams_TypeDefinitionIndex = 21418;

	class PuzzleSetAnimatorParams : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::PuzzleAnimatorParam*>* Params; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUZZLESETANIMATORPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_914E95E81E6BBC69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PuzzleSetAnimatorParams*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PuzzleSetAnimatorParams*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUZZLESETANIMATORPARAMS_METHOD_3_914E95E81E6BBC69_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A3A5E93D664782CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PuzzleSetAnimatorParams* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PuzzleSetAnimatorParams*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUZZLESETANIMATORPARAMS_METHOD_3_A3A5E93D664782CB_OFFSET))(a1, a2);
		}
	};
}
