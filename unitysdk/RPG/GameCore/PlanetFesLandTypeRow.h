#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESLANDTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4D8860)
#define RPG_GAMECORE_PLANETFESLANDTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D8FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesLandTypeRow_TypeDefinitionIndex = 11715;

	class PlanetFesLandTypeRow : public ::System::Object
	{
	public:
		::System::String* BigBuffIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* SmallBuffIconPath; // 0x20
		::RPG::GameCore::PlanetFesLandType Type; // 0x28
		::RPG::Client::TextID Name; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesLandTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesLandTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESLANDTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
