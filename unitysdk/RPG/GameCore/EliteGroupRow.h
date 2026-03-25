#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELITEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17193430)
#define RPG_GAMECORE_ELITEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17193C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EliteGroupRow_TypeDefinitionIndex = 12980;

	class EliteGroupRow : public ::System::Object
	{
	public:
		::System::UInt32 EliteGroup; // 0x10
		::RPG::GameCore::FixPoint SpeedRatio; // 0x18
		::RPG::GameCore::FixPoint HPRatio; // 0x20
		::RPG::GameCore::FixPoint DefenceRatio; // 0x28
		::RPG::GameCore::FixPoint AttackRatio; // 0x30
		::RPG::GameCore::FixPoint StanceRatio; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EliteGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EliteGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
