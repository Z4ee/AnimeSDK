#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EvolveBuildGearResonanceEffectType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_EVOLVEBUILDGEARRESONANCEEFFECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xCE1C840)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildGearResonanceEffectInfo_TypeDefinitionIndex = 63775;

	class EvolveBuildGearResonanceEffectInfo : public ::System::Object
	{
	public:
		::RPG::Client::EvolveBuildGearResonanceEffectType ResonanceEffectType; // 0x10
		::System::Boolean NeedHighlight; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARRESONANCEEFFECTINFO__CTOR_OFFSET))(this);
		}
	};
}
