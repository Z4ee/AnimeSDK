#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::ActivityIdleLive { class AffixUiData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int EquipUiData_TypeDefinitionIndex = 75122;

	struct alignas(8) EquipUiData
	{
		::RPG::Client::TextID Title; // 0x10
		::System::UInt32 Level; // 0x20
		::System::String* ImagePath; // 0x28
		::RPG::Client::TextID Position; // 0x30
		::System::UInt32 Rarity; // 0x40
		::System::String* RarityBg; // 0x48
		::System::String* RarityIcon; // 0x50
		::System::String* StateName; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::AffixUiData*>* AffixDisplayDatas; // 0x60
		::System::Boolean HasSpecialDesc; // 0x68
		::System::String* SpecialDesc; // 0x70
		::System::Boolean IsSpecialEquip; // 0x78
	};
}
