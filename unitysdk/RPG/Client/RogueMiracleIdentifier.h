#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_ROGUEMIRACLEIDENTIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF0580)
#define RPG_CLIENT_ROGUEMIRACLEIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleIdentifier_TypeDefinitionIndex = 67281;

	struct alignas(4) RogueMiracleIdentifier
	{
		::System::UInt32 MiracleID; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEIDENTIFIER__CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEIDENTIFIER_TOSTRING_OFFSET))(this);
		}
	};
}
