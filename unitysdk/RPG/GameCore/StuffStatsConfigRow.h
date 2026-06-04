#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/StuffStats.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STUFFSTATSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CC9530)
#define RPG_GAMECORE_STUFFSTATSCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC9BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StuffStatsConfigRow_TypeDefinitionIndex = 13561;

	class StuffStatsConfigRow : public ::System::Object
	{
	public:
		::System::String* StatsIconPath; // 0x10
		::RPG::GameCore::StuffStats StatsID; // 0x18
		::RPG::Client::TextID MuseumStatsName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STUFFSTATSCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StuffStatsConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StuffStatsConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STUFFSTATSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
