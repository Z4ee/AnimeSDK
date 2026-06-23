#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTVersionedMonoBehaviour.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E52DD30)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_GETUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1E52D250)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1E52D7B0)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_GET_INSPECTORDEBUG_OFFSET UNITYSDK_OFFSET(0x1E52D260)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_GET_SEGMENT_OFFSET UNITYSDK_OFFSET(0x1E52D240)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_GET_SPLINE_OFFSET UNITYSDK_OFFSET(0x1E52D230)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_GET_TANGENT_OFFSET UNITYSDK_OFFSET(0x1E52DAE0)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_GET_TF_OFFSET UNITYSDK_OFFSET(0x1E52D270)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_NOTIFYMODIFICATION_OFFSET UNITYSDK_OFFSET(0x1E52E040)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E52DEF0)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52E1D0)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E52E180)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyMetadataBase_Point_TypeDefinitionIndex = 38892;

	class CurvyMetadataBase_Point : public ::FluffyUnderware::DevTools::DTVersionedMonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_EnableTFCache()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CurvyMetadataBase_Point_TypeDefinitionIndex)->GetStaticField(0x93E0);
		}
		::UnityEngine::Vector3 lastWorldPos; // 0x28
		::System::Nullable_1<::System::Single> _cacheTF; // 0x34
		::FluffyUnderware::Curvy::CurvySpline* mSpline; // 0x40
		::FluffyUnderware::Curvy::CurvySplineSegment* mSegment; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT__CCTOR_OFFSET))();
		}

		::FluffyUnderware::Curvy::CurvySpline* get_Spline()
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_GET_SPLINE_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvySplineSegment* get_Segment()
		{
			return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_GET_SEGMENT_OFFSET))(this);
		}

		::System::String* GetUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_GETUNIQUENAME_OFFSET))(this);
		}

		::System::Boolean get_InspectorDebug()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_GET_INSPECTORDEBUG_OFFSET))(this);
		}

		::System::Single get_TF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_GET_TF_OFFSET))(this);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_GET_DISTANCE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Tangent()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_GET_TANGENT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_ONDESTROY_OFFSET))(this);
		}

		::System::Void NotifyModification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_POINT_NOTIFYMODIFICATION_OFFSET))(this);
		}
	};
}
