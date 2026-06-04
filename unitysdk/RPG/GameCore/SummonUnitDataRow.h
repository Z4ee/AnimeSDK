#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SummonUnitUniqueGroup.h"
#include "unitysdk/RPG/GameCore/SummonerType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SUMMONUNITDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CD5DA0)
#define RPG_GAMECORE_SUMMONUNITDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD61B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitDataRow_TypeDefinitionIndex = 14442;

	class SummonUnitDataRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::RPG::GameCore::SummonerType SummonerType; // 0x18
		::System::UInt32 MaxSummonCount; // 0x1C
		::RPG::GameCore::SummonUnitUniqueGroup UniqueGroup; // 0x20
		::System::Boolean IsClient; // 0x24
		::System::Boolean DestroyOnEnterBattle; // 0x25
		::System::Boolean IsTeamSummon; // 0x26
		::System::Boolean RemoveMazeBuffOnDestroy; // 0x27
		::System::UInt32 ID; // 0x28
		::RPG::Client::TextID DefaultName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonUnitDataRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonUnitDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
