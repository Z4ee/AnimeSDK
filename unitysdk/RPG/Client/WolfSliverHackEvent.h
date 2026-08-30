#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_WOLFSLIVERHACKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xE437A40)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfSliverHackEvent_TypeDefinitionIndex = 65245;

	class WolfSliverHackEvent : public ::System::Object
	{
	public:
		::System::UInt32 CurHP; // 0x10
		::System::UInt32 HPMax; // 0x14
		::System::UInt32 HPMin; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFSLIVERHACKEVENT__CTOR_OFFSET))(this);
		}
	};
}
