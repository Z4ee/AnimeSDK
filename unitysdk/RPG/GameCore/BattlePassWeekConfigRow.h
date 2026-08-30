#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BATTLEPASSWEEKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE7C1C0)
#define RPG_GAMECORE_BATTLEPASSWEEKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7C300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePassWeekConfigRow_TypeDefinitionIndex = 12781;

	class BattlePassWeekConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 BPLevelExp; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 BPWeekMaxExp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSWEEKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePassWeekConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePassWeekConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSWEEKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
