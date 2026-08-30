#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLEPASSQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B301140)
#define RPG_GAMECORE_BATTLEPASSQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B301260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePassQuestRow_TypeDefinitionIndex = 12777;

	class BattlePassQuestRow : public ::System::Object
	{
	public:
		::System::Boolean ShowTime; // 0x10
		::System::UInt32 ID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSQUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePassQuestRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePassQuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
