#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GAMEMODEFUNCENTRANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C5B4770)
#define RPG_GAMECORE_GAMEMODEFUNCENTRANCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5B48B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameModeFuncEntranceRow_TypeDefinitionIndex = 12815;

	class GameModeFuncEntranceRow : public ::System::Object
	{
	public:
		::System::UInt32 MainLineFuncEntranceListID; // 0x10
		::System::UInt32 BranchLineFuncEntranceListID; // 0x14
		::System::UInt32 GameModeType; // 0x18

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
