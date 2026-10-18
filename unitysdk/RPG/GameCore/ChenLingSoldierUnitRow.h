#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGSOLDIERUNITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D566C90)
#define RPG_GAMECORE_CHENLINGSOLDIERUNITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D567210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingSoldierUnitRow_TypeDefinitionIndex = 11055;

	class ChenLingSoldierUnitRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint CrtDMG; // 0x10
		::RPG::GameCore::FixPoint AtkSpd; // 0x18
		::System::Single Scale; // 0x20
		::System::Single ReadyScale; // 0x24
		::RPG::GameCore::FixPoint Atk; // 0x28
		::System::UInt32 SoldierID; // 0x30
		::RPG::GameCore::FixPoint Hp; // 0x38
		::RPG::GameCore::FixPoint MoveSpd; // 0x40
		::System::UInt32 UnitLevel; // 0x48
		::System::UInt32 UnitID; // 0x4C
		::RPG::GameCore::FixPoint Range; // 0x50
		::RPG::GameCore::FixPoint Crt; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERUNITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingSoldierUnitRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingSoldierUnitRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERUNITROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
