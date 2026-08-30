#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4143D0)
#define RPG_GAMECORE_ROGUETOURNBUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D414CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuffRow_TypeDefinitionIndex = 14848;

	class RogueTournBuffRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x10
		::System::UInt32 MazeBuffID; // 0x18
		::System::UInt32 AeonID; // 0x1C
		::RPG::GameCore::RogueBuffCategory RogueBuffCategory; // 0x20
		::System::Boolean IsInHandbook; // 0x24
		::System::UInt32 RogueBuffTag; // 0x28
		::System::UInt32 UnlockDisplay; // 0x2C
		::System::UInt32 MazeBuffLevel; // 0x30
		::System::UInt32 RogueBuffType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournBuffRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
