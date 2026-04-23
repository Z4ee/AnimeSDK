#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x18A3FAC0)
#define RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A3F840)
#define RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3F830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionFilterExpression_TypeDefinitionIndex = 16311;

	class LevelDimensionFilterExpression : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelDimensionFilterExpression*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionFilterExpression*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelDimensionFilterExpression* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionFilterExpression*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSION_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
