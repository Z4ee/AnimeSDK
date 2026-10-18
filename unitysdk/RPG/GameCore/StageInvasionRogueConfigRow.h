#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEINVASIONROGUECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAE1F50)
#define RPG_GAMECORE_STAGEINVASIONROGUECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE2070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInvasionRogueConfigRow_TypeDefinitionIndex = 15163;

	class StageInvasionRogueConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ChallengeID; // 0x10
		::System::UInt32 InvasionID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONROGUECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageInvasionRogueConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageInvasionRogueConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONROGUECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
