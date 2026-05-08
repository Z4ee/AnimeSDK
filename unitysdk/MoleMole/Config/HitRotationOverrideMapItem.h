#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class HitEffectMapItem; }

#define MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA4520)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitRotationOverrideMapItem_TypeDefinitionIndex = 76637;

	class HitRotationOverrideMapItem : public ::System::Object
	{
	public:
		::MoleMole::Config::HitEffectMapItem* HitEffectMapItem; // 0x10
		::System::Boolean MuteHitRotate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM__CTOR_OFFSET))(this);
		}
	};
}
