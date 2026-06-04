#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELREGIONSTATECONDITION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1988A530)
#define RPG_GAMECORE_LEVELREGIONSTATECONDITION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1988A0F0)
#define RPG_GAMECORE_LEVELREGIONSTATECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1988A590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRegionStateCondition_TypeDefinitionIndex = 16522;

	class LevelRegionStateCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelRegionStateCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelRegionStateCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECONDITION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelRegionStateCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelRegionStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATECONDITION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
