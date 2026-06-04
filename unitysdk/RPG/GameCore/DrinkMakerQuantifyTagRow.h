#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196C9CB0)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196CA2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerQuantifyTagRow_TypeDefinitionIndex = 12529;

	class DrinkMakerQuantifyTagRow : public ::System::Object
	{
	public:
		::System::UInt32 TagID; // 0x10
		::System::Int32 Value; // 0x14
		::RPG::GameCore::DrinkMakerQuantifyTagType Type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerQuantifyTagRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerQuantifyTagRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
