#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_NPCMONSTERTRACKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1746D3C0)
#define RPG_GAMECORE_NPCMONSTERTRACKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1746D580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCMonsterTrackConfigRow_TypeDefinitionIndex = 13083;

	class NPCMonsterTrackConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* NPCMonsterMarkList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 MapEntranceID; // 0x1C
		::System::UInt32 SortID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERTRACKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::NPCMonsterTrackConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NPCMonsterTrackConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERTRACKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
