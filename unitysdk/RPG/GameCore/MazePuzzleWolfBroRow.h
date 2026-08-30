#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAZEPUZZLEWOLFBROROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D282220)
#define RPG_GAMECORE_MAZEPUZZLEWOLFBROROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2824D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleWolfBroRow_TypeDefinitionIndex = 13973;

	class MazePuzzleWolfBroRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MonsterGroupIDList; // 0x10
		::Il2CppArray<::System::UInt32>* GroupIDList; // 0x18
		::System::UInt32 CloseState; // 0x20
		::System::UInt32 WolfBroID; // 0x24
		::System::UInt32 StartState; // 0x28
		::System::UInt32 PlaneID; // 0x2C
		::System::UInt32 FloorID; // 0x30
		::System::UInt32 ControlGroupID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFBROROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazePuzzleWolfBroRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePuzzleWolfBroRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFBROROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
