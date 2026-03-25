#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CAKERACEREGIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1704F110)
#define RPG_GAMECORE_CAKERACEREGIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1704F3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceRegionRow_TypeDefinitionIndex = 10291;

	class CakeRaceRegionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::CakeRaceRegionTag>* TagList; // 0x10
		::System::String* RegionJson; // 0x18
		::Il2CppArray<::System::UInt32>* CatIDList; // 0x20
		::Il2CppArray<::System::UInt32>* FieldIDList; // 0x28
		::System::UInt32 RegionID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEREGIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::CakeRaceRegionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceRegionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEREGIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
