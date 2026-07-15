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

#define RPG_GAMECORE_EVOLVEBUILDSHOPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C0629D0)
#define RPG_GAMECORE_EVOLVEBUILDSHOPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C062FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildShopRow_TypeDefinitionIndex = 11034;

	class EvolveBuildShopRow : public ::System::Object
	{
	public:
		::System::String* ItemBackground; // 0x10
		::System::String* ItemIcon; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x20
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_1*>* PriceList; // 0x28
		::RPG::GameCore::EvolveBuildSeason Season; // 0x30
		::System::UInt32 MazeBuffID; // 0x34
		::RPG::Client::TextID ShopDesc; // 0x38
		::System::UInt32 ID; // 0x48
		::RPG::Client::TextID TotalBuff; // 0x50
		::RPG::Client::TextID Category; // 0x60
		::RPG::GameCore::EvolveBuildProtductType ShopType; // 0x70
		::System::UInt32 LvMax; // 0x74
		::RPG::Client::TextID BuffTextFormat; // 0x78
		::RPG::Client::TextID Name; // 0x88

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
