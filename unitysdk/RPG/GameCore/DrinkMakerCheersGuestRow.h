#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERCHEERSGUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18884810)
#define RPG_GAMECORE_DRINKMAKERCHEERSGUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18884BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersGuestRow_TypeDefinitionIndex = 12491;

	class DrinkMakerCheersGuestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SurpriseCommentList; // 0x10
		::Il2CppArray<::System::UInt32>* NextPerformanceID; // 0x18
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 FinishSettlementPerformanceID; // 0x24
		::System::UInt32 DrinkID; // 0x28
		::RPG::Client::TextID SurpriseRequest; // 0x30
		::System::UInt32 PerformanceID; // 0x40
		::System::UInt32 ID; // 0x44
		::System::UInt32 DrinkNamePerformanceID; // 0x48
		::System::UInt32 OneMoreDrinkPerformanceID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSGUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerCheersGuestRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCheersGuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSGUESTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
