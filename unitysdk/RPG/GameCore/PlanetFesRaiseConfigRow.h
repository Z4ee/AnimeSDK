#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESRAISECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174BF320)
#define RPG_GAMECORE_PLANETFESRAISECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174BF460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesRaiseConfigRow_TypeDefinitionIndex = 11174;

	class PlanetFesRaiseConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 RaiseValue; // 0x10
		::System::UInt32 GoldCost; // 0x14
		::System::UInt32 RaiseCurveID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESRAISECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesRaiseConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesRaiseConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESRAISECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
