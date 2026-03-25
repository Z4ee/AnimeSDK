#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMONSTERELITEDROPITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1763A000)
#define RPG_GAMECORE_ROGUEMONSTERELITEDROPITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1763A120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMonsterEliteDropItemRow_TypeDefinitionIndex = 13420;

	class RogueMonsterEliteDropItemRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MonsterEliteDropItemDisplayList; // 0x10
		::System::UInt32 MonsterEliteDropItemID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERELITEDROPITEMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMonsterEliteDropItemRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMonsterEliteDropItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTERELITEDROPITEMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
