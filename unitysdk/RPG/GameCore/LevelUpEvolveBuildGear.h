#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELUPEVOLVEBUILDGEAR_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1734D090)
#define RPG_GAMECORE_LEVELUPEVOLVEBUILDGEAR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1734D010)
#define RPG_GAMECORE_LEVELUPEVOLVEBUILDGEAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1734D060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelUpEvolveBuildGear_TypeDefinitionIndex = 21323;

	class LevelUpEvolveBuildGear : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 EvolveGearType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUPEVOLVEBUILDGEAR__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelUpEvolveBuildGear*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelUpEvolveBuildGear*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUPEVOLVEBUILDGEAR_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelUpEvolveBuildGear* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelUpEvolveBuildGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUPEVOLVEBUILDGEAR_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
