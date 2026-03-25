#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesSourceSystemType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESEFFECTSOURCEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174B9D90)
#define RPG_GAMECORE_PLANETFESEFFECTSOURCEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174B9F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesEffectSourceRow_TypeDefinitionIndex = 11127;

	class PlanetFesEffectSourceRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::GameCore::PlanetFesSourceSystemType Type; // 0x1C
		::RPG::Client::TextID Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESEFFECTSOURCEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesEffectSourceRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesEffectSourceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESEFFECTSOURCEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
