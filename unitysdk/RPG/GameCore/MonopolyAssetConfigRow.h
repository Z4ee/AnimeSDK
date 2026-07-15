#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYASSETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B1AFB70)
#define RPG_GAMECORE_MONOPOLYASSETCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1AFEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyAssetConfigRow_TypeDefinitionIndex = 11573;

	class MonopolyAssetConfigRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::System::UInt32 Level; // 0x18
		::RPG::Client::TextID AssetDesc; // 0x20
		::System::UInt32 Price; // 0x30
		::System::UInt32 BonusValue; // 0x34
		::RPG::Client::TextID AssetName; // 0x38
		::System::UInt32 TaxValue; // 0x48
		::System::UInt32 AssetID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYASSETCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyAssetConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyAssetConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYASSETCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
