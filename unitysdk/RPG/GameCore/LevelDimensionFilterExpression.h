#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x19871660)
#define RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198713F0)
#define RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x198713E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionFilterExpression_TypeDefinitionIndex = 16344;

	class LevelDimensionFilterExpression : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelDimensionFilterExpression*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionFilterExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelDimensionFilterExpression* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionFilterExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
