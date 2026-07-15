#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PIXAIRSHOPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4CE610)
#define RPG_GAMECORE_PIXAIRSHOPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CE730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirShopRow_TypeDefinitionIndex = 11671;

	class PixAirShopRow : public ::System::Object
	{
	public:
		::System::UInt32 ContentID; // 0x10
		::System::UInt32 RefreshCount; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRSHOPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirShopRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirShopRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRSHOPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
