#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FUNNUMMULTIPLIERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DCBD480)
#define RPG_GAMECORE_FUNNUMMULTIPLIERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCBD5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FunNumMultiplierRow_TypeDefinitionIndex = 13111;

	class FunNumMultiplierRow : public ::System::Object
	{
	public:
		::System::UInt32 FunNum; // 0x10
		::RPG::GameCore::FixPoint Multiplier; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNNUMMULTIPLIERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FunNumMultiplierRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FunNumMultiplierRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNNUMMULTIPLIERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
