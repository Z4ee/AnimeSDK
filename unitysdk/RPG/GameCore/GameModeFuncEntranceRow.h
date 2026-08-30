#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GAMEMODEFUNCENTRANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D13D700)
#define RPG_GAMECORE_GAMEMODEFUNCENTRANCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D13D840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameModeFuncEntranceRow_TypeDefinitionIndex = 13206;

	class GameModeFuncEntranceRow : public ::System::Object
	{
	public:
		::System::UInt32 BranchLineFuncEntranceListID; // 0x10
		::System::UInt32 GameModeType; // 0x14
		::System::UInt32 MainLineFuncEntranceListID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEMODEFUNCENTRANCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GameModeFuncEntranceRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameModeFuncEntranceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEMODEFUNCENTRANCEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
