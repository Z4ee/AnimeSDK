#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEUNLOCKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x176724E0)
#define RPG_GAMECORE_ROGUEUNLOCKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17672B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueUnlockConfigRow_TypeDefinitionIndex = 13445;

	class RogueUnlockConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockFinishWay; // 0x10
		::System::UInt32 RogueUnlockID; // 0x14
		::RPG::Client::TextID RogueUnlockDetail; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEUNLOCKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueUnlockConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueUnlockConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEUNLOCKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
