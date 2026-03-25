#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGSOLDIERUNITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17089350)
#define RPG_GAMECORE_CHENLINGSOLDIERUNITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170898D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingSoldierUnitRow_TypeDefinitionIndex = 10351;

	class ChenLingSoldierUnitRow : public ::System::Object
	{
	public:
		::System::Single Scale; // 0x10
		::RPG::GameCore::FixPoint Atk; // 0x18
		::System::UInt32 SoldierID; // 0x20
		::System::UInt32 UnitLevel; // 0x24
		::System::UInt32 UnitID; // 0x28
		::System::Single ReadyScale; // 0x2C
		::RPG::GameCore::FixPoint MoveSpd; // 0x30
		::RPG::GameCore::FixPoint CrtDMG; // 0x38
		::RPG::GameCore::FixPoint Crt; // 0x40
		::RPG::GameCore::FixPoint Hp; // 0x48
		::RPG::GameCore::FixPoint AtkSpd; // 0x50
		::RPG::GameCore::FixPoint Range; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERUNITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingSoldierUnitRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingSoldierUnitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERUNITROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
