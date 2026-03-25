#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSEASONMODULECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17281A60)
#define RPG_GAMECORE_GRIDFIGHTSEASONMODULECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17281CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSeasonModuleConfigRow_TypeDefinitionIndex = 12426;

	class GridFightSeasonModuleConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 GirlHeroSpecialAvatarId; // 0x10
		::System::UInt32 ActivityModuleID; // 0x14
		::System::UInt32 ActivityQuestConfigID; // 0x18
		::System::UInt32 OfferingID; // 0x1C
		::System::UInt32 SubSeasonID; // 0x20
		::System::UInt32 MaxRewardExp; // 0x24
		::System::UInt32 SeasonID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONMODULECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightSeasonModuleConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSeasonModuleConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONMODULECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
