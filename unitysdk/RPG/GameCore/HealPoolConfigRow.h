#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HEALPOOLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1981E5B0)
#define RPG_GAMECORE_HEALPOOLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1981E720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HealPoolConfigRow_TypeDefinitionIndex = 13067;

	class HealPoolConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 MaxHealPool; // 0x10
		::System::UInt32 RecoverTime; // 0x14
		::System::UInt32 PlayerLevel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEALPOOLCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HealPoolConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HealPoolConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEALPOOLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
