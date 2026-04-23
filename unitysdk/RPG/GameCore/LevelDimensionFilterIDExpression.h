#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelDimensionFilterExprListCompareType.h"
#include "unitysdk/RPG/GameCore/LevelDimensionFilterExpression.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELDIMENSIONFILTERIDEXPRESSION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x18A3FC60)
#define RPG_GAMECORE_LEVELDIMENSIONFILTERIDEXPRESSION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A3FE10)
#define RPG_GAMECORE_LEVELDIMENSIONFILTERIDEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3FC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionFilterIDExpression_TypeDefinitionIndex = 16314;

	class LevelDimensionFilterIDExpression : public ::RPG::GameCore::LevelDimensionFilterExpression
	{
	public:
		::RPG::GameCore::LevelDimensionFilterExprListCompareType Operation; // 0x10
		::Il2CppArray<::System::UInt32>* DimensionIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERIDEXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelDimensionFilterIDExpression*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionFilterIDExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERIDEXPRESSION_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelDimensionFilterIDExpression* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionFilterIDExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERIDEXPRESSION_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
