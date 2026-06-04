#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYSHOPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199A48B0)
#define RPG_GAMECORE_MONOPOLYSHOPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199A49C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyShopConfigRow_TypeDefinitionIndex = 11477;

	class MonopolyShopConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GoodsIDList; // 0x10
		::System::UInt32 ShopID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyShopConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyShopConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
