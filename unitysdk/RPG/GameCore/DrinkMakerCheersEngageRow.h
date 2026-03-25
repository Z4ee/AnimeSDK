#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSENGAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17176BD0)
#define RPG_GAMECORE_DRINKMAKERCHEERSENGAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17176E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersEngageRow_TypeDefinitionIndex = 12052;

	class DrinkMakerCheersEngageRow : public ::System::Object
	{
	public:
		::System::String* HeadIconPath; // 0x10
		::RPG::Client::TextID Engage; // 0x18
		::System::UInt32 IngredientID; // 0x28
		::System::Boolean IsProtagonist; // 0x2C
		::System::UInt32 MatchGroupID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSENGAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerCheersEngageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCheersEngageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSENGAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
