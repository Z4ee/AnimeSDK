#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FANTASTICSTORYBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19707810)
#define RPG_GAMECORE_FANTASTICSTORYBUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19707A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FantasticStoryBuffRow_TypeDefinitionIndex = 11012;

	class FantasticStoryBuffRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AvailableBattleID; // 0x10
		::System::UInt32 MazebuffID; // 0x18
		::System::UInt32 BuffID; // 0x1C
		::System::UInt32 BuffSlot; // 0x20
		::System::UInt32 ActivityModuleID; // 0x24
		::System::UInt32 UnlockChapterID; // 0x28
		::System::Boolean ClientShowAvailableTips; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYBUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FantasticStoryBuffRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FantasticStoryBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
