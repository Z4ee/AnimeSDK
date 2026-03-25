#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NPCMONSTERMARKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1746D240)
#define RPG_GAMECORE_NPCMONSTERMARKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1746D3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCMonsterMarkRow_TypeDefinitionIndex = 13085;

	class NPCMonsterMarkRow : public ::System::Object
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERMARKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::NPCMonsterMarkRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NPCMonsterMarkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERMARKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
