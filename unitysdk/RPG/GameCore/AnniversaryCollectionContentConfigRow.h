#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AnniversaryCollectionContentRegionScope.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ANNIVERSARYCOLLECTIONCONTENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186A7600)
#define RPG_GAMECORE_ANNIVERSARYCOLLECTIONCONTENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186A7830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnniversaryCollectionContentConfigRow_TypeDefinitionIndex = 11961;

	class AnniversaryCollectionContentConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ContentID; // 0x10
		::System::UInt32 RelatedGotoID; // 0x14
		::System::UInt32 RelatedActivityID; // 0x18
		::RPG::GameCore::AnniversaryCollectionContentRegionScope RegionScope; // 0x1C
		::RPG::Client::TextID ContentTitle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARYCOLLECTIONCONTENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AnniversaryCollectionContentConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnniversaryCollectionContentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANNIVERSARYCOLLECTIONCONTENTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
