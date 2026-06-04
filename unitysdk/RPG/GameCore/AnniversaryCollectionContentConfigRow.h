#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AnniversaryCollectionContentRegionScope.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ANNIVERSARYCOLLECTIONCONTENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1947BF90)
#define RPG_GAMECORE_ANNIVERSARYCOLLECTIONCONTENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1947C1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnniversaryCollectionContentConfigRow_TypeDefinitionIndex = 12054;

	class AnniversaryCollectionContentConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ContentTitle; // 0x10
		::System::UInt32 RelatedActivityID; // 0x20
		::RPG::GameCore::AnniversaryCollectionContentRegionScope RegionScope; // 0x24
		::System::UInt32 ContentID; // 0x28
		::System::UInt32 RelatedGotoID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARYCOLLECTIONCONTENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnniversaryCollectionContentConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnniversaryCollectionContentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARYCOLLECTIONCONTENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
