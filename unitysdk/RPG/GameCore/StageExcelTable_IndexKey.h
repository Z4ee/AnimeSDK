#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_STAGEEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x299F0)
#define RPG_GAMECORE_STAGEEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_GAMECORE_STAGEEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22BA200)
#define RPG_GAMECORE_STAGEEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x299E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageExcelTable_IndexKey_TypeDefinitionIndex = 14363;

	struct alignas(4) StageExcelTable_IndexKey
	{
		::System::UInt32 StageID; // 0x10

		::System::Void _ctor(::System::UInt32 StageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, StageID);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::StageExcelTable_IndexKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StageExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
