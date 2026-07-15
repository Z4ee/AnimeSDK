#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_ROGUEMIRACLEIDENTIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x39E6930)
#define RPG_CLIENT_ROGUEMIRACLEIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x167520)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleIdentifier_TypeDefinitionIndex = 64284;

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
