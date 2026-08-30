#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GACHATOKENSHOPCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D123E50)
#define RPG_GAMECORE_GACHATOKENSHOPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D123F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaTokenShopConfig_TypeDefinitionIndex = 13244;

	class GachaTokenShopConfig : public ::System::Object
	{
	public:
		::System::UInt32 ShopGoodID; // 0x10
		::System::UInt32 ShopID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHATOKENSHOPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GachaTokenShopConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GachaTokenShopConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHATOKENSHOPCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
