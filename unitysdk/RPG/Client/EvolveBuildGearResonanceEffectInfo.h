#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EvolveBuildGearResonanceEffectType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_EVOLVEBUILDGEARRESONANCEEFFECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB9410B0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildGearResonanceEffectInfo_TypeDefinitionIndex = 59699;

	class EvolveBuildGearResonanceEffectInfo : public ::System::Object
	{
	public:
		::System::Boolean NeedHighlight; // 0x10
		::RPG::Client::EvolveBuildGearResonanceEffectType ResonanceEffectType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDGEARRESONANCEEFFECTINFO__CTOR_OFFSET))(this);
		}
	};
}
