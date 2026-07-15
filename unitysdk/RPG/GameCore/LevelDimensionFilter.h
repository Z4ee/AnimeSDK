#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelDimensionFilterType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelDimensionFilterExpressionSet; }

#define RPG_GAMECORE_LEVELDIMENSIONFILTER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B0310E0)
#define RPG_GAMECORE_LEVELDIMENSIONFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B031200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionFilter_TypeDefinitionIndex = 16513;

	class LevelDimensionFilter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelDimensionFilterType FilterType; // 0x10
		::RPG::GameCore::LevelDimensionFilterExpressionSet* FilterExpression; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTER__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelDimensionFilter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionFilter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTER_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
