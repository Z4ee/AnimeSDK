#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOPITEMGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x176F3360)
#define RPG_GAMECORE_SHOPITEMGROUPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x176F3510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopItemGroupConfigRow_TypeDefinitionIndex = 13851;

	class ShopItemGroupConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 RotateOrder; // 0x14
		::RPG::GameCore::GroupType GroupType; // 0x18
		::System::UInt32 GroupID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPITEMGROUPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ShopItemGroupConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShopItemGroupConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPITEMGROUPCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
