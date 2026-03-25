#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HoyoTagEvalType.h"
#include "unitysdk/RPG/GameCore/LevelDimensionFilterExpression.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTagContainer; }

#define RPG_GAMECORE_LEVELDIMENSIONFILTERHOYOTAGEXPRESSION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x17332840)
#define RPG_GAMECORE_LEVELDIMENSIONFILTERHOYOTAGEXPRESSION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17332AD0)
#define RPG_GAMECORE_LEVELDIMENSIONFILTERHOYOTAGEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x17332830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionFilterHoyoTagExpression_TypeDefinitionIndex = 15791;

	class LevelDimensionFilterHoyoTagExpression : public ::RPG::GameCore::LevelDimensionFilterExpression
	{
	public:
		::RPG::GameCore::HoyoTagEvalType TagEvalType; // 0x10
		::RPG::GameCore::HoyoTagContainer* MatchTagContainer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERHOYOTAGEXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelDimensionFilterHoyoTagExpression*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionFilterHoyoTagExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERHOYOTAGEXPRESSION_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelDimensionFilterHoyoTagExpression* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionFilterHoyoTagExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERHOYOTAGEXPRESSION_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
