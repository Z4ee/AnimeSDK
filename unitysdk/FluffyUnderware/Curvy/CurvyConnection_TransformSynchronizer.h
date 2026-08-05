#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvyConnection; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace FluffyUnderware::Curvy { class TransformMonitor; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_APPLYTRANSFORMTOCONNECTION_OFFSET UNITYSDK_OFFSET(0x1F7A66D0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_APPLYTRANSFORMTOCPS_OFFSET UNITYSDK_OFFSET(0x1F7A6740)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_APPLYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F7A4A60)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_ENSURECPSMONITORISVALID_OFFSET UNITYSDK_OFFSET(0x1F7A5830)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_GETCONNECTIONMONITORCHANGES_OFFSET UNITYSDK_OFFSET(0x1F7A59C0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_GETCPMONITORCHANGES_OFFSET UNITYSDK_OFFSET(0x1F7A62E0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_GETCPSMONITORCHANGES_OFFSET UNITYSDK_OFFSET(0x1F7A5C60)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_GETMONITORCHANGES_OFFSET UNITYSDK_OFFSET(0x1F7A5860)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_GET_CONNECTIONMONITOR_OFFSET UNITYSDK_OFFSET(0x1F7A5090)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_GET_ISCPSMONITORVALID_OFFSET UNITYSDK_OFFSET(0x1F7A58A0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_ISCPTRIGGERINGTRANSFORMCHANGE_OFFSET UNITYSDK_OFFSET(0x1F7A6430)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_ONCONTROLPOINTSUPDATED_OFFSET UNITYSDK_OFFSET(0x1F7A37F0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7A4C60)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_RESETCONNECTIONMONITORING_OFFSET UNITYSDK_OFFSET(0x1F7A6D00)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_RESETCPSMONITORING_OFFSET UNITYSDK_OFFSET(0x1F7A5390)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_RESETMONITORING_OFFSET UNITYSDK_OFFSET(0x1F7A3500)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A32B0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER__GET_ISCPSMONITORVALID_B__10_0_OFFSET UNITYSDK_OFFSET(0x1F7A6F30)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyConnection_TransformSynchronizer_TypeDefinitionIndex = 39490;

	class CurvyConnection_TransformSynchronizer : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>>* monitoredCPCoordinated; // 0x10
		::FluffyUnderware::Curvy::TransformMonitor* connectionMonitor; // 0x18
		::FluffyUnderware::Curvy::CurvyConnection* connection; // 0x20

		::System::Void _ctor(::FluffyUnderware::Curvy::CurvyConnection* connection)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyConnection*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER__CTOR_OFFSET))(this, connection);
		}

		::FluffyUnderware::Curvy::TransformMonitor* get_ConnectionMonitor()
		{
			return ((::FluffyUnderware::Curvy::TransformMonitor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_GET_CONNECTIONMONITOR_OFFSET))(this);
		}

		::System::Void OnControlPointsUpdated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_ONCONTROLPOINTSUPDATED_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_ONUPDATE_OFFSET))(this);
		}

		::System::Void EnsureCPsMonitorIsValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_ENSURECPSMONITORISVALID_OFFSET))(this);
		}

		::System::Boolean get_IsCPsMonitorValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_GET_ISCPSMONITORVALID_OFFSET))(this);
		}

		::System::Void GetMonitorChanges(::System::Nullable_1<::UnityEngine::Vector3>& positionChange, ::System::Nullable_1<::UnityEngine::Quaternion>& rotationChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>&, ::System::Nullable_1<::UnityEngine::Quaternion>&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_GETMONITORCHANGES_OFFSET))(this, positionChange, rotationChange);
		}

		::System::Boolean GetConnectionMonitorChanges(::System::Nullable_1<::UnityEngine::Vector3>& positionChange, ::System::Nullable_1<::UnityEngine::Quaternion>& rotationChange)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>&, ::System::Nullable_1<::UnityEngine::Quaternion>&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_GETCONNECTIONMONITORCHANGES_OFFSET))(this, positionChange, rotationChange);
		}

		::System::Void GetCPsMonitorChanges(::System::Nullable_1<::UnityEngine::Vector3>& position, ::System::Nullable_1<::UnityEngine::Quaternion>& rotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>&, ::System::Nullable_1<::UnityEngine::Quaternion>&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_GETCPSMONITORCHANGES_OFFSET))(this, position, rotation);
		}

		::System::Void GetCPMonitorChanges(::FluffyUnderware::Curvy::CurvySplineSegment* controlPoint, ::System::Nullable_1<::UnityEngine::Vector3>& position, ::System::Nullable_1<::UnityEngine::Quaternion>& rotation)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Nullable_1<::UnityEngine::Vector3>&, ::System::Nullable_1<::UnityEngine::Quaternion>&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_GETCPMONITORCHANGES_OFFSET))(this, controlPoint, position, rotation);
		}

		::System::Void IsCPTriggeringTransformChange(::FluffyUnderware::Curvy::CurvySplineSegment* controlPoint, ::System::Boolean& syncPosition, ::System::Boolean& syncRotation)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_ISCPTRIGGERINGTRANSFORMCHANGE_OFFSET))(this, controlPoint, syncPosition, syncRotation);
		}

		::System::Void ApplyTransform(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_APPLYTRANSFORM_OFFSET))(this, position, rotation);
		}

		::System::Void ApplyTransformToConnection(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_APPLYTRANSFORMTOCONNECTION_OFFSET))(this, position, rotation);
		}

		::System::Void ApplyTransformToCPs(::UnityEngine::Vector3 referencePosition, ::UnityEngine::Quaternion referenceRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_APPLYTRANSFORMTOCPS_OFFSET))(this, referencePosition, referenceRotation);
		}

		::System::Void ResetMonitoring()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_RESETMONITORING_OFFSET))(this);
		}

		::System::Void ResetConnectionMonitoring()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_RESETCONNECTIONMONITORING_OFFSET))(this);
		}

		::System::Void ResetCPsMonitoring()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER_RESETCPSMONITORING_OFFSET))(this);
		}

		::System::Boolean _get_IsCPsMonitorValid_b__10_0(::FluffyUnderware::Curvy::CurvySplineSegment* controlPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_TRANSFORMSYNCHRONIZER__GET_ISCPSMONITORVALID_B__10_0_OFFSET))(this, controlPoint);
		}
	};
}
