#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"

namespace MoleMole::Config { class ConfigEntityDepthOfFieldEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGDEPTHOFFIELDEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1241A150)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDepthOfFieldEffects_TypeDefinitionIndex = 49903;

	class ConfigDepthOfFieldEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::UnityEngine::Rendering::Universal::DepthOfFieldMode DefaultMode; // 0x58
		::System::Single DefaultGaussianStart; // 0x5C
		::System::Single DefaultGaussianEnd; // 0x60
		::System::Single DefaultGaussianMaxRadius; // 0x64
		::System::Boolean DefaultHighQualitySampling; // 0x68
		::System::Single DefaultFocusDistance; // 0x6C
		::System::Single DefaultFocalLength; // 0x70
		::System::Single DefaultAperture; // 0x74
		::System::Int32 DefaultBladeCount; // 0x78
		::System::Single DefaultBladeCurvature; // 0x7C
		::System::Single DefaultBladeRotation; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>* DepthOfFieldEffects; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDEPTHOFFIELDEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
