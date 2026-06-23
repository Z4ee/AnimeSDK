#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/SplineDirtyingType.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace FluffyUnderware::Curvy { class CurvySpline_DirtinessManager_Cache; }
namespace FluffyUnderware::DevTools { template <typename T> class ThreadPoolWorker_1; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_ADDTOMINIMALSETANDSETDIRTYINGFLAGSANDINVALIDATESPLINECURVECACHESIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1E44D900)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_CLEARMINIMALSET_OFFSET UNITYSDK_OFFSET(0x1E44E9E0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E44F6F0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_DOSANITYCHECKS_OFFSET UNITYSDK_OFFSET(0x1E4515C0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_FILLCONNECTEDCPS_OFFSET UNITYSDK_OFFSET(0x1E450560)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_FILLDIRTYCPSEXTENDEDLIST_OFFSET UNITYSDK_OFFSET(0x1E44EDA0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_GET_ALLCONTROLPOINTSAREDIRTY_OFFSET UNITYSDK_OFFSET(0x1E44CCF0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_GET_DIRTYCURVE_OFFSET UNITYSDK_OFFSET(0x1E44CCB0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_GET_DIRTYORIENTATION_OFFSET UNITYSDK_OFFSET(0x1E44CCD0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_GET_DIRTY_OFFSET UNITYSDK_OFFSET(0x1E44CD10)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_MINIMALSETTOEXTENDEDLIST_BSPLINE_OFFSET UNITYSDK_OFFSET(0x1E450040)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_MINIMALSETTOEXTENDEDSET_NONBSPLINE_OFFSET UNITYSDK_OFFSET(0x1E44FAB0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_PROCESSDIRTYCONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x1E44EAA0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_PROCESSDIRTYCURVE_OFFSET UNITYSDK_OFFSET(0x1E44EF50)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_PROCESSDIRTYDYNAMICORIENTATION_OFFSET UNITYSDK_OFFSET(0x1E44F720)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_PROCESSDIRTYORIENTATION_OFFSET UNITYSDK_OFFSET(0x1E44F1D0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_REMOVEFROMMINIMALSET_OFFSET UNITYSDK_OFFSET(0x1E44EA40)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x1E44CF70)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_SETDIRTYALL_OFFSET UNITYSDK_OFFSET(0x1E44CFE0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_SETDIRTYINGFLAGSANDINVALIDATESPLINECURVECACHESIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1E44D8B0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1E44D9D0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_SET_ALLCONTROLPOINTSAREDIRTY_OFFSET UNITYSDK_OFFSET(0x1E44CD00)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_SET_DIRTYCURVE_OFFSET UNITYSDK_OFFSET(0x1E44CCC0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_SET_DIRTYORIENTATION_OFFSET UNITYSDK_OFFSET(0x1E44CCE0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_SYNCHRONIZESPLINESWITHNULLCPS_OFFSET UNITYSDK_OFFSET(0x1E450E50)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_SYNCHRONIZEUNINITIALIZEDSPLINES_OFFSET UNITYSDK_OFFSET(0x1E451270)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_VALIDATECONNECTEDSPLINES_OFFSET UNITYSDK_OFFSET(0x1E44ED70)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E44CD40)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySpline_DirtinessManager_TypeDefinitionIndex = 38844;

	class CurvySpline_DirtinessManager : public ::System::Object
	{
	public:
		::System::Action_3<::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Int32, ::System::Int32>* refreshOrientationStaticAction; // 0x10
		::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* dirtyControlPointsMinimalSet; // 0x18
		::FluffyUnderware::Curvy::CurvySpline* spline; // 0x20
		::FluffyUnderware::Curvy::CurvySpline_DirtinessManager_Cache* cache; // 0x28
		::FluffyUnderware::DevTools::ThreadPoolWorker_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* threadWorker; // 0x30
		::System::Boolean dirtyOrientation; // 0x38
		::System::Boolean dirtyCurve; // 0x39
		::System::Boolean allControlPointsAreDirty; // 0x3A
		::System::Boolean processingDirtyControlPoints; // 0x3B

		::System::Void _ctor(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER__CTOR_OFFSET))(this, spline);
		}

		::System::Boolean get_DirtyCurve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_GET_DIRTYCURVE_OFFSET))(this);
		}

		::System::Void set_DirtyCurve(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_SET_DIRTYCURVE_OFFSET))(this, value);
		}

		::System::Boolean get_DirtyOrientation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_GET_DIRTYORIENTATION_OFFSET))(this);
		}

		::System::Void set_DirtyOrientation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_SET_DIRTYORIENTATION_OFFSET))(this, value);
		}

		::System::Boolean get_AllControlPointsAreDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_GET_ALLCONTROLPOINTSAREDIRTY_OFFSET))(this);
		}

		::System::Void set_AllControlPointsAreDirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_SET_ALLCONTROLPOINTSAREDIRTY_OFFSET))(this, value);
		}

		::System::Boolean get_Dirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_GET_DIRTY_OFFSET))(this);
		}

		::System::Void SetDirtyAll(::FluffyUnderware::Curvy::SplineDirtyingType dirtyingType, ::System::Boolean dirtyConnectedControlPoints)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::SplineDirtyingType, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_SETDIRTYALL_OFFSET))(this, dirtyingType, dirtyConnectedControlPoints);
		}

		::System::Void SetDirty(::FluffyUnderware::Curvy::CurvySplineSegment* controlPoint, ::FluffyUnderware::Curvy::SplineDirtyingType dirtyingType, ::FluffyUnderware::Curvy::CurvySplineSegment* previousControlPoint, ::FluffyUnderware::Curvy::CurvySplineSegment* nextControlPoint, ::System::Boolean ignoreConnectionOfInputControlPoint)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::SplineDirtyingType, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_SETDIRTY_OFFSET))(this, controlPoint, dirtyingType, previousControlPoint, nextControlPoint, ignoreConnectionOfInputControlPoint);
		}

		::System::Void ClearMinimalSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_CLEARMINIMALSET_OFFSET))(this);
		}

		::System::Void RemoveFromMinimalSet(::FluffyUnderware::Curvy::CurvySplineSegment* item)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_REMOVEFROMMINIMALSET_OFFSET))(this, item);
		}

		::System::Boolean ProcessDirtyControlPoints()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_PROCESSDIRTYCONTROLPOINTS_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void ProcessDirtyOrientation(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* dirtyCpsExtendedList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_PROCESSDIRTYORIENTATION_OFFSET))(this, dirtyCpsExtendedList);
		}

		::System::Void ProcessDirtyDynamicOrientation(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* dirtyCpsExtendedList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_PROCESSDIRTYDYNAMICORIENTATION_OFFSET))(this, dirtyCpsExtendedList);
		}

		::System::Void ProcessDirtyCurve(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* dirtyCpsExtendedList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_PROCESSDIRTYCURVE_OFFSET))(this, dirtyCpsExtendedList);
		}

		::System::Void SetDirtyingFlagsAndInvalidateSplineCurveCachesIfNeeded(::FluffyUnderware::Curvy::SplineDirtyingType dirtyingType)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::SplineDirtyingType))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_SETDIRTYINGFLAGSANDINVALIDATESPLINECURVECACHESIFNEEDED_OFFSET))(this, dirtyingType);
		}

		::System::Void AddToMinimalSetAndSetDirtyingFlagsAndInvalidateSplineCurveCachesIfNeeded(::FluffyUnderware::Curvy::CurvySplineSegment* controlPoint, ::FluffyUnderware::Curvy::SplineDirtyingType dirtyingType)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::SplineDirtyingType))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_ADDTOMINIMALSETANDSETDIRTYINGFLAGSANDINVALIDATESPLINECURVECACHESIFNEEDED_OFFSET))(this, controlPoint, dirtyingType);
		}

		::System::Void FillDirtyCpsExtendedList(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* dirtyCpsExtendedList, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* cachedReusableCPsSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_FILLDIRTYCPSEXTENDEDLIST_OFFSET))(this, dirtyCpsExtendedList, cachedReusableCPsSet);
		}

		static ::System::Void MinimalSetToExtendedSet_NonBSpline(::FluffyUnderware::Curvy::CurvySpline* spline, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* dirtyCPsMinimalSet, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* dirtyCPsExtendedSet)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::CurvySpline*, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_MINIMALSETTOEXTENDEDSET_NONBSPLINE_OFFSET))(spline, dirtyCPsMinimalSet, dirtyCPsExtendedSet);
		}

		static ::System::Void MinimalSetToExtendedList_BSpline(::FluffyUnderware::Curvy::CurvySpline* curvySpline, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* dirtyCpsMinimalSet, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* dirtyCPsExtendedSet)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::CurvySpline*, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_MINIMALSETTOEXTENDEDLIST_BSPLINE_OFFSET))(curvySpline, dirtyCpsMinimalSet, dirtyCPsExtendedSet);
		}

		::System::Void ValidateConnectedSplines(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* cachedSegmentList, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvySpline*>* cacheSplineSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvySpline*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_VALIDATECONNECTEDSPLINES_OFFSET))(this, cachedSegmentList, cacheSplineSet);
		}

		::System::Void FillConnectedCPs(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* resultList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_FILLCONNECTEDCPS_OFFSET))(this, resultList);
		}

		::System::Void SynchronizeSplinesWithNullCps(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* controlPoints, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvySpline*>* cacheSplineSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*, ::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvySpline*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_SYNCHRONIZESPLINESWITHNULLCPS_OFFSET))(this, controlPoints, cacheSplineSet);
		}

		static ::System::Void SynchronizeUninitializedSplines(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* connectedCPs)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_SYNCHRONIZEUNINITIALIZEDSPLINES_OFFSET))(connectedCPs);
		}

		::System::Void DoSanityChecks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_DOSANITYCHECKS_OFFSET))(this);
		}
	};
}
