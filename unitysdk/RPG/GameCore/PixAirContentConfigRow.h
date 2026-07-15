#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirContentRarity.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PIXAIRCONTENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4CA550)
#define RPG_GAMECORE_PIXAIRCONTENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CA840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirContentConfigRow_TypeDefinitionIndex = 11669;

	class PixAirContentConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CoreTagIndexList; // 0x10
		::System::UInt32 ContentID; // 0x18
		::RPG::GameCore::PixAirEquipTag Tag; // 0x1C
		::RPG::Client::TextID Name; // 0x20
		::RPG::Client::TextID EventOptionDescribe; // 0x30
		::RPG::GameCore::PixAirContentRarity Rarity; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRCONTENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirContentConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirContentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRCONTENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
