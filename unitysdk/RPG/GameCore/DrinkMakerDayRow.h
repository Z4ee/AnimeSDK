#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERDAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171791F0)
#define RPG_GAMECORE_DRINKMAKERDAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17179800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerDayRow_TypeDefinitionIndex = 12023;

	class DrinkMakerDayRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FinishDaySubMissionIDList; // 0x10
		::Il2CppArray<::System::UInt32>* GuestSequenceList; // 0x18
		::System::UInt32 CanStartSubMissionID; // 0x20
		::System::UInt32 DayID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerDayRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerDayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
