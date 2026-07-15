#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEQUESTEQUIPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B698320)
#define RPG_GAMECORE_IDLELIVEQUESTEQUIPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6985C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestEquipRow_TypeDefinitionIndex = 11356;

	class IdleLiveQuestEquipRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PropertyIDList; // 0x10
		::System::UInt32 QuestID; // 0x18
		::System::UInt32 Level; // 0x1C
		::System::Boolean IsSpecial; // 0x20
		::System::UInt32 EquipID; // 0x24
		::System::UInt32 Rarity; // 0x28
		::System::UInt32 RandomFactorIndex; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTEQUIPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveQuestEquipRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveQuestEquipRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTEQUIPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
