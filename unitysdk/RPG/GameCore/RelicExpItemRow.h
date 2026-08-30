#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RELICEXPITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D396100)
#define RPG_GAMECORE_RELICEXPITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D396730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicExpItemRow_TypeDefinitionIndex = 14481;

	class RelicExpItemRow : public ::System::Object
	{
	public:
		::System::UInt32 ExpProvide; // 0x10
		::System::UInt32 CoinCost; // 0x14
		::System::UInt32 ItemID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RelicExpItemRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicExpItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
