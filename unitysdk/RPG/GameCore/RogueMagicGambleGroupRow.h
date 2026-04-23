#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueGambleGroupLevelType.h"
#include "unitysdk/RPG/GameCore/RogueGambleMachineType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICGAMBLEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D210C0)
#define RPG_GAMECORE_ROGUEMAGICGAMBLEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D21290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicGambleGroupRow_TypeDefinitionIndex = 14093;

	class RogueMagicGambleGroupRow : public ::System::Object
	{
	public:
		::System::String* GambleGroupIcon; // 0x10
		::RPG::GameCore::RogueGambleGroupLevelType GambleGroupLevel; // 0x18
		::RPG::GameCore::RogueGambleMachineType GambleGroupType; // 0x1C
		::System::UInt32 GambleGroupID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICGAMBLEGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMagicGambleGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicGambleGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICGAMBLEGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
