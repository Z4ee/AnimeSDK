#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_STATUSEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x29140)
#define RPG_GAMECORE_STATUSEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_GAMECORE_STATUSEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20E8410)
#define RPG_GAMECORE_STATUSEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x29130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StatusExcelTable_IndexKey_TypeDefinitionIndex = 13912;

	struct alignas(4) StatusExcelTable_IndexKey
	{
		::System::UInt32 StatusID; // 0x10

		::System::Void _ctor(::System::UInt32 StatusID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, StatusID);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::StatusExcelTable_IndexKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StatusExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATUSEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
