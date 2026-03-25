#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerTagMixType.h"
#include "unitysdk/RPG/GameCore/DrinkMakerTagSourceType.h"
#include "unitysdk/RPG/GameCore/DrinkMakerTagType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17182600)
#define RPG_GAMECORE_DRINKMAKERTAGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17182DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerTagRow_TypeDefinitionIndex = 12003;

	class DrinkMakerTagRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MixParam; // 0x10
		::System::UInt32 Priority; // 0x18
		::System::UInt32 CounterTag; // 0x1C
		::System::UInt32 TagID; // 0x20
		::RPG::Client::TextID TagName; // 0x28
		::RPG::GameCore::DrinkMakerTagMixType MixType; // 0x38
		::RPG::GameCore::DrinkMakerTagType Type; // 0x3C
		::System::Boolean IsShow; // 0x40
		::RPG::GameCore::DrinkMakerTagSourceType SourceType; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERTAGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerTagRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerTagRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERTAGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
