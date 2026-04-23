#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLANETFESAVATARRARITYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C01980)
#define RPG_GAMECORE_PLANETFESAVATARRARITYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C020E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarRarityRow_TypeDefinitionIndex = 11522;

	class PlanetFesAvatarRarityRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 LevelSkipStarUpDetail; // 0x18
		::System::UInt32 IncomeParam; // 0x1C
		::System::UInt32 Rarity; // 0x20
		::System::UInt32 CostParam; // 0x24
		::System::UInt32 PieceTransferNum; // 0x28
		::RPG::Client::TextID Name; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlanetFesAvatarRarityRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesAvatarRarityRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
