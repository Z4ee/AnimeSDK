#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Photo { class ScopedFrontCameraControlAnimationBlendSpace1DConfig; }

#define MOLEMOLE_CONFIG_SCOPEDFRONTCAMERACONTROLEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3AD20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScopedFrontCameraControlEmotion_TypeDefinitionIndex = 76187;

	class ScopedFrontCameraControlEmotion : public ::System::Object
	{
	public:
		::MoleMole::Photo::ScopedFrontCameraControlAnimationBlendSpace1DConfig* BlendSpace; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCOPEDFRONTCAMERACONTROLEMOTION__CTOR_OFFSET))(this);
		}
	};
}
