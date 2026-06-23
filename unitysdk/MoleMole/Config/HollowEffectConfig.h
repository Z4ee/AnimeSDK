#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowEffectCamera.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_HOLLOWEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x192ABFB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowEffectConfig_TypeDefinitionIndex = 86858;

	class HollowEffectConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::HollowEffectCamera Camera; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWEFFECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
