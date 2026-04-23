#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueGambleGroupLevelType.h"
#include "unitysdk/RPG/GameCore/RogueGambleMachineType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNGAMBLEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D75BC0)
#define RPG_GAMECORE_ROGUETOURNGAMBLEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D75E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournGambleGroupRow_TypeDefinitionIndex = 14251;

	class RogueTournGambleGroupRow : public ::System::Object
	{
	public:
		::System::String* GambleGroupIcon; // 0x10
		::RPG::GameCore::RogueGambleMachineType GambleGroupType; // 0x18
		::System::UInt32 GambleGroupID; // 0x1C
		::RPG::GameCore::RogueGambleGroupLevelType GambleGroupLevel; // 0x20
		::RPG::Client::TextID GroupName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNGAMBLEGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournGambleGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournGambleGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNGAMBLEGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
