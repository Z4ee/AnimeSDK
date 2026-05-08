#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/AAB2.h"
#include "unitysdk/Dest/Math/AAB3.h"
#include "unitysdk/Dest/Math/Box2.h"
#include "unitysdk/Dest/Math/Box3.h"
#include "unitysdk/Dest/Math/Capsule3.h"
#include "unitysdk/Dest/Math/Circle2.h"
#include "unitysdk/Dest/Math/Circle3.h"
#include "unitysdk/Dest/Math/Line2.h"
#include "unitysdk/Dest/Math/Line3.h"
#include "unitysdk/Dest/Math/Plane3.h"
#include "unitysdk/Dest/Math/Ray2.h"
#include "unitysdk/Dest/Math/Ray3.h"
#include "unitysdk/Dest/Math/Rectangle3.h"
#include "unitysdk/Dest/Math/Segment2.h"
#include "unitysdk/Dest/Math/Segment3.h"
#include "unitysdk/Dest/Math/Sphere3.h"
#include "unitysdk/Dest/Math/Triangle2.h"
#include "unitysdk/Dest/Math/Triangle3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Dest::Math { class Polygon2; }
namespace Dest::Math { class Polygon3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Transform; }

#define DEST_MATH_VISUALDEBUG_DRAWAAB_1_OFFSET UNITYSDK_OFFSET(0x1C2BBF20)
#define DEST_MATH_VISUALDEBUG_DRAWAAB_OFFSET UNITYSDK_OFFSET(0x1C2BBE10)
#define DEST_MATH_VISUALDEBUG_DRAWBOX_1_OFFSET UNITYSDK_OFFSET(0x1C2BC530)
#define DEST_MATH_VISUALDEBUG_DRAWBOX_OFFSET UNITYSDK_OFFSET(0x1C2BC310)
#define DEST_MATH_VISUALDEBUG_DRAWCAPSULE_OFFSET UNITYSDK_OFFSET(0x1C2BDE10)
#define DEST_MATH_VISUALDEBUG_DRAWCIRCLE_1_OFFSET UNITYSDK_OFFSET(0x1C2BCCE0)
#define DEST_MATH_VISUALDEBUG_DRAWCIRCLE_2_OFFSET UNITYSDK_OFFSET(0x1C2BCDE0)
#define DEST_MATH_VISUALDEBUG_DRAWCIRCLE_OFFSET UNITYSDK_OFFSET(0x1C2BCBC0)
#define DEST_MATH_VISUALDEBUG_DRAWFUNC_OFFSET UNITYSDK_OFFSET(0x1C2BDB00)
#define DEST_MATH_VISUALDEBUG_DRAWLINE_1_OFFSET UNITYSDK_OFFSET(0x1C2BD0F0)
#define DEST_MATH_VISUALDEBUG_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1C2BCFF0)
#define DEST_MATH_VISUALDEBUG_DRAWPLANE_OFFSET UNITYSDK_OFFSET(0x1C2BD5E0)
#define DEST_MATH_VISUALDEBUG_DRAWPOINTSWITHSEGMENTS_OFFSET UNITYSDK_OFFSET(0x1C2BBB30)
#define DEST_MATH_VISUALDEBUG_DRAWPOINTS_1_OFFSET UNITYSDK_OFFSET(0x1C2BB4A0)
#define DEST_MATH_VISUALDEBUG_DRAWPOINTS_OFFSET UNITYSDK_OFFSET(0x1C2BB180)
#define DEST_MATH_VISUALDEBUG_DRAWPOINT_1_OFFSET UNITYSDK_OFFSET(0x1C2BB100)
#define DEST_MATH_VISUALDEBUG_DRAWPOINT_OFFSET UNITYSDK_OFFSET(0x1C2BB080)
#define DEST_MATH_VISUALDEBUG_DRAWPOLYGON_1_OFFSET UNITYSDK_OFFSET(0x1C2BDA00)
#define DEST_MATH_VISUALDEBUG_DRAWPOLYGON_OFFSET UNITYSDK_OFFSET(0x1C2BD910)
#define DEST_MATH_VISUALDEBUG_DRAWRAY_1_OFFSET UNITYSDK_OFFSET(0x1C2BD2C0)
#define DEST_MATH_VISUALDEBUG_DRAWRAY_OFFSET UNITYSDK_OFFSET(0x1C2BD200)
#define DEST_MATH_VISUALDEBUG_DRAWRECTANGLE_OFFSET UNITYSDK_OFFSET(0x1C2BC9D0)
#define DEST_MATH_VISUALDEBUG_DRAWSEGMENTS_OFFSET UNITYSDK_OFFSET(0x1C2BB9B0)
#define DEST_MATH_VISUALDEBUG_DRAWSEGMENT_1_OFFSET UNITYSDK_OFFSET(0x1C2BBDD0)
#define DEST_MATH_VISUALDEBUG_DRAWSEGMENT_2_OFFSET UNITYSDK_OFFSET(0x1C2BD3C0)
#define DEST_MATH_VISUALDEBUG_DRAWSEGMENT_3_OFFSET UNITYSDK_OFFSET(0x1C2BD410)
#define DEST_MATH_VISUALDEBUG_DRAWSEGMENT_OFFSET UNITYSDK_OFFSET(0x1C2BBAE0)
#define DEST_MATH_VISUALDEBUG_DRAWSPHERE_OFFSET UNITYSDK_OFFSET(0x1C2BCFC0)
#define DEST_MATH_VISUALDEBUG_DRAWTETRAHEDRON_OFFSET UNITYSDK_OFFSET(0x1C2BDC70)
#define DEST_MATH_VISUALDEBUG_DRAWTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C2BE260)
#define DEST_MATH_VISUALDEBUG_DRAWTRIANGLE_1_OFFSET UNITYSDK_OFFSET(0x1C2BD530)
#define DEST_MATH_VISUALDEBUG_DRAWTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1C2BD450)
#define DEST_MATH_VISUALDEBUG_DRAWWIREPOINTS_OFFSET UNITYSDK_OFFSET(0x1C2BB7D0)
#define DEST_MATH_VISUALDEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2BE8B0)
#define DEST_MATH_VISUALDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BE8A0)

namespace Dest::Math
{
	inline static constexpr unsigned int VisualDebug_TypeDefinitionIndex = 33236;

	class VisualDebug : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet__lineLength()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(VisualDebug_TypeDefinitionIndex)->GetStaticField(0x8130);
		}
		static ::System::Single* StaticGet__pointRadius()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(VisualDebug_TypeDefinitionIndex)->GetStaticField(0x8134);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG__CCTOR_OFFSET))();
		}

		static ::System::Void DrawPoint(::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWPOINT_OFFSET))(position);
		}

		static ::System::Void DrawPoint_1(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWPOINT_1_OFFSET))(position);
		}

		static ::System::Void DrawPoints(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* points, ::System::Single size)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWPOINTS_OFFSET))(points, size);
		}

		static ::System::Void DrawPoints_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* points, ::System::Single size)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWPOINTS_1_OFFSET))(points, size);
		}

		static ::System::Void DrawWirePoints(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, ::System::Single size)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWWIREPOINTS_OFFSET))(points, size);
		}

		static ::System::Void DrawSegments(::Il2CppArray<::UnityEngine::Vector2>* points)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWSEGMENTS_OFFSET))(points);
		}

		static ::System::Void DrawPointsWithSegments(::Il2CppArray<::UnityEngine::Vector2>* points)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWPOINTSWITHSEGMENTS_OFFSET))(points);
		}

		static ::System::Void DrawSegment(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWSEGMENT_OFFSET))(p0, p1);
		}

		static ::System::Void DrawSegment_1(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWSEGMENT_1_OFFSET))(p0, p1);
		}

		static ::System::Void DrawAAB(::Dest::Math::AAB2& box)
		{
			return ((::System::Void(*)(::Dest::Math::AAB2&))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWAAB_OFFSET))(box);
		}

		static ::System::Void DrawAAB_1(::Dest::Math::AAB3& box)
		{
			return ((::System::Void(*)(::Dest::Math::AAB3&))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWAAB_1_OFFSET))(box);
		}

		static ::System::Void DrawBox(::Dest::Math::Box2& box)
		{
			return ((::System::Void(*)(::Dest::Math::Box2&))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWBOX_OFFSET))(box);
		}

		static ::System::Void DrawBox_1(::Dest::Math::Box3& box)
		{
			return ((::System::Void(*)(::Dest::Math::Box3&))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWBOX_1_OFFSET))(box);
		}

		static ::System::Void DrawRectangle(::Dest::Math::Rectangle3& rectangle)
		{
			return ((::System::Void(*)(::Dest::Math::Rectangle3&))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWRECTANGLE_OFFSET))(rectangle);
		}

		static ::System::Void DrawCircle(::Dest::Math::Circle2& circle)
		{
			return ((::System::Void(*)(::Dest::Math::Circle2&))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWCIRCLE_OFFSET))(circle);
		}

		static ::System::Void DrawCircle_1(::UnityEngine::Vector2 center, ::System::Single radius)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWCIRCLE_1_OFFSET))(center, radius);
		}

		static ::System::Void DrawCircle_2(::Dest::Math::Circle3& circle, ::System::Int32 count)
		{
			return ((::System::Void(*)(::Dest::Math::Circle3&, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWCIRCLE_2_OFFSET))(circle, count);
		}

		static ::System::Void DrawSphere(::Dest::Math::Sphere3& sphere)
		{
			return ((::System::Void(*)(::Dest::Math::Sphere3&))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWSPHERE_OFFSET))(sphere);
		}

		static ::System::Void DrawLine(::Dest::Math::Line2& line)
		{
			return ((::System::Void(*)(::Dest::Math::Line2&))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWLINE_OFFSET))(line);
		}

		static ::System::Void DrawLine_1(::Dest::Math::Line3& line)
		{
			return ((::System::Void(*)(::Dest::Math::Line3&))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWLINE_1_OFFSET))(line);
		}

		static ::System::Void DrawRay(::Dest::Math::Ray2& ray)
		{
			return ((::System::Void(*)(::Dest::Math::Ray2&))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWRAY_OFFSET))(ray);
		}

		static ::System::Void DrawRay_1(::Dest::Math::Ray3& ray)
		{
			return ((::System::Void(*)(::Dest::Math::Ray3&))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWRAY_1_OFFSET))(ray);
		}

		static ::System::Void DrawSegment_2(::Dest::Math::Segment2& segment)
		{
			return ((::System::Void(*)(::Dest::Math::Segment2&))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWSEGMENT_2_OFFSET))(segment);
		}

		static ::System::Void DrawSegment_3(::Dest::Math::Segment3& segment)
		{
			return ((::System::Void(*)(::Dest::Math::Segment3&))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWSEGMENT_3_OFFSET))(segment);
		}

		static ::System::Void DrawTriangle(::Dest::Math::Triangle2& triangle)
		{
			return ((::System::Void(*)(::Dest::Math::Triangle2&))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWTRIANGLE_OFFSET))(triangle);
		}

		static ::System::Void DrawTriangle_1(::Dest::Math::Triangle3& triangle)
		{
			return ((::System::Void(*)(::Dest::Math::Triangle3&))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWTRIANGLE_1_OFFSET))(triangle);
		}

		static ::System::Void DrawPlane(::Dest::Math::Plane3& plane, ::UnityEngine::Transform* Plane)
		{
			return ((::System::Void(*)(::Dest::Math::Plane3&, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWPLANE_OFFSET))(plane, Plane);
		}

		static ::System::Void DrawPolygon(::Dest::Math::Polygon2* polygon)
		{
			return ((::System::Void(*)(::Dest::Math::Polygon2*))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWPOLYGON_OFFSET))(polygon);
		}

		static ::System::Void DrawPolygon_1(::Dest::Math::Polygon3* polygon)
		{
			return ((::System::Void(*)(::Dest::Math::Polygon3*))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWPOLYGON_1_OFFSET))(polygon);
		}

		static ::System::Void DrawFunc(::System::Func_2<::System::Single, ::System::Single>* func, ::System::Single from, ::System::Single to, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Func_2<::System::Single, ::System::Single>*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWFUNC_OFFSET))(func, from, to, count);
		}

		static ::System::Void DrawTetrahedron(::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::UnityEngine::Vector3 v3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWTETRAHEDRON_OFFSET))(v0, v1, v2, v3);
		}

		static ::System::Void DrawCapsule(::Dest::Math::Capsule3& capsule)
		{
			return ((::System::Void(*)(::Dest::Math::Capsule3&))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWCAPSULE_OFFSET))(capsule);
		}

		static ::System::Void DrawTransform(::UnityEngine::Transform* t, ::System::Single AxisLength)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_VISUALDEBUG_DRAWTRANSFORM_OFFSET))(t, AxisLength);
		}
	};
}
