#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERDAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BB1EC10)
#define RPG_GAMECORE_DRINKMAKERDAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB1F230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerDayRow_TypeDefinitionIndex = 12681;

	class DrinkMakerDayRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FinishDaySubMissionIDList; // 0x10
		::Il2CppArray<::System::UInt32>* GuestSequenceList; // 0x18
		::System::UInt32 DayID; // 0x20
		::System::UInt32 CanStartSubMissionID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerDayRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerDayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDAYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
