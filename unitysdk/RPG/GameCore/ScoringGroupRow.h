#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SCORINGGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18DFF110)
#define RPG_GAMECORE_SCORINGGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18DFF770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScoringGroupRow_TypeDefinitionIndex = 12179;

	class ScoringGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ScoringIDList; // 0x10
		::RPG::Client::TextID ScoreName; // 0x18
		::RPG::GameCore::BattleScoringDisplayType DisplayType; // 0x28
		::System::UInt32 ScoringGroupID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCORINGGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ScoringGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ScoringGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCORINGGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
