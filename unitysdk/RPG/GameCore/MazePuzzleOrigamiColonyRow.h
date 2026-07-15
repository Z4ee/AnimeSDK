#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_MAZEPUZZLEORIGAMICOLONYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF50F70)
#define RPG_GAMECORE_MAZEPUZZLEORIGAMICOLONYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF51190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleOrigamiColonyRow_TypeDefinitionIndex = 13550;

	class MazePuzzleOrigamiColonyRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* MaterialCost; // 0x10
		::System::UInt32 OrigamiColonyID; // 0x18
		::System::UInt32 MirrorFloorID; // 0x1C
		::System::UInt32 FloorID; // 0x20
		::System::UInt32 FinishQuestID; // 0x24
		::System::UInt32 TalkSentenceID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEORIGAMICOLONYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazePuzzleOrigamiColonyRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePuzzleOrigamiColonyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEORIGAMICOLONYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
