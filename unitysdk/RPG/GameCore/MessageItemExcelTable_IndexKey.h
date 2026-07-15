#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x881AD0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x167710)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x881A30)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x167520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageItemExcelTable_IndexKey_TypeDefinitionIndex = 13880;

	struct alignas(4) MessageItemExcelTable_IndexKey
	{
		::System::UInt32 ID; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::MessageItemExcelTable_IndexKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MessageItemExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
