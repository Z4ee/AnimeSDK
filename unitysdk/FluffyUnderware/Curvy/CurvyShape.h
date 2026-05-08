#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyInterpolation.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyOrientation.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyPlane.h"
#include "unitysdk/FluffyUnderware/DevTools/DTVersionedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Space.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvyShapeInfo; }
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_APPLYPLANE_OFFSET UNITYSDK_OFFSET(0x1BC10960)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_APPLYROTATION_OFFSET UNITYSDK_OFFSET(0x1BC13410)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_APPLYSHAPE_OFFSET UNITYSDK_OFFSET(0x1BC123E0)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_DELETE_OFFSET UNITYSDK_OFFSET(0x1BC10950)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_GETSHAPENAME_OFFSET UNITYSDK_OFFSET(0x1BC132B0)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_GETSHAPESMENUNAMES_1_OFFSET UNITYSDK_OFFSET(0x1BC13060)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_GETSHAPESMENUNAMES_OFFSET UNITYSDK_OFFSET(0x1BC12E80)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_GETSHAPETYPE_OFFSET UNITYSDK_OFFSET(0x1BC10C10)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_GET_PLANE_OFFSET UNITYSDK_OFFSET(0x1BC10620)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_GET_SHAPEDEFINITIONS_OFFSET UNITYSDK_OFFSET(0x1BC12D60)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_GET_SPLINE_OFFSET UNITYSDK_OFFSET(0x1BC10640)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1BC10920)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_PREPARECONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x1BC123F0)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_PREPARESPLINE_OFFSET UNITYSDK_OFFSET(0x1BC10E00)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_REFRESH_OFFSET UNITYSDK_OFFSET(0x1BC106F0)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_REPLACE_OFFSET UNITYSDK_OFFSET(0x1BC10B10)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_RESET_OFFSET UNITYSDK_OFFSET(0x1BC10930)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_SETBEZIERHANDLES_1_OFFSET UNITYSDK_OFFSET(0x1BC11640)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_SETBEZIERHANDLES_2_OFFSET UNITYSDK_OFFSET(0x1BC11BC0)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_SETBEZIERHANDLES_3_OFFSET UNITYSDK_OFFSET(0x1BC11B30)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_SETBEZIERHANDLES_OFFSET UNITYSDK_OFFSET(0x1BC11630)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_SETCGHARDEDGES_OFFSET UNITYSDK_OFFSET(0x1BC11EB0)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1BC112D0)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_SETROTATION_OFFSET UNITYSDK_OFFSET(0x1BC11480)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_SET_PLANE_OFFSET UNITYSDK_OFFSET(0x1BC10630)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BC106E0)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC13CD0)
#define FLUFFYUNDERWARE_CURVY_CURVYSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC13C80)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyShape_TypeDefinitionIndex = 37198;

	class CurvyShape : public ::FluffyUnderware::DevTools::DTVersionedMonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::CurvyShapeInfo*, ::System::Type*>** StaticGet_mShapeDefs()
		{
			return (::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::CurvyShapeInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(CurvyShape_TypeDefinitionIndex)->GetStaticField(0x27980);
		}
		::FluffyUnderware::Curvy::CurvyPlane m_Plane; // 0x28
		::FluffyUnderware::Curvy::CurvySpline* mSpline; // 0x30
		::System::Boolean Dirty; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE__CCTOR_OFFSET))();
		}

		::FluffyUnderware::Curvy::CurvyPlane get_Plane()
		{
			return ((::FluffyUnderware::Curvy::CurvyPlane(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_GET_PLANE_OFFSET))(this);
		}

		::System::Void set_Plane(::FluffyUnderware::Curvy::CurvyPlane value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyPlane))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_SET_PLANE_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::CurvySpline* get_Spline()
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_GET_SPLINE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_UPDATE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_RESET_OFFSET))(this);
		}

		::System::Void Delete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_DELETE_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_REFRESH_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvyShape* Replace(::System::String* menuName)
		{
			return ((::FluffyUnderware::Curvy::CurvyShape*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_REPLACE_OFFSET))(this, menuName);
		}

		::System::Void PrepareSpline(::FluffyUnderware::Curvy::CurvyInterpolation interpolation, ::FluffyUnderware::Curvy::CurvyOrientation orientation, ::System::Int32 cachedensity, ::System::Boolean closed)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvyInterpolation, ::FluffyUnderware::Curvy::CurvyOrientation, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_PREPARESPLINE_OFFSET))(this, interpolation, orientation, cachedensity, closed);
		}

		::System::Void SetPosition(::System::Int32 no, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_SETPOSITION_OFFSET))(this, no, position);
		}

		::System::Void SetRotation(::System::Int32 no, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_SETROTATION_OFFSET))(this, no, rotation);
		}

		::System::Void SetBezierHandles(::System::Int32 no, ::System::Single distanceFrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_SETBEZIERHANDLES_OFFSET))(this, no, distanceFrag);
		}

		::System::Void SetBezierHandles_1(::System::Int32 no, ::System::Single inDistanceFrag, ::System::Single outDistanceFrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_SETBEZIERHANDLES_1_OFFSET))(this, no, inDistanceFrag, outDistanceFrag);
		}

		::System::Void SetBezierHandles_2(::System::Int32 no, ::UnityEngine::Vector3 i, ::UnityEngine::Vector3 o, ::UnityEngine::Space space)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_SETBEZIERHANDLES_2_OFFSET))(this, no, i, o, space);
		}

		static ::System::Void SetBezierHandles_3(::System::Single distanceFrag, ::System::Boolean setIn, ::System::Boolean setOut, ::Il2CppArray<::FluffyUnderware::Curvy::CurvySplineSegment*>* controlPoints)
		{
			return ((::System::Void(*)(::System::Single, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::FluffyUnderware::Curvy::CurvySplineSegment*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_SETBEZIERHANDLES_3_OFFSET))(distanceFrag, setIn, setOut, controlPoints);
		}

		::System::Void SetCGHardEdges(::Il2CppArray<::System::Int32>* controlPoints)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_SETCGHARDEDGES_OFFSET))(this, controlPoints);
		}

		::System::Void ApplyShape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_APPLYSHAPE_OFFSET))(this);
		}

		::System::Void PrepareControlPoints(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_PREPARECONTROLPOINTS_OFFSET))(this, count);
		}

		static ::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::CurvyShapeInfo*, ::System::Type*>* get_ShapeDefinitions()
		{
			return ((::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::CurvyShapeInfo*, ::System::Type*>*(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_GET_SHAPEDEFINITIONS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetShapesMenuNames(::System::Boolean only2D)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_GETSHAPESMENUNAMES_OFFSET))(only2D);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetShapesMenuNames_1(::System::Type* currentShapeType, ::System::Int32& currentIndex, ::System::Boolean only2D)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::Type*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_GETSHAPESMENUNAMES_1_OFFSET))(currentShapeType, currentIndex, only2D);
		}

		static ::System::String* GetShapeName(::System::Type* shapeType)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_GETSHAPENAME_OFFSET))(shapeType);
		}

		static ::System::Type* GetShapeType(::System::String* menuName)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_GETSHAPETYPE_OFFSET))(menuName);
		}

		::System::Void ApplyPlane()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_APPLYPLANE_OFFSET))(this);
		}

		::System::Void applyRotation(::UnityEngine::Quaternion q)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSHAPE_APPLYROTATION_OFFSET))(this, q);
		}
	};
}
