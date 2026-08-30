#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_14.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class AlleyEventRow; }

#define RPG_CLIENT_ALLEYEVENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x3B03D80)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyEventInfo_TypeDefinitionIndex = 62340;

	struct alignas(8) AlleyEventInfo
	{
		::RPG::GameCore::AlleyEventRow* EventInfo; // 0x10
		::Enum_3_DB663931210BBC27_14 EventState; // 0x18
		::System::UInt32 AcceptCount; // 0x1C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYEVENTINFO__CTOR_OFFSET))(this, a1);
		}
	};
}
