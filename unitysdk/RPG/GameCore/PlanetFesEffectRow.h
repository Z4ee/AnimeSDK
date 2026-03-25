#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174B9B90)
#define RPG_GAMECORE_PLANETFESEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174B9D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesEffectRow_TypeDefinitionIndex = 11125;

	class PlanetFesEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x10
		::System::UInt32 SourceID; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 Duration; // 0x20
		::RPG::GameCore::PlanetFesEffectType Type; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesEffectRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESEFFECTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
