#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GAMEMODEFUNCENTRANCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172412C0)
#define RPG_GAMECORE_GAMEMODEFUNCENTRANCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17241400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameModeFuncEntranceRow_TypeDefinitionIndex = 12154;

	class GameModeFuncEntranceRow : public ::System::Object
	{
	public:
		::System::UInt32 BranchLineFuncEntranceListID; // 0x10
		::System::UInt32 MainLineFuncEntranceListID; // 0x14
		::System::UInt32 GameModeType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEMODEFUNCENTRANCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GameModeFuncEntranceRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GameModeFuncEntranceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEMODEFUNCENTRANCEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
