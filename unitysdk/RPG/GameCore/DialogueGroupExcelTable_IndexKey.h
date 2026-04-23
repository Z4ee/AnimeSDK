#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x299F0)
#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22BA200)
#define RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x299E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueGroupExcelTable_IndexKey_TypeDefinitionIndex = 12409;

	struct alignas(4) DialogueGroupExcelTable_IndexKey
	{
		::System::UInt32 GroupID; // 0x10

		::System::Void _ctor(::System::UInt32 GroupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, GroupID);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::DialogueGroupExcelTable_IndexKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEGROUPEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
