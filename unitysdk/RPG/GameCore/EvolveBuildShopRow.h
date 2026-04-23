#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildProtductType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_4;
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEBUILDSHOPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188BC5F0)
#define RPG_GAMECORE_EVOLVEBUILDSHOPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188BCC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildShopRow_TypeDefinitionIndex = 10931;

	class EvolveBuildShopRow : public ::System::Object
	{
	public:
		::System::String* ItemBackground; // 0x10
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_4*>* PriceList; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x20
		::System::String* ItemIcon; // 0x28
		::RPG::Client::TextID ShopDesc; // 0x30
		::RPG::GameCore::EvolveBuildProtductType ShopType; // 0x40
		::RPG::GameCore::EvolveBuildSeason Season; // 0x44
		::RPG::Client::TextID Category; // 0x48
		::System::UInt32 MazeBuffID; // 0x58
		::System::UInt32 ID; // 0x5C
		::System::UInt32 LvMax; // 0x60
		::RPG::Client::TextID TotalBuff; // 0x68
		::RPG::Client::TextID BuffTextFormat; // 0x78
		::RPG::Client::TextID Name; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSHOPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EvolveBuildShopRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EvolveBuildShopRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSHOPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
