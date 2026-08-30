#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_PREPAREFINISHMAZEPUZZLECHALLENGE_METHOD_3_253B404E290E8F52_OFFSET UNITYSDK_OFFSET(0x1D35B230)
#define RPG_GAMECORE_PREPAREFINISHMAZEPUZZLECHALLENGE_METHOD_3_77EABEF3372EF6C9_OFFSET UNITYSDK_OFFSET(0x1D35B1F0)
#define RPG_GAMECORE_PREPAREFINISHMAZEPUZZLECHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D35B220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PrepareFinishMazePuzzleChallenge_TypeDefinitionIndex = 21763;

	class PrepareFinishMazePuzzleChallenge : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* MazePuzzleChallengeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREPAREFINISHMAZEPUZZLECHALLENGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_77EABEF3372EF6C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PrepareFinishMazePuzzleChallenge*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PrepareFinishMazePuzzleChallenge*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREPAREFINISHMAZEPUZZLECHALLENGE_METHOD_3_77EABEF3372EF6C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_253B404E290E8F52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PrepareFinishMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PrepareFinishMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PREPAREFINISHMAZEPUZZLECHALLENGE_METHOD_3_253B404E290E8F52_OFFSET))(a1, a2);
		}
	};
}
