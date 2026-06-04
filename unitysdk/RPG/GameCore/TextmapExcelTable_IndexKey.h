#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_TEXTMAPEXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x3850640)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3850590)
#define RPG_GAMECORE_TEXTMAPEXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x2C2F090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextmapExcelTable_IndexKey_TypeDefinitionIndex = 14529;

	struct alignas(8) TextmapExcelTable_IndexKey
	{
		::RPG::Client::TextID ID; // 0x10

		::System::Void _ctor(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::TextmapExcelTable_IndexKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TextmapExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTMAPEXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
