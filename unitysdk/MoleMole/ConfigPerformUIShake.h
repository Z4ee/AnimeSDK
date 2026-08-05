#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowCameraShake_ShakeAtom.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGPERFORMUISHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B81D130)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigPerformUIShake_TypeDefinitionIndex = 45527;

	class ConfigPerformUIShake : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomY; // 0x10
		::MoleMole::Config::ConfigHollowCameraShake_ShakeAtom AmplitudeAtomX; // 0x30
		::System::Boolean IsYUsingXParams; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPERFORMUISHAKE__CTOR_OFFSET))(this);
		}
	};
}
