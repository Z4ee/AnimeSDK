#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELREGIONSTATECONDITION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1734BF10)
#define RPG_GAMECORE_LEVELREGIONSTATECONDITION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1734BAE0)
#define RPG_GAMECORE_LEVELREGIONSTATECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1734BF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRegionStateCondition_TypeDefinitionIndex = 15965;

	class LevelRegionStateCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelRegionStateCondition*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelRegionStateCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECONDITION_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelRegionStateCondition* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelRegionStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECONDITION_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
