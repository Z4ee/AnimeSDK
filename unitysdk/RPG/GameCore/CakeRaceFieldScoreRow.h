#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEFIELDSCOREROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CF75AC0)
#define RPG_GAMECORE_CAKERACEFIELDSCOREROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF75D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceFieldScoreRow_TypeDefinitionIndex = 10998;

	class CakeRaceFieldScoreRow : public ::System::Object
	{
	public:
		::System::UInt32 TotalScoreMaxLimit; // 0x10
		::System::UInt32 SingleScoreRate; // 0x14
		::System::UInt32 SingleScoreMaxLimit; // 0x18
		::System::UInt32 SingleScoreMinLimit; // 0x1C
		::System::UInt32 TotalScoreRate; // 0x20
		::System::UInt32 TotalScoreMinLimit; // 0x24
		::System::UInt32 FieldID; // 0x28
		::System::UInt32 BetBaseScore; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEFIELDSCOREROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceFieldScoreRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceFieldScoreRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEFIELDSCOREROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
