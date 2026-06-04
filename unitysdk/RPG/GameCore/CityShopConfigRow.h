#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CITYSHOPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19650770)
#define RPG_GAMECORE_CITYSHOPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19650F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CityShopConfigRow_TypeDefinitionIndex = 12426;

	class CityShopConfigRow : public ::System::Object
	{
	public:
		::System::String* WorldImgPath; // 0x10
		::System::UInt32 HintOverNum; // 0x18
		::System::UInt32 MaxLevel; // 0x1C
		::System::UInt32 ShopID; // 0x20
		::System::UInt32 RewardListGroupID; // 0x24
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 ItemID; // 0x38
		::System::UInt32 WorldID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CityShopConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CityShopConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
