#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesUnitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESBIGINT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A18360)
#define RPG_GAMECORE_PLANETFESBIGINT__CTOR_OFFSET UNITYSDK_OFFSET(0x19A1A9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesBigInt_TypeDefinitionIndex = 11609;

	class PlanetFesBigInt : public ::System::Object
	{
	public:
		::RPG::GameCore::PlanetFesUnitType unit; // 0x10
		::System::UInt32 base_value; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBIGINT__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesBigInt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesBigInt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESBIGINT_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
