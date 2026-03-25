#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/LevelRegionStateCondition.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELREGIONSTATECUSTOMVALUECONDITION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1734BC40)
#define RPG_GAMECORE_LEVELREGIONSTATECUSTOMVALUECONDITION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1734C1B0)
#define RPG_GAMECORE_LEVELREGIONSTATECUSTOMVALUECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1734BC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRegionStateCustomValueCondition_TypeDefinitionIndex = 15967;

	class LevelRegionStateCustomValueCondition : public ::RPG::GameCore::LevelRegionStateCondition
	{
	public:
		::System::String* CustomValueName; // 0x10
		::RPG::GameCore::CompareType Operation; // 0x18
		::System::Int16 Value; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECUSTOMVALUECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelRegionStateCustomValueCondition*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelRegionStateCustomValueCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECUSTOMVALUECONDITION_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelRegionStateCustomValueCondition* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelRegionStateCustomValueCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECUSTOMVALUECONDITION_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
