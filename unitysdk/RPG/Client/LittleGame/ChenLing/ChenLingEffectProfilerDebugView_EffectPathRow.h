#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_EFFECTPATHROW__CTOR_OFFSET UNITYSDK_OFFSET(0x998ECF0)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingEffectProfilerDebugView_EffectPathRow_TypeDefinitionIndex = 63300;

	class ChenLingEffectProfilerDebugView_EffectPathRow : public ::System::Object
	{
	public:
		::System::String* EffectPath; // 0x10
		::System::Int64 TotalRequests; // 0x18
		::System::Int64 SyncRequests; // 0x20
		::System::Int64 AsyncRequests; // 0x28
		::System::Int64 Creates; // 0x30
		::System::Int64 Reuses; // 0x38
		::System::Int64 Removes; // 0x40
		::System::Int64 BlockedByMaxCount; // 0x48
		::System::Int32 CurrentActiveCount; // 0x50
		::System::Int32 PeakActiveCount; // 0x54
		::System::Int32 CurrentPoolCachedCount; // 0x58
		::System::Single ReuseRate; // 0x5C
		::System::Single AvgLifetimeMs; // 0x60
		::System::Int64 LifetimeSampleCount; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGEFFECTPROFILERDEBUGVIEW_EFFECTPATHROW__CTOR_OFFSET))(this);
		}
	};
}
