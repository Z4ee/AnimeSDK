#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/ControlPointOption.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/DuplicateSamplePoint.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/SamplePointUData.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/SamplePointsPatch.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArrayList_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineEventArgs; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace FluffyUnderware::Curvy { class MetaCGOptions; }
namespace FluffyUnderware::Curvy::Generator { class CGData; }
namespace FluffyUnderware::Curvy::Generator { class CGDataRequestMetaCGOptions; }
namespace FluffyUnderware::Curvy::Generator { class CGDataRequestRasterization; }
namespace FluffyUnderware::Curvy::Generator { class CGShape; }
namespace FluffyUnderware::Curvy::Generator { class SamplePointsMaterialGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_ADDPOINT_OFFSET UNITYSDK_OFFSET(0x1E0DC080)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_CALCULATEEXTENDEDUV_OFFSET UNITYSDK_OFFSET(0x1E0DD1E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_CLEARRANGE_OFFSET UNITYSDK_OFFSET(0x1E0D8BF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_FILLDATA_OFFSET UNITYSDK_OFFSET(0x1E0DC550)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_FINDNEXTREFERENCECPOPTIONS_OFFSET UNITYSDK_OFFSET(0x1E0DDDF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_FINDPREVIOUSREFERENCECPOPTIONS_OFFSET UNITYSDK_OFFSET(0x1E0DDBA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_FORCEREFRESH_OFFSET UNITYSDK_OFFSET(0x1E0D9390)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_GETPATHCLOSED_OFFSET UNITYSDK_OFFSET(0x1E0D88D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_GETSPLINEDATA_OFFSET UNITYSDK_OFFSET(0x1E0D9620)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_GET_ENDCP_OFFSET UNITYSDK_OFFSET(0x1E0D83C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_GET_ISCONFIGURED_OFFSET UNITYSDK_OFFSET(0x1E0D84C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1E0D85F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_GET_PATHISCLOSED_OFFSET UNITYSDK_OFFSET(0x1E0D8760)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_GET_STARTCP_OFFSET UNITYSDK_OFFSET(0x1E0D7790)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_GET_USECACHE_OFFSET UNITYSDK_OFFSET(0x1E0D7740)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_GET_USEGLOBALSPACE_OFFSET UNITYSDK_OFFSET(0x1E0D8470)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_MOVEBYANGLEEXT_OFFSET UNITYSDK_OFFSET(0x1E0DCCC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E0D8C40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E0D8C00)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_ONINPUTSPLINECOORDINATESCHANGED_OFFSET UNITYSDK_OFFSET(0x1E0D94F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_ONSPLINEASSIGNED_OFFSET UNITYSDK_OFFSET(0x1E0DDFB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_ONSPLINEINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1E0D93B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_ONSPLINEREFRESHED_OFFSET UNITYSDK_OFFSET(0x1E0D9250)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E0D8EF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_PROCESSCONTROLPOINTOPTIONS_OFFSET UNITYSDK_OFFSET(0x1E0DC2C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_RESET_OFFSET UNITYSDK_OFFSET(0x1E0D8F30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_SETRANGE_OFFSET UNITYSDK_OFFSET(0x1E0D8AF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_SET_ENDCP_OFFSET UNITYSDK_OFFSET(0x1E0D83D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_SET_STARTCP_OFFSET UNITYSDK_OFFSET(0x1E0D77A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_SET_USECACHE_OFFSET UNITYSDK_OFFSET(0x1E0D7750)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_SET_USEGLOBALSPACE_OFFSET UNITYSDK_OFFSET(0x1E0D8480)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_VALIDATESTARTANDENDCPS_OFFSET UNITYSDK_OFFSET(0x1E0D7840)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DE2A0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int SplineInputModuleBase_TypeDefinitionIndex = 38832;

	class SplineInputModuleBase : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		::System::Boolean m_UseCache; // 0xB8
		::System::Boolean m_UseGlobalSpace; // 0xB9
		::FluffyUnderware::Curvy::CurvySplineSegment* m_StartCP; // 0xC0
		::FluffyUnderware::Curvy::CurvySplineSegment* m_EndCP; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_GET_USECACHE_OFFSET))(this);
		}

		::System::Void set_UseCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_SET_USECACHE_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::CurvySplineSegment* get_StartCP()
		{
			return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_GET_STARTCP_OFFSET))(this);
		}

		::System::Void set_StartCP(::FluffyUnderware::Curvy::CurvySplineSegment* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_SET_STARTCP_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::CurvySplineSegment* get_EndCP()
		{
			return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_GET_ENDCP_OFFSET))(this);
		}

		::System::Void set_EndCP(::FluffyUnderware::Curvy::CurvySplineSegment* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_SET_ENDCP_OFFSET))(this, value);
		}

		::System::Boolean get_UseGlobalSpace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_GET_USEGLOBALSPACE_OFFSET))(this);
		}

		::System::Void set_UseGlobalSpace(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_SET_USEGLOBALSPACE_OFFSET))(this, value);
		}

		::System::Boolean get_IsConfigured()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_GET_ISCONFIGURED_OFFSET))(this);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_GET_ISINITIALIZED_OFFSET))(this);
		}

		::System::Boolean get_PathIsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_GET_PATHISCLOSED_OFFSET))(this);
		}

		::System::Void SetRange(::FluffyUnderware::Curvy::CurvySplineSegment* rangeStart, ::FluffyUnderware::Curvy::CurvySplineSegment* rangeEnd)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_SETRANGE_OFFSET))(this, rangeStart, rangeEnd);
		}

		::System::Void ClearRange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_CLEARRANGE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_RESET_OFFSET))(this);
		}

		::System::Void OnSplineRefreshed(::FluffyUnderware::Curvy::CurvySplineEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineEventArgs*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_ONSPLINEREFRESHED_OFFSET))(this, e);
		}

		::System::Void OnSplineInitialized(::FluffyUnderware::Curvy::CurvySplineEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineEventArgs*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_ONSPLINEINITIALIZED_OFFSET))(this, e);
		}

		::System::Void OnInputSplineCoordinatesChanged(::FluffyUnderware::Curvy::CurvySpline* sender)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_ONINPUTSPLINECOORDINATESCHANGED_OFFSET))(this, sender);
		}

		::System::Void ForceRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_FORCEREFRESH_OFFSET))(this);
		}

		::System::Boolean getPathClosed(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_GETPATHCLOSED_OFFSET))(this, spline);
		}

		::FluffyUnderware::Curvy::Generator::CGData* GetSplineData(::FluffyUnderware::Curvy::CurvySpline* spline, ::System::Boolean fullPath, ::FluffyUnderware::Curvy::Generator::CGDataRequestRasterization* raster, ::FluffyUnderware::Curvy::Generator::CGDataRequestMetaCGOptions* options)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGData*(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Boolean, ::FluffyUnderware::Curvy::Generator::CGDataRequestRasterization*, ::FluffyUnderware::Curvy::Generator::CGDataRequestMetaCGOptions*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_GETSPLINEDATA_OFFSET))(this, spline, fullPath, raster, options);
		}

		static ::System::Void ProcessControlPointOptions(::FluffyUnderware::Curvy::Generator::ControlPointOption options, ::System::Int32 positionsCount, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*>* shapeMaterialGroups, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::SamplePointUData>* extendedUVData, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::DuplicateSamplePoint>* duplicatePoints, ::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*& currentMaterialGroup, ::FluffyUnderware::Curvy::Generator::SamplePointsPatch& currentPatch, ::System::Single& currentDistance, ::System::Boolean& duplicatePoint)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::Generator::ControlPointOption, ::System::Int32, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*>*, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::SamplePointUData>*, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::DuplicateSamplePoint>*, ::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*&, ::FluffyUnderware::Curvy::Generator::SamplePointsPatch&, ::System::Single&, ::System::Boolean&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_PROCESSCONTROLPOINTOPTIONS_OFFSET))(options, positionsCount, shapeMaterialGroups, extendedUVData, duplicatePoints, currentMaterialGroup, currentPatch, currentDistance, duplicatePoint);
		}

		static ::System::Void FillData(::FluffyUnderware::Curvy::Generator::CGShape* dataToFill, ::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup* materialGroup, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::System::Single> sourceFs, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::System::Single> relativeFs, ::System::Boolean isFullPath, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::UnityEngine::Vector3> positions, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::UnityEngine::Vector3> tangents, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::UnityEngine::Vector3> normals, ::System::Boolean considerSplineTransform, ::UnityEngine::Transform* splineTransform, ::UnityEngine::Transform* generatorTransform)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::Generator::CGShape*, ::FluffyUnderware::Curvy::Generator::SamplePointsMaterialGroup*, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::System::Single>, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::System::Single>, ::System::Boolean, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::UnityEngine::Vector3>, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::UnityEngine::Vector3>, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::UnityEngine::Vector3>, ::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_FILLDATA_OFFSET))(dataToFill, materialGroup, sourceFs, relativeFs, isFullPath, positions, tangents, normals, considerSplineTransform, splineTransform, generatorTransform);
		}

		static ::System::Void AddPoint(::System::Single sourceF, ::System::Single relativeF, ::System::Boolean isFullPath, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 tangent, ::UnityEngine::Vector3 up, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::System::Single>& sourceFList, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::System::Single>& relativeFList, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::UnityEngine::Vector3>& positionList, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::UnityEngine::Vector3>& tangentList, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::UnityEngine::Vector3>& upList)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::System::Single>&, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::System::Single>&, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::UnityEngine::Vector3>&, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::UnityEngine::Vector3>&, ::ToolBuddy::Pooling::Collections::SubArrayList_1<::UnityEngine::Vector3>&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_ADDPOINT_OFFSET))(sourceF, relativeF, isFullPath, position, tangent, up, sourceFList, relativeFList, positionList, tangentList, upList);
		}

		static ::System::Boolean MoveByAngleExt(::FluffyUnderware::Curvy::CurvySpline* spline, ::System::Boolean useCache, ::System::Single& tf, ::System::Single maxDistance, ::System::Single maxAngle, ::UnityEngine::Vector3& pos, ::UnityEngine::Vector3& tan, ::System::Single stopTF, ::System::Boolean loop, ::System::Single stepDist)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySpline*, ::System::Boolean, ::System::Single&, ::System::Single, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_MOVEBYANGLEEXT_OFFSET))(spline, useCache, tf, maxDistance, maxAngle, pos, tan, stopTF, loop, stepDist);
		}

		static ::System::Void CalculateExtendedUV(::FluffyUnderware::Curvy::CurvySpline* spline, ::System::Single startTF, ::System::Single endTF, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::SamplePointUData>* ext, ::FluffyUnderware::Curvy::Generator::CGShape* data)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::SamplePointUData>*, ::FluffyUnderware::Curvy::Generator::CGShape*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_CALCULATEEXTENDEDUV_OFFSET))(spline, startTF, endTF, ext, data);
		}

		static ::FluffyUnderware::Curvy::MetaCGOptions* findPreviousReferenceCPOptions(::FluffyUnderware::Curvy::CurvySpline* spline, ::System::Single tf, ::FluffyUnderware::Curvy::CurvySplineSegment*& cp)
		{
			return ((::FluffyUnderware::Curvy::MetaCGOptions*(*)(::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_FINDPREVIOUSREFERENCECPOPTIONS_OFFSET))(spline, tf, cp);
		}

		static ::FluffyUnderware::Curvy::MetaCGOptions* findNextReferenceCPOptions(::FluffyUnderware::Curvy::CurvySpline* spline, ::System::Single tf, ::FluffyUnderware::Curvy::CurvySplineSegment*& cp)
		{
			return ((::FluffyUnderware::Curvy::MetaCGOptions*(*)(::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_FINDNEXTREFERENCECPOPTIONS_OFFSET))(spline, tf, cp);
		}

		::System::Void OnSplineAssigned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_ONSPLINEASSIGNED_OFFSET))(this);
		}

		::System::Void ValidateStartAndEndCps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_SPLINEINPUTMODULEBASE_VALIDATESTARTANDENDCPS_OFFSET))(this);
		}
	};
}
