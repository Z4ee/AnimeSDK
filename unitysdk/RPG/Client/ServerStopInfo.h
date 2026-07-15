#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_SERVERSTOPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19F403D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ServerStopInfo_TypeDefinitionIndex = 66291;

	class ServerStopInfo : public ::System::Object
	{
	public:
		::System::String* StopDesc; // 0x10
		::System::Int64 StopEndTime; // 0x18
		::System::Int64 StopBeginTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSTOPINFO__CTOR_OFFSET))(this);
		}
	};
}
