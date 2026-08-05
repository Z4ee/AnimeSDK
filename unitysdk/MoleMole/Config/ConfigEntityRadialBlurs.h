#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityRadialBlur; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLURS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EC340)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityRadialBlurs_TypeDefinitionIndex = 68488;

	class ConfigEntityRadialBlurs : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::UnityEngine::Rendering::Universal::DownSampleLevel DefaultDownSampleLevel; // 0x58
		::UnityEngine::Rendering::Universal::SampleDistanceMode DefaultSampleDistanceMode; // 0x5C
		::System::Single DefaultRadius; // 0x60
		::System::Single DefaultThreshold; // 0x64
		::UnityEngine::Vector2 DefaultCircleRange; // 0x68
		::System::Boolean DefaultForceActiveOverlayDistortion; // 0x70
		::System::Boolean DefaultUseBloomMode; // 0x71
		::System::Single DefaultGlareIntensity; // 0x74
		::System::Single DefaultGlareThreshold; // 0x78
		::System::Single DefaultGlareCenterFadeRange; // 0x7C
		::System::Single DefaultGlareFadeShapeRatio; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRadialBlur*>* RadialBlurs; // 0x88
		::System::Single DefaultRangeRatio; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRADIALBLURS__CTOR_OFFSET))(this);
		}
	};
}
