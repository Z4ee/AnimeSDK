#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LogicOperationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelDimensionFilterExpression; }

#define RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSIONSET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A3F4E0)
#define RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSIONSET__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3FDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDimensionFilterExpressionSet_TypeDefinitionIndex = 16318;

	class LevelDimensionFilterExpressionSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelDimensionFilterExpression*>* ExpressionList; // 0x10
		::RPG::GameCore::LogicOperationType Operation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSIONSET__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelDimensionFilterExpressionSet*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelDimensionFilterExpressionSet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELDIMENSIONFILTEREXPRESSIONSET_FROMBINARY_OFFSET))(array, val);
		}
	};
}
