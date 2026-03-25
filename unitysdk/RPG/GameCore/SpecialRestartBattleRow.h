#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SPECIALRESTARTBATTLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1775F250)
#define RPG_GAMECORE_SPECIALRESTARTBATTLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1775F3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialRestartBattleRow_TypeDefinitionIndex = 13901;

	class SpecialRestartBattleRow : public ::System::Object
	{
	public:
		::System::UInt32 EventID; // 0x10
		::System::UInt32 BattleAreaConfigID; // 0x14
		::System::UInt32 TowardEventID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALRESTARTBATTLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SpecialRestartBattleRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialRestartBattleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALRESTARTBATTLEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
