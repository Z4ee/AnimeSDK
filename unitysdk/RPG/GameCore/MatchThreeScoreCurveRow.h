#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCHTHREESCORECURVEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BD34C20)
#define RPG_GAMECORE_MATCHTHREESCORECURVEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD353B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeScoreCurveRow_TypeDefinitionIndex = 11503;

	class MatchThreeScoreCurveRow : public ::System::Object
	{
	public:
		::System::UInt32 CurveID; // 0x10
		::System::UInt32 HPDecrease; // 0x14
		::System::Single AddCurveRatio; // 0x18
		::System::UInt32 AddLow; // 0x1C
		::System::UInt32 AddHigh; // 0x20
		::System::UInt32 PlayerStep; // 0x24
		::System::UInt32 DelayTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MatchThreeScoreCurveRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeScoreCurveRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREESCORECURVEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
