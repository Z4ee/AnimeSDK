#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MONOEFFECTPLUGININITSTATEBYTARGETNORMALIZEDTIME_EFFECTSTATESYNCSET__CTOR_OFFSET UNITYSDK_OFFSET(0xA995DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginInitStateByTargetNormalizedTime_EffectStateSyncSet_TypeDefinitionIndex = 64598;

	class MonoEffectPluginInitStateByTargetNormalizedTime_EffectStateSyncSet : public ::System::Object
	{
	public:
		::System::Single StartNormalizedTime; // 0x10
		::System::Single EndNormalizedTime; // 0x14
		::System::Int32 EffectLayer; // 0x18
		::System::String* EffectState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGININITSTATEBYTARGETNORMALIZEDTIME_EFFECTSTATESYNCSET__CTOR_OFFSET))(this);
		}
	};
}
