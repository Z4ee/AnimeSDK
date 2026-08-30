#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B814A0)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B814C0)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B8B2C0)
#define RPG_GAMECORE_MAZEBUFFEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x7DC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBuffExcelTable_IndexKey_TypeDefinitionIndex = 13923;

	struct alignas(4) MazeBuffExcelTable_IndexKey
	{
		::System::UInt32 ID; // 0x10
		::System::UInt32 Lv; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::MazeBuffExcelTable_IndexKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazeBuffExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBUFFEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
