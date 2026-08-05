#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ScopedFrontCameraControlEmotion; }

#define MOLEMOLE_CONFIG_SCOPEDFRONTCAMERACONTROLEMOTIONOVERRIDEEFFECTOR_APPLYOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x1487CC60)
#define MOLEMOLE_CONFIG_SCOPEDFRONTCAMERACONTROLEMOTIONOVERRIDEEFFECTOR_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1487CCB0)
#define MOLEMOLE_CONFIG_SCOPEDFRONTCAMERACONTROLEMOTIONOVERRIDEEFFECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1487CDC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScopedFrontCameraControlEmotionOverrideEffector_TypeDefinitionIndex = 55516;

	class ScopedFrontCameraControlEmotionOverrideEffector : public ::System::Object
	{
	public:
		::System::Int32 ClientConditionId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCOPEDFRONTCAMERACONTROLEMOTIONOVERRIDEEFFECTOR__CTOR_OFFSET))(this);
		}

		::System::Void ApplyOverrideConfig(::MoleMole::Config::ScopedFrontCameraControlEmotion* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScopedFrontCameraControlEmotion*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCOPEDFRONTCAMERACONTROLEMOTIONOVERRIDEEFFECTOR_APPLYOVERRIDECONFIG_OFFSET))(this, config);
		}

		::System::Boolean IsMatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCOPEDFRONTCAMERACONTROLEMOTIONOVERRIDEEFFECTOR_ISMATCH_OFFSET))(this);
		}
	};
}
