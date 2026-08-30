#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x2E960)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5F00)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B81680)
#define RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x2E950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideRogueTabExcelTable_IndexKey_TypeDefinitionIndex = 13286;

	struct alignas(4) GuideRogueTabExcelTable_IndexKey
	{
		::System::UInt32 ID; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::GuideRogueTabExcelTable_IndexKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
