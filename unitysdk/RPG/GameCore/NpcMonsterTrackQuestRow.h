#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NPCMONSTERTRACKQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18BC1210)
#define RPG_GAMECORE_NPCMONSTERTRACKQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC1820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcMonsterTrackQuestRow_TypeDefinitionIndex = 13782;

	class NpcMonsterTrackQuestRow : public ::System::Object
	{
	public:
		::System::UInt32 QuestID; // 0x10
		::System::UInt32 NpcMonsterTrackID; // 0x14
		::System::UInt32 MapInfoID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERTRACKQUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::NpcMonsterTrackQuestRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcMonsterTrackQuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERTRACKQUESTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
