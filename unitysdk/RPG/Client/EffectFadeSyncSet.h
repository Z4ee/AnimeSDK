#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_EFFECTFADESYNCSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1772E0F0)

namespace RPG::Client
{
	inline static constexpr unsigned int EffectFadeSyncSet_TypeDefinitionIndex = 66738;

	class EffectFadeSyncSet : public ::System::Object
	{
	public:
		::System::Single StartNormalizedTime; // 0x10
		::System::Single EndNormalizedTime; // 0x14
		::System::Boolean IsNeedFadeout; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTFADESYNCSET__CTOR_OFFSET))(this);
		}
	};
}
