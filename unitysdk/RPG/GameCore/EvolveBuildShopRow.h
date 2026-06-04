#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildProtductType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_1;
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEBUILDSHOPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196FA050)
#define RPG_GAMECORE_EVOLVEBUILDSHOPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196FA650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildShopRow_TypeDefinitionIndex = 10984;

	class EvolveBuildShopRow : public ::System::Object
	{
	public:
		::System::String* ItemIcon; // 0x10
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_1*>* PriceList; // 0x18
		::System::String* ItemBackground; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x28
		::RPG::Client::TextID TotalBuff; // 0x30
		::RPG::Client::TextID Name; // 0x40
		::RPG::GameCore::EvolveBuildSeason Season; // 0x50
		::RPG::GameCore::EvolveBuildProtductType ShopType; // 0x54
		::RPG::Client::TextID Category; // 0x58
		::RPG::Client::TextID ShopDesc; // 0x68
		::System::UInt32 MazeBuffID; // 0x78
		::System::UInt32 LvMax; // 0x7C
		::RPG::Client::TextID BuffTextFormat; // 0x80
		::System::UInt32 ID; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSHOPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EvolveBuildShopRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EvolveBuildShopRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSHOPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
