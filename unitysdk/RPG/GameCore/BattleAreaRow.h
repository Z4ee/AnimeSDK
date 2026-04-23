#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLEAREAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186EF580)
#define RPG_GAMECORE_BATTLEAREAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186EF8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAreaRow_TypeDefinitionIndex = 12126;

	class BattleAreaRow : public ::System::Object
	{
	public:
		::System::UInt32 BattleAreaGroupID; // 0x10
		::System::UInt32 FloorID; // 0x14
		::System::UInt32 UnifiedConfigID; // 0x18
		::System::UInt32 DimensionID; // 0x1C
		::System::UInt32 ID; // 0x20
		::System::Boolean IsLegacy; // 0x24
		::System::Boolean IsUseUnifiedConfig; // 0x25
		::System::UInt32 FloorBattleAreaID; // 0x28
		::System::UInt32 BattleAreaID; // 0x2C
		::System::UInt32 PlaneID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BattleAreaRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleAreaRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
