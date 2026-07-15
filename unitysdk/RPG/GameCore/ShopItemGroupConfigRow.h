#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOPITEMGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BE38300)
#define RPG_GAMECORE_SHOPITEMGROUPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE384B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopItemGroupConfigRow_TypeDefinitionIndex = 14517;

	class ShopItemGroupConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::GroupType GroupType; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 RotateOrder; // 0x18
		::System::UInt32 ItemID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPITEMGROUPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShopItemGroupConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShopItemGroupConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPITEMGROUPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
