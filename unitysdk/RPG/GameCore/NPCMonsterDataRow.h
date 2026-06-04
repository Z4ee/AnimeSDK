#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_NPCMONSTERDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199C8300)
#define RPG_GAMECORE_NPCMONSTERDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199C8B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCMonsterDataRow_TypeDefinitionIndex = 13612;

	class NPCMonsterDataRow : public ::System::Object
	{
	public:
		::System::String* DefaultAIPath; // 0x10
		::System::String* JsonPath; // 0x18
		::System::String* ConfigEntityPath; // 0x20
		::System::UInt32 PrototypeID; // 0x28
		::System::UInt32 MiniMapIconType; // 0x2C
		::RPG::Client::TextID NPCName; // 0x30
		::RPG::GameCore::MonsterRank Rank; // 0x40
		::System::UInt32 ID; // 0x44
		::System::UInt32 MappingInfoID; // 0x48
		::System::Boolean IsMazeLink; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NPCMonsterDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NPCMonsterDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
