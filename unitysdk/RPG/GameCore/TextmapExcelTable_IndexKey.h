#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_TEXTMAPEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x22BBA30)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22BB980)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1682A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextmapExcelTable_IndexKey_TypeDefinitionIndex = 14492;

	struct alignas(8) TextmapExcelTable_IndexKey
	{
		::RPG::Client::TextID ID; // 0x10

		::System::Void _ctor(::RPG::Client::TextID ID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, ID);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::TextmapExcelTable_IndexKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TextmapExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
