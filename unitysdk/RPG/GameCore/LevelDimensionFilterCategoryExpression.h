#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelDimensionCategory.h"
#include "unitysdk/RPG/GameCore/LevelDimensionFilterExprListCompareType.h"
#include "unitysdk/RPG/GameCore/LevelDimensionFilterExpression.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELDIMENSIONFILTERCATEGORYEXPRESSION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1B0313D0)
#define RPG_GAMECORE_LEVELDIMENSIONFILTERCATEGORYEXPRESSION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B031370)
#define RPG_GAMECORE_LEVELDIMENSIONFILTERCATEGORYEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0313C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionFilterCategoryExpression_TypeDefinitionIndex = 16510;

	class LevelDimensionFilterCategoryExpression : public ::RPG::GameCore::LevelDimensionFilterExpression
	{
	public:
		::RPG::GameCore::LevelDimensionFilterExprListCompareType Operation; // 0x10
		::Il2CppArray<::RPG::GameCore::LevelDimensionCategory>* CategoryList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERCATEGORYEXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelDimensionFilterCategoryExpression*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionFilterCategoryExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERCATEGORYEXPRESSION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelDimensionFilterCategoryExpression* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionFilterCategoryExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERCATEGORYEXPRESSION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
