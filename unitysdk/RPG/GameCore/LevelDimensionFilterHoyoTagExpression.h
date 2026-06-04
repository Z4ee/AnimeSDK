#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HoyoTagEvalType.h"
#include "unitysdk/RPG/GameCore/LevelDimensionFilterExpression.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTagContainer; }

#define RPG_GAMECORE_LEVELDIMENSIONFILTERHOYOTAGEXPRESSION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x198716D0)
#define RPG_GAMECORE_LEVELDIMENSIONFILTERHOYOTAGEXPRESSION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19871960)
#define RPG_GAMECORE_LEVELDIMENSIONFILTERHOYOTAGEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x198716C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionFilterHoyoTagExpression_TypeDefinitionIndex = 16349;

	class LevelDimensionFilterHoyoTagExpression : public ::RPG::GameCore::LevelDimensionFilterExpression
	{
	public:
		::RPG::GameCore::HoyoTagEvalType TagEvalType; // 0x10
		::RPG::GameCore::HoyoTagContainer* MatchTagContainer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERHOYOTAGEXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelDimensionFilterHoyoTagExpression*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionFilterHoyoTagExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERHOYOTAGEXPRESSION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelDimensionFilterHoyoTagExpression* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionFilterHoyoTagExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERHOYOTAGEXPRESSION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
