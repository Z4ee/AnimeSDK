#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_INDEXKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x3AA7970)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19050)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_INDEXKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3AA78C0)
#define RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_INDEXKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x148D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTalkNameColorExcelTable_IndexKey_TypeDefinitionIndex = 14648;

	struct alignas(8) RogueTalkNameColorExcelTable_IndexKey
	{
		::RPG::Client::TextID TextmapID; // 0x10

		::System::Void _ctor(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_INDEXKEY__CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_INDEXKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_INDEXKEY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLOREXCELTABLE_INDEXKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
