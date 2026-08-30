#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChestMonsterType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHESTMONSTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E01C3D0)
#define RPG_GAMECORE_CHESTMONSTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E01C660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChestMonsterRow_TypeDefinitionIndex = 14280;

	class ChestMonsterRow : public ::System::Object
	{
	public:
		::System::UInt32 ConfigID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 PlaneID; // 0x18
		::System::UInt32 MainMissionID; // 0x1C
		::System::UInt32 EventID; // 0x20
		::System::UInt32 FloorID; // 0x24
		::System::UInt32 ID; // 0x28
		::RPG::GameCore::ChestMonsterType MonsterType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESTMONSTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChestMonsterRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChestMonsterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESTMONSTERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
