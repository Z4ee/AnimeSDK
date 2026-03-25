#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESCARDTHEMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174B9980)
#define RPG_GAMECORE_PLANETFESCARDTHEMEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174B9B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesCardThemeRow_TypeDefinitionIndex = 11137;

	class PlanetFesCardThemeRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* CardIDList; // 0x18
		::System::UInt32 ThemeID; // 0x20
		::RPG::Client::TextID Name; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESCARDTHEMEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesCardThemeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesCardThemeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESCARDTHEMEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
