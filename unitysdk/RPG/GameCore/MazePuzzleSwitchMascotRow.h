#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_13;
class Class_1_ADE34076259CCCF7_2;
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLESWITCHMASCOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D264500)
#define RPG_GAMECORE_MAZEPUZZLESWITCHMASCOTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2648E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleSwitchMascotRow_TypeDefinitionIndex = 13987;

	class MazePuzzleSwitchMascotRow : public ::System::Object
	{
	public:
		::System::String* ColliderPath; // 0x10
		::Il2CppArray<::System::UInt32>* ChestID; // 0x18
		::Il2CppArray<::Class_1_ADE34076259CCCF7_2*>* Section1LoadEntityList; // 0x20
		::Il2CppArray<::Class_1_ADE34076259CCCF7_2*>* Section3LoadEntityList; // 0x28
		::Il2CppArray<::System::UInt32>* EntryBlackHoleID; // 0x30
		::Il2CppArray<::System::UInt32>* ControllerBlackHoleID; // 0x38
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_13*>* CoinPropID; // 0x40
		::Il2CppArray<::Class_1_ADE34076259CCCF7_2*>* Section2LoadEntityList; // 0x48
		::System::UInt32 PlaneID; // 0x50
		::System::UInt32 FloorID; // 0x54
		::System::UInt32 SwitchID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESWITCHMASCOTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazePuzzleSwitchMascotRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePuzzleSwitchMascotRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESWITCHMASCOTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
