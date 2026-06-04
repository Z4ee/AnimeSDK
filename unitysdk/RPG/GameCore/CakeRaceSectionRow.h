#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACESECTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x195F0CF0)
#define RPG_GAMECORE_CAKERACESECTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x195F0E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceSectionRow_TypeDefinitionIndex = 10552;

	class CakeRaceSectionRow : public ::System::Object
	{
	public:
		::System::UInt32 SectionID; // 0x10
		::RPG::GameCore::CakeRaceRegionTag Tag; // 0x14
		::System::UInt32 RegionNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACESECTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceSectionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceSectionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACESECTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
