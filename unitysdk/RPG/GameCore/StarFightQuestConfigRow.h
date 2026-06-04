#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STARFIGHTQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CB59E0)
#define RPG_GAMECORE_STARFIGHTQUESTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB5FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StarFightQuestConfigRow_TypeDefinitionIndex = 11819;

	class StarFightQuestConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 BattleTargetID; // 0x10
		::System::UInt32 ID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARFIGHTQUESTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StarFightQuestConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StarFightQuestConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARFIGHTQUESTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
