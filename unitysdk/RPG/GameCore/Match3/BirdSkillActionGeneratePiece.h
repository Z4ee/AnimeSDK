#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEPIECE_METHOD_5_D927DB1AF5D951D2_OFFSET UNITYSDK_OFFSET(0x1D240470)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEPIECE_METHOD_5_ECFA267E5798C69F_OFFSET UNITYSDK_OFFSET(0x1D240430)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEPIECE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D240460)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BirdSkillActionGeneratePiece_TypeDefinitionIndex = 24649;

	class BirdSkillActionGeneratePiece : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 StyleID; // 0x18
		::System::UInt32 PieceCount; // 0x1C
		::System::Boolean ScoreBonus; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEPIECE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_ECFA267E5798C69F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillActionGeneratePiece*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillActionGeneratePiece*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEPIECE_METHOD_5_ECFA267E5798C69F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_D927DB1AF5D951D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillActionGeneratePiece* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillActionGeneratePiece*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEPIECE_METHOD_5_D927DB1AF5D951D2_OFFSET))(a1, a2);
		}
	};
}
