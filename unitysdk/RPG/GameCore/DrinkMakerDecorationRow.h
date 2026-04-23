#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERDECORATIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188868D0)
#define RPG_GAMECORE_DRINKMAKERDECORATIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18886B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerDecorationRow_TypeDefinitionIndex = 12452;

	class DrinkMakerDecorationRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* CupAnchoPath; // 0x18
		::Il2CppArray<::System::UInt32>* IncludeTagList; // 0x20
		::System::String* PrefabPath; // 0x28
		::System::UInt32 DecorationID; // 0x30
		::RPG::Client::TextID DecorationName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDECORATIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerDecorationRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerDecorationRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERDECORATIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
