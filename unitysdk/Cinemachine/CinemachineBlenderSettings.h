#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/CinemachineBlenderSettings_CustomBlend.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }

#define CINEMACHINE_CINEMACHINEBLENDERSETTINGS_GETBLENDFORVIRTUALCAMERAS_OFFSET UNITYSDK_OFFSET(0x1F38DD20)
#define CINEMACHINE_CINEMACHINEBLENDERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F38E050)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBlenderSettings_TypeDefinitionIndex = 34735;

	class CinemachineBlenderSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		// static const ::System::String* kBlendFromAnyCameraLabel; // 0x0
		::Il2CppArray<::Cinemachine::CinemachineBlenderSettings_CustomBlend>* m_CustomBlends; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDERSETTINGS__CTOR_OFFSET))(this);
		}

		::Cinemachine::CinemachineBlendDefinition GetBlendForVirtualCameras(::System::String* fromCameraName, ::System::String* toCameraName, ::Cinemachine::CinemachineBlendDefinition defaultBlend)
		{
			return ((::Cinemachine::CinemachineBlendDefinition(*)(::PVOID, ::System::String*, ::System::String*, ::Cinemachine::CinemachineBlendDefinition))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDERSETTINGS_GETBLENDFORVIRTUALCAMERAS_OFFSET))(this, fromCameraName, toCameraName, defaultBlend);
		}
	};
}
