#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_CONTROLPOINTNAMER_CANCELREQUESTS_OFFSET UNITYSDK_OFFSET(0x1D605350)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_CONTROLPOINTNAMER_GETCONTROLPOINTNAMES_OFFSET UNITYSDK_OFFSET(0x1D6054F0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_CONTROLPOINTNAMER_GETCONTROLPOINTNAME_OFFSET UNITYSDK_OFFSET(0x1D605360)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_CONTROLPOINTNAMER_MAKECONTROLPOINTNAME_OFFSET UNITYSDK_OFFSET(0x1D605490)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_CONTROLPOINTNAMER_PROCESSREQUESTS_OFFSET UNITYSDK_OFFSET(0x1D6051C0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_CONTROLPOINTNAMER_RENAMECONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x1D605230)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_CONTROLPOINTNAMER_REQUESTRENAME_OFFSET UNITYSDK_OFFSET(0x1D6051B0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_CONTROLPOINTNAMER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D605670)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_CONTROLPOINTNAMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6051A0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySpline_ControlPointNamer_TypeDefinitionIndex = 38850;

	class CurvySpline_ControlPointNamer : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_ControlPointNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CurvySpline_ControlPointNamer_TypeDefinitionIndex)->GetStaticField(0x292F0);
		}
		::FluffyUnderware::Curvy::CurvySpline* spline; // 0x10
		::System::Boolean requestRename; // 0x18

		::System::Void _ctor(::FluffyUnderware::Curvy::CurvySpline* curvySpline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_CONTROLPOINTNAMER__CTOR_OFFSET))(this, curvySpline);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_CONTROLPOINTNAMER__CCTOR_OFFSET))();
		}

		::System::Void RequestRename()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_CONTROLPOINTNAMER_REQUESTRENAME_OFFSET))(this);
		}

		::System::Void ProcessRequests()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_CONTROLPOINTNAMER_PROCESSREQUESTS_OFFSET))(this);
		}

		::System::Void CancelRequests()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_CONTROLPOINTNAMER_CANCELREQUESTS_OFFSET))(this);
		}

		static ::System::Void RenameControlPoints(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* splineControlPoints)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_CONTROLPOINTNAMER_RENAMECONTROLPOINTS_OFFSET))(splineControlPoints);
		}

		static ::System::String* GetControlPointName(::System::Int16 controlPointIndex)
		{
			return ((::System::String*(*)(::System::Int16))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_CONTROLPOINTNAMER_GETCONTROLPOINTNAME_OFFSET))(controlPointIndex);
		}

		static ::Il2CppArray<::System::String*>* GetControlPointNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_CONTROLPOINTNAMER_GETCONTROLPOINTNAMES_OFFSET))();
		}

		static ::System::String* MakeControlPointName(::System::Int16 controlPointIndex)
		{
			return ((::System::String*(*)(::System::Int16))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_CONTROLPOINTNAMER_MAKECONTROLPOINTNAME_OFFSET))(controlPointIndex);
		}
	};
}
