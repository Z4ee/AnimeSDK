#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAMINAITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E96610)
#define RPG_GAMECORE_STAMINAITEMCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18E96CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StaminaItemConfigRow_TypeDefinitionIndex = 13706;

	class StaminaItemConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::RPG::Client::TextID Desc; // 0x18
		::System::UInt32 SortWeight; // 0x28
		::System::Boolean IsAlwaysShown; // 0x2C

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
