#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SPECIALRESTARTBATTLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0B66C0)
#define RPG_GAMECORE_SPECIALRESTARTBATTLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B6830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialRestartBattleRow_TypeDefinitionIndex = 15001;

	class SpecialRestartBattleRow : public ::System::Object
	{
	public:
		::System::UInt32 BattleAreaConfigID; // 0x10
		::System::UInt32 TowardEventID; // 0x14
		::System::UInt32 EventID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALRESTARTBATTLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SpecialRestartBattleRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialRestartBattleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALRESTARTBATTLEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
