#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEPOWERBYTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1A1BF0)
#define RPG_GAMECORE_IDLELIVEPOWERBYTAGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A1E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLivePowerByTagRow_TypeDefinitionIndex = 11691;

	class IdleLivePowerByTagRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ILBattleAvatarTag AvatarTag; // 0x10
		::System::UInt32 Num; // 0x14
		::RPG::GameCore::FixPoint TagAddPower; // 0x18
		::RPG::GameCore::FixPoint TagPowerFactor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEPOWERBYTAGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLivePowerByTagRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLivePowerByTagRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEPOWERBYTAGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
