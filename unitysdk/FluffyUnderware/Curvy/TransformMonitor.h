#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define FLUFFYUNDERWARE_CURVY_TRANSFORMMONITOR_CHECKFORCHANGES_OFFSET UNITYSDK_OFFSET(0x1C0B9FD0)
#define FLUFFYUNDERWARE_CURVY_TRANSFORMMONITOR_GET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x1C0BD250)
#define FLUFFYUNDERWARE_CURVY_TRANSFORMMONITOR_HAVEGLOBALCOORDINATESCHANGED_OFFSET UNITYSDK_OFFSET(0x1C0BD340)
#define FLUFFYUNDERWARE_CURVY_TRANSFORMMONITOR_MARKCURRENTTRANSFORMASCHECKED_OFFSET UNITYSDK_OFFSET(0x1C0BD270)
#define FLUFFYUNDERWARE_CURVY_TRANSFORMMONITOR_RESETMONITORING_OFFSET UNITYSDK_OFFSET(0x1C0BAC80)
#define FLUFFYUNDERWARE_CURVY_TRANSFORMMONITOR_SET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x1C0BD260)
#define FLUFFYUNDERWARE_CURVY_TRANSFORMMONITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B8F50)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int TransformMonitor_TypeDefinitionIndex = 37193;

	class TransformMonitor : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::System::Boolean monitorPosition; // 0x18
		::System::Boolean monitorScale; // 0x19
		::System::Boolean _HasChanged_k__BackingField; // 0x1A
		::System::Boolean monitorRotation; // 0x1B
		::UnityEngine::Vector3 lastCheckedScale; // 0x1C
		::UnityEngine::Vector3 lastCheckedPosition; // 0x28
		::UnityEngine::Quaternion lastCheckedRotation; // 0x34

		::System::Void _ctor(::UnityEngine::Transform* transformToTrack, ::System::Boolean monitorPosition, ::System::Boolean monitorRotation, ::System::Boolean monitorScale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TRANSFORMMONITOR__CTOR_OFFSET))(this, transformToTrack, monitorPosition, monitorRotation, monitorScale);
		}

		::System::Boolean get_HasChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TRANSFORMMONITOR_GET_HASCHANGED_OFFSET))(this);
		}

		::System::Void set_HasChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TRANSFORMMONITOR_SET_HASCHANGED_OFFSET))(this, value);
		}

		::System::Void ResetMonitoring()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TRANSFORMMONITOR_RESETMONITORING_OFFSET))(this);
		}

		::System::Boolean CheckForChanges()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TRANSFORMMONITOR_CHECKFORCHANGES_OFFSET))(this);
		}

		::System::Boolean HaveGlobalCoordinatesChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TRANSFORMMONITOR_HAVEGLOBALCOORDINATESCHANGED_OFFSET))(this);
		}

		::System::Void MarkCurrentTransformAsChecked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_TRANSFORMMONITOR_MARKCURRENTTRANSFORMASCHECKED_OFFSET))(this);
		}
	};
}
