#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A1C3C0)
#define RPG_GAMECORE_PLANETFESEFFECTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19A1C5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesEffectRow_TypeDefinitionIndex = 11627;

	class PlanetFesEffectRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TypeParam; // 0x10
		::System::UInt32 SourceID; // 0x18
		::RPG::GameCore::PlanetFesEffectType Type; // 0x1C
		::System::UInt32 ID; // 0x20
		::System::UInt32 Duration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESEFFECTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesEffectRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesEffectRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
