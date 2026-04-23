#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TALKDEBATECOUNTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB278E90)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkDebateCountInfo_TypeDefinitionIndex = 55966;

	class TalkDebateCountInfo : public ::System::Object
	{
	public:
		::System::Int32 LastCount; // 0x10
		::System::Int32 CurrentCount; // 0x14
		::System::Int32 MaxCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKDEBATECOUNTINFO__CTOR_OFFSET))(this);
		}
	};
}
