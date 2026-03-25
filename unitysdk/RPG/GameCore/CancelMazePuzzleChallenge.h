#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_CANCELMAZEPUZZLECHALLENGE_METHOD_3_1B5CF87C0670873C_OFFSET UNITYSDK_OFFSET(0x17052E80)
#define RPG_GAMECORE_CANCELMAZEPUZZLECHALLENGE_METHOD_3_B321AF77242CFFCD_OFFSET UNITYSDK_OFFSET(0x17052E00)
#define RPG_GAMECORE_CANCELMAZEPUZZLECHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17052E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CancelMazePuzzleChallenge_TypeDefinitionIndex = 18667;

	class CancelMazePuzzleChallenge : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* MazePuzzleChallengeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CANCELMAZEPUZZLECHALLENGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B321AF77242CFFCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CancelMazePuzzleChallenge*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CancelMazePuzzleChallenge*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CANCELMAZEPUZZLECHALLENGE_METHOD_3_B321AF77242CFFCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B5CF87C0670873C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CancelMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CancelMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CANCELMAZEPUZZLECHALLENGE_METHOD_3_1B5CF87C0670873C_OFFSET))(a1, a2);
		}
	};
}
