#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelItemType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelItemVendor.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFC7FF0)
#define RPG_GAMECORE_CHIMERADUELITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC8380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelItemRow_TypeDefinitionIndex = 11112;

	class ChimeraDuelItemRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x10
		::System::String* ShopItemIconPath; // 0x18
		::System::String* ChimeraItemIconPath; // 0x20
		::RPG::GameCore::ChimeraDuelItemVendor Vendor; // 0x28
		::System::UInt32 EffectID; // 0x2C
		::System::UInt32 Rarity; // 0x30
		::System::UInt32 Price; // 0x34
		::RPG::Client::TextID ItemName; // 0x38
		::System::UInt32 ItemID; // 0x48
		::RPG::GameCore::ChimeraDuelItemType Type; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELITEMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelItemRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
