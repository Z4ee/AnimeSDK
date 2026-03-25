#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAMINAITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17770A70)
#define RPG_GAMECORE_STAMINAITEMCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17771130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StaminaItemConfigRow_TypeDefinitionIndex = 13244;

	class StaminaItemConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 SortWeight; // 0x10
		::System::UInt32 ItemID; // 0x14
		::System::Boolean IsAlwaysShown; // 0x18
		::RPG::Client::TextID Desc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAITEMCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::StaminaItemConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StaminaItemConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAITEMCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
