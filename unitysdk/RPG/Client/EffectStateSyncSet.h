#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_EFFECTSTATESYNCSET__CTOR_OFFSET UNITYSDK_OFFSET(0xA1B9670)

namespace RPG::Client
{
	inline static constexpr unsigned int EffectStateSyncSet_TypeDefinitionIndex = 64414;

	class EffectStateSyncSet : public ::System::Object
	{
	public:
		::System::Single StartNormalizedTime; // 0x10
		::System::Single EndNormalizedTime; // 0x14
		::System::String* EffectState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTSTATESYNCSET__CTOR_OFFSET))(this);
		}
	};
}
