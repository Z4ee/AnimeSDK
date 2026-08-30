#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSENGAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB0E8A0)
#define RPG_GAMECORE_DRINKMAKERCHEERSENGAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0EB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersEngageRow_TypeDefinitionIndex = 13101;

	class DrinkMakerCheersEngageRow : public ::System::Object
	{
	public:
		::System::String* HeadIconPath; // 0x10
		::RPG::Client::TextID Engage; // 0x18
		::System::UInt32 MatchGroupID; // 0x28
		::System::UInt32 IngredientID; // 0x2C
		::System::Boolean IsProtagonist; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSENGAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DrinkMakerCheersEngageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCheersEngageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSENGAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
