#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTVersionedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneMode.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvyConnection_TransformSynchronizer; }
namespace FluffyUnderware::Curvy { class CurvyConnection_UndoFixer; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_ADDCONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x1C0B7AC0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_AUTOSETFOLLOWUP_OFFSET UNITYSDK_OFFSET(0x1C0B7DA0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1C0B7650)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_DELETE_OFFSET UNITYSDK_OFFSET(0x1C0B8730)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0B7430)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0B7490)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_GET_CONTROLPOINTSLIST_OFFSET UNITYSDK_OFFSET(0x1C0B71C0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C0B7220)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C0B7240)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0B7450)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C0B8A90)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C0B8980)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C0B74D0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C0B7370)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C0B72A0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_ONSCENELOADED_OFFSET UNITYSDK_OFFSET(0x1C0B8C60)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_OTHERCONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x1C0B8750)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_REMOVECONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x1C0B84C0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_REMOVENULLCPS_OFFSET UNITYSDK_OFFSET(0x1C0B8990)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_RESETONENABLE_OFFSET UNITYSDK_OFFSET(0x1C0B8EB0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_SETSYNCHRONISATIONPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0x1C0B8860)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_SETSYNCHRONIZATIONOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C0B8350)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C0B73F0)
#define FLUFFYUNDERWARE_CURVY_CURVYCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B6F50)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyConnection_TypeDefinitionIndex = 37205;

	class CurvyConnection : public ::FluffyUnderware::DevTools::DTVersionedMonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* m_ControlPoints; // 0x28
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* readOnlyControlPoints; // 0x30
		::FluffyUnderware::Curvy::CurvyConnection_TransformSynchronizer* transformSynchronizer; // 0x38
		::FluffyUnderware::Curvy::CurvyConnection_UndoFixer* undoFixer; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION__CTOR_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* get_ControlPointsList()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_GET_CONTROLPOINTSLIST_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_GET_COUNT_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvySplineSegment* get_Item(::System::Int32 idx)
		{
			return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_GET_ITEM_OFFSET))(this, idx);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_LATEUPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_ONDESTROY_OFFSET))(this);
		}

		static ::FluffyUnderware::Curvy::CurvyConnection* Create(::Il2CppArray<::FluffyUnderware::Curvy::CurvySplineSegment*>* controlPoints)
		{
			return ((::FluffyUnderware::Curvy::CurvyConnection*(*)(::Il2CppArray<::FluffyUnderware::Curvy::CurvySplineSegment*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_CREATE_OFFSET))(controlPoints);
		}

		::System::Void AddControlPoints(::Il2CppArray<::FluffyUnderware::Curvy::CurvySplineSegment*>* controlPoints)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::FluffyUnderware::Curvy::CurvySplineSegment*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_ADDCONTROLPOINTS_OFFSET))(this, controlPoints);
		}

		::System::Void SetSynchronizationOptions(::System::Boolean syncPosition, ::System::Boolean syncRotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_SETSYNCHRONIZATIONOPTIONS_OFFSET))(this, syncPosition, syncRotation);
		}

		::System::Void AutoSetFollowUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_AUTOSETFOLLOWUP_OFFSET))(this);
		}

		::System::Void RemoveControlPoint(::FluffyUnderware::Curvy::CurvySplineSegment* controlPoint, ::System::Boolean destroySelfIfEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_REMOVECONTROLPOINT_OFFSET))(this, controlPoint, destroySelfIfEmpty);
		}

		::System::Void Delete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_DELETE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* OtherControlPoints(::FluffyUnderware::Curvy::CurvySplineSegment* source)
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_OTHERCONTROLPOINTS_OFFSET))(this, source);
		}

		::System::Void SetSynchronisationPositionAndRotation(::UnityEngine::Vector3 referencePosition, ::UnityEngine::Quaternion referenceRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_SETSYNCHRONISATIONPOSITIONANDROTATION_OFFSET))(this, referencePosition, referenceRotation);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void RemoveNullCPs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_REMOVENULLCPS_OFFSET))(this);
		}

		::System::Void DoUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_DOUPDATE_OFFSET))(this);
		}

		::System::Void OnSceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_ONSCENELOADED_OFFSET))(this, scene, loadSceneMode);
		}

		::System::Void ResetOnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONNECTION_RESETONENABLE_OFFSET))(this);
		}
	};
}
