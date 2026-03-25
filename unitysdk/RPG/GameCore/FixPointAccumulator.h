#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

#define RPG_GAMECORE_FIXPOINTACCUMULATOR_ADDFP_OFFSET UNITYSDK_OFFSET(0x20EA470)
#define RPG_GAMECORE_FIXPOINTACCUMULATOR_FLOORTOLONGVALUE_OFFSET UNITYSDK_OFFSET(0x5580)
#define RPG_GAMECORE_FIXPOINTACCUMULATOR_GETFRACTIONALPART_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define RPG_GAMECORE_FIXPOINTACCUMULATOR_GETINTEGERPART_OFFSET UNITYSDK_OFFSET(0x5580)
#define RPG_GAMECORE_FIXPOINTACCUMULATOR_RESET_OFFSET UNITYSDK_OFFSET(0x20EA4F0)
#define RPG_GAMECORE_FIXPOINTACCUMULATOR_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x20EA510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixPointAccumulator_TypeDefinitionIndex = 9395;

	struct alignas(8) FixPointAccumulator
	{
		::System::Int64 _integerPart; // 0x10
		::RPG::GameCore::FixPoint _fractionalPart; // 0x18

		::System::Void AddFP(::RPG::GameCore::FixPoint addedFP)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTACCUMULATOR_ADDFP_OFFSET))(this, addedFP);
		}

		::System::Int64 GetIntegerPart()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTACCUMULATOR_GETINTEGERPART_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetFractionalPart()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTACCUMULATOR_GETFRACTIONALPART_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTACCUMULATOR_RESET_OFFSET))(this);
		}

		::System::Int64 FloorToLongValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTACCUMULATOR_FLOORTOLONGVALUE_OFFSET))(this);
		}

		/*
		::System::Decimal ToDecimal()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXPOINTACCUMULATOR_TODECIMAL_OFFSET))(this);
		}
		*/
	};
}
