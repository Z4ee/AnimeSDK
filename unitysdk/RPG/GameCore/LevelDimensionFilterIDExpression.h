#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelDimensionFilterExprListCompareType.h"
#include "unitysdk/RPG/GameCore/LevelDimensionFilterExpression.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELDIMENSIONFILTERIDEXPRESSION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x19871800)
#define RPG_GAMECORE_LEVELDIMENSIONFILTERIDEXPRESSION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198719B0)
#define RPG_GAMECORE_LEVELDIMENSIONFILTERIDEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x198717F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionFilterIDExpression_TypeDefinitionIndex = 16347;

	class LevelDimensionFilterIDExpression : public ::RPG::GameCore::LevelDimensionFilterExpression
	{
	public:
		::RPG::GameCore::LevelDimensionFilterExprListCompareType Operation; // 0x10
		::Il2CppArray<::System::UInt32>* DimensionIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERIDEXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelDimensionFilterIDExpression*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionFilterIDExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERIDEXPRESSION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelDimensionFilterIDExpression* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionFilterIDExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTERIDEXPRESSION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
