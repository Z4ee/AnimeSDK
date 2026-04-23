#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DRINKMAKERCHEERSTYPETEXTMAPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18885140)
#define RPG_GAMECORE_DRINKMAKERCHEERSTYPETEXTMAPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18885430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerCheersTypeTextmapRow_TypeDefinitionIndex = 12483;

	class DrinkMakerCheersTypeTextmapRow : public ::System::Object
	{
	public:
		::System::String* TypeIconPath; // 0x10
		::System::String* TypeProgressBarPath; // 0x18
		::RPG::GameCore::DrinkMakerQuantifyTagType Type; // 0x20
		::System::UInt32 GroupID; // 0x24
		::RPG::Client::TextID QuantifyNameN2; // 0x28
		::RPG::Client::TextID QuantifyNameP2; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSTYPETEXTMAPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DrinkMakerCheersTypeTextmapRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSTYPETEXTMAPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
