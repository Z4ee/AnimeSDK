#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelPropParameter.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELPROPMAPHELIOBUSCHALLENGEPARAM_METHOD_3_AEC88C6D75322C15_OFFSET UNITYSDK_OFFSET(0x1B087430)
#define RPG_GAMECORE_LEVELPROPMAPHELIOBUSCHALLENGEPARAM_METHOD_3_D1ED602326974780_OFFSET UNITYSDK_OFFSET(0x1B087380)
#define RPG_GAMECORE_LEVELPROPMAPHELIOBUSCHALLENGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B087420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPropMapHeliobusChallengeParam_TypeDefinitionIndex = 16569;

	class LevelPropMapHeliobusChallengeParam : public ::RPG::GameCore::LevelPropParameter
	{
	public:
		::System::UInt32 ChallengeID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPMAPHELIOBUSCHALLENGEPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D1ED602326974780(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPropMapHeliobusChallengeParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPropMapHeliobusChallengeParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPMAPHELIOBUSCHALLENGEPARAM_METHOD_3_D1ED602326974780_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AEC88C6D75322C15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelPropMapHeliobusChallengeParam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelPropMapHeliobusChallengeParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPROPMAPHELIOBUSCHALLENGEPARAM_METHOD_3_AEC88C6D75322C15_OFFSET))(a1, a2);
		}
	};
}
