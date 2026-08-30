#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NPCMONSTERMARKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE89070)
#define RPG_GAMECORE_NPCMONSTERMARKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE891E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCMonsterMarkRow_TypeDefinitionIndex = 14181;

	class NPCMonsterMarkRow : public ::System::Object
	{
	public:
		::System::UInt32 InstanceID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERMARKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NPCMonsterMarkRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NPCMonsterMarkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERMARKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
