#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x299F0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22BA200)
#define RPG_GAMECORE_SUBMISSIONEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x299E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubMissionExcelTable_IndexKey_TypeDefinitionIndex = 13396;

	struct alignas(4) SubMissionExcelTable_IndexKey
	{
		::System::UInt32 SubMissionID; // 0x10

		::System::Void _ctor(::System::UInt32 SubMissionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, SubMissionID);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::SubMissionExcelTable_IndexKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SubMissionExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBMISSIONEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
