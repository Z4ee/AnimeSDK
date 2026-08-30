#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PIXAIRBATTLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D78FFD0)
#define RPG_GAMECORE_PIXAIRBATTLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D790250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirBattleRow_TypeDefinitionIndex = 12062;

	class PixAirBattleRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EnemyIDList; // 0x10
		::RPG::GameCore::FixPoint EnemyHealthPercentage; // 0x18
		::System::UInt32 ContentID; // 0x20
		::System::UInt32 EnemyShow; // 0x24
		::RPG::GameCore::FixPoint PlayerHealthPercentage; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRBATTLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirBattleRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirBattleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRBATTLEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
