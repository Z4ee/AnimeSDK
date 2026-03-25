#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1765E230)
#define RPG_GAMECORE_ROGUETOURNBUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1765EB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuffRow_TypeDefinitionIndex = 13750;

	class RogueTournBuffRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x10
		::System::UInt32 UnlockDisplay; // 0x18
		::System::UInt32 RogueBuffType; // 0x1C
		::System::Boolean IsInHandbook; // 0x20
		::System::UInt32 MazeBuffLevel; // 0x24
		::System::UInt32 RogueBuffTag; // 0x28
		::RPG::GameCore::RogueBuffCategory RogueBuffCategory; // 0x2C
		::System::UInt32 AeonID; // 0x30
		::System::UInt32 MazeBuffID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournBuffRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
