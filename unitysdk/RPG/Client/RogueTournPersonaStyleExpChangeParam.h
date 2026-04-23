#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEEXPCHANGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB0FF0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleExpChangeParam_TypeDefinitionIndex = 61750;

	class RogueTournPersonaStyleExpChangeParam : public ::System::Object
	{
	public:
		::System::Int32 DeltaExp; // 0x10
		::System::UInt32 OldLevel; // 0x14
		::System::UInt32 NewExp; // 0x18
		::System::UInt32 NewLevel; // 0x1C
		::System::UInt32 OldExp; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEEXPCHANGEPARAM__CTOR_OFFSET))(this);
		}
	};
}
