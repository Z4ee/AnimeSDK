#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEVELUPEVOLVEBUILDGEAR_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1B08B1E0)
#define RPG_GAMECORE_LEVELUPEVOLVEBUILDGEAR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B08B1A0)
#define RPG_GAMECORE_LEVELUPEVOLVEBUILDGEAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B08B1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelUpEvolveBuildGear_TypeDefinitionIndex = 22272;

	class LevelUpEvolveBuildGear : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 EvolveGearType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUPEVOLVEBUILDGEAR__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelUpEvolveBuildGear*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelUpEvolveBuildGear*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUPEVOLVEBUILDGEAR_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelUpEvolveBuildGear* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelUpEvolveBuildGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUPEVOLVEBUILDGEAR_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
