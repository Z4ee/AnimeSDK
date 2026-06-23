#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/VSignalSourceAsset.h"
#include "unitysdk/MoleMole/Cameras/VTransformNoiseParams.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CAMERAS_VNOISESETTINGS_GETCOMBINEDFILTERRESULTS_OFFSET UNITYSDK_OFFSET(0x110821A0)
#define MOLEMOLE_CAMERAS_VNOISESETTINGS_GETSIGNAL_OFFSET UNITYSDK_OFFSET(0x11082330)
#define MOLEMOLE_CAMERAS_VNOISESETTINGS_GET_SIGNALDURATION_OFFSET UNITYSDK_OFFSET(0x11082320)
#define MOLEMOLE_CAMERAS_VNOISESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x11082460)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VNoiseSettings_TypeDefinitionIndex = 72415;

	class VNoiseSettings : public ::MoleMole::Cameras::VSignalSourceAsset
	{
	public:
		::Il2CppArray<::MoleMole::Cameras::VTransformNoiseParams>* PositionNoise; // 0x58
		::Il2CppArray<::MoleMole::Cameras::VTransformNoiseParams>* OrientationNoise; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VNOISESETTINGS__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 GetCombinedFilterResults(::Il2CppArray<::MoleMole::Cameras::VTransformNoiseParams>* noiseParams, ::System::Single time, ::UnityEngine::Vector3 timeOffsets)
		{
			return ((::UnityEngine::Vector3(*)(::Il2CppArray<::MoleMole::Cameras::VTransformNoiseParams>*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VNOISESETTINGS_GETCOMBINEDFILTERRESULTS_OFFSET))(noiseParams, time, timeOffsets);
		}

		::System::Single get_SignalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VNOISESETTINGS_GET_SIGNALDURATION_OFFSET))(this);
		}

		::System::Void GetSignal(::System::Single timeSinceSignalStart, ::UnityEngine::Vector3& pos, ::UnityEngine::Quaternion& rot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VNOISESETTINGS_GETSIGNAL_OFFSET))(this, timeSinceSignalStart, pos, rot);
		}
	};
}
