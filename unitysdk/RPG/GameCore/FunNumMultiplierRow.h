#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FUNNUMMULTIPLIERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17221C20)
#define RPG_GAMECORE_FUNNUMMULTIPLIERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17221D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FunNumMultiplierRow_TypeDefinitionIndex = 12062;

	class FunNumMultiplierRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint Multiplier; // 0x10
		::System::UInt32 FunNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNNUMMULTIPLIERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FunNumMultiplierRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FunNumMultiplierRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNNUMMULTIPLIERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
