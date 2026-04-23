#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLEPASSQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186FFE60)
#define RPG_GAMECORE_BATTLEPASSQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186FFF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePassQuestRow_TypeDefinitionIndex = 12166;

	class BattlePassQuestRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Boolean ShowTime; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSQUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BattlePassQuestRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePassQuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSQUESTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
