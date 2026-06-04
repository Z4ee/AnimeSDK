#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PIXAIRSUPPLYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A14DD0)
#define RPG_GAMECORE_PIXAIRSUPPLYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19A14E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirSupplyRow_TypeDefinitionIndex = 11583;

	class PixAirSupplyRow : public ::System::Object
	{
	public:
		::System::UInt32 ContentID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRSUPPLYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirSupplyRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirSupplyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRSUPPLYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
