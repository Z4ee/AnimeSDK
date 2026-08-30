#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STAMINAEXCHANGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CAF0600)
#define RPG_GAMECORE_STAMINAEXCHANGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF0BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StaminaExchangeRow_TypeDefinitionIndex = 14339;

	class StaminaExchangeRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Price; // 0x10
		::System::UInt32 Times; // 0x18
		::System::UInt32 ToStamina; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StaminaExchangeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StaminaExchangeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAMINAEXCHANGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
