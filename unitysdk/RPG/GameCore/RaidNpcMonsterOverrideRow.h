#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RAIDNPCMONSTEROVERRIDEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19AACCC0)
#define RPG_GAMECORE_RAIDNPCMONSTEROVERRIDEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19AACF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidNpcMonsterOverrideRow_TypeDefinitionIndex = 13872;

	class RaidNpcMonsterOverrideRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PlaneEventIDList; // 0x10
		::Il2CppArray<::System::UInt32>* NpcMonsterIDList; // 0x18
		::Il2CppArray<::System::UInt32>* ConfigIDList; // 0x20
		::System::UInt32 GroupID; // 0x28
		::System::UInt32 RaidID; // 0x2C
		::System::UInt32 HardLevel; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDNPCMONSTEROVERRIDEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RaidNpcMonsterOverrideRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RaidNpcMonsterOverrideRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDNPCMONSTEROVERRIDEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
