#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESEFFECTTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D340660)
#define RPG_GAMECORE_PLANETFESEFFECTTYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D340810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesEffectTypeConfigRow_TypeDefinitionIndex = 12120;

	class PlanetFesEffectTypeConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::PlanetFesEffectType ID; // 0x18
		::RPG::Client::TextID Decription; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESEFFECTTYPECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesEffectTypeConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesEffectTypeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESEFFECTTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
