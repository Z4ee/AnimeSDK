#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEGEARTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188C22F0)
#define RPG_GAMECORE_EVOLVEGEARTYPECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188C2AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveGearTypeConfigRow_TypeDefinitionIndex = 10919;

	class EvolveGearTypeConfigRow : public ::System::Object
	{
	public:
		::System::String* TypeImg; // 0x10
		::System::String* MixDetailPropsInfoBg; // 0x18
		::System::String* FontColor; // 0x20
		::System::String* WeaponToastEffectBg; // 0x28
		::System::String* Name; // 0x30
		::System::String* TypeImgColor; // 0x38
		::RPG::GameCore::EvolveBuildSeason Season; // 0x40
		::RPG::GameCore::EvolveGearType ID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEGEARTYPECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EvolveGearTypeConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EvolveGearTypeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEGEARTYPECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
