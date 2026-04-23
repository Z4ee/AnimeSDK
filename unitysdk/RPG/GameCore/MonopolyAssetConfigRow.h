#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYASSETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B42FE0)
#define RPG_GAMECORE_MONOPOLYASSETCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B43310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyAssetConfigRow_TypeDefinitionIndex = 11428;

	class MonopolyAssetConfigRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::System::UInt32 AssetID; // 0x18
		::System::UInt32 BonusValue; // 0x1C
		::System::UInt32 Level; // 0x20
		::System::UInt32 TaxValue; // 0x24
		::System::UInt32 Price; // 0x28
		::RPG::Client::TextID AssetName; // 0x30
		::RPG::Client::TextID AssetDesc; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYASSETCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyAssetConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyAssetConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYASSETCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
