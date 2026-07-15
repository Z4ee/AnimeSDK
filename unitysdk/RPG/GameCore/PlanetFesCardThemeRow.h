#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESCARDTHEMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4D6250)
#define RPG_GAMECORE_PLANETFESCARDTHEMEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D6450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesCardThemeRow_TypeDefinitionIndex = 11739;

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

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesCardThemeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesCardThemeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESCARDTHEMEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
