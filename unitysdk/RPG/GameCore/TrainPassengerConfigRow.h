#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPASSENGERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178B15F0)
#define RPG_GAMECORE_TRAINPASSENGERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178B1710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPassengerConfigRow_TypeDefinitionIndex = 14096;

	class TrainPassengerConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BehaviorList; // 0x10
		::System::UInt32 PassengerID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPASSENGERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPassengerConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPassengerConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPASSENGERCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
