#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Transform; }

#define SCENEWATERPROXY_BARYCENTRIC_COORDS_OFFSET UNITYSDK_OFFSET(0x1E57BE60)
#define SCENEWATERPROXY_GETBOUNDINWS_1_OFFSET UNITYSDK_OFFSET(0x1E57D190)
#define SCENEWATERPROXY_GETBOUNDINWS_OFFSET UNITYSDK_OFFSET(0x1E57D0E0)
#define SCENEWATERPROXY_GETMINMAXV2_OFFSET UNITYSDK_OFFSET(0x1E57C320)
#define SCENEWATERPROXY_GETMINMAX_OFFSET UNITYSDK_OFFSET(0x1E57C2A0)
#define SCENEWATERPROXY_INTERPOLATE_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E57BFE0)
#define SCENEWATERPROXY_ISPOINTINTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1E57BB10)
#define SCENEWATERPROXY_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1E57C380)
#define SCENEWATERPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E57AB70)
#define SCENEWATERPROXY_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E57CE30)
#define SCENEWATERPROXY_SETWAVECENTERPOS_OFFSET UNITYSDK_OFFSET(0x1E57AEC0)
#define SCENEWATERPROXY_TRIANGLE_INTERPOLATION_OFFSET UNITYSDK_OFFSET(0x1E57C0A0)
#define SCENEWATERPROXY_TRIANGLE_INTERPOLATION_UP_DOWN_OFFSET UNITYSDK_OFFSET(0x1E57BC50)
#define SCENEWATERPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E57D860)

inline static constexpr unsigned int SceneWaterProxy_TypeDefinitionIndex = 38049;

class SceneWaterProxy : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Int32 textureSize; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* waterSource; // 0x20
	::UnityEngine::Vector2 moveDirectionA; // 0x28
	::UnityEngine::Vector2 moveDirectionB; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* waveCenters; // 0x38
	::Il2CppArray<::UnityEngine::Vector2>* waveCentersUV; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEWATERPROXY__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEWATERPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void SetWaveCenterPos()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEWATERPROXY_SETWAVECENTERPOS_OFFSET))(this);
	}

	::System::ValueTuple_3<::System::Double, ::System::Double, ::System::Double> barycentric_coords(::UnityEngine::Vector2 v1, ::UnityEngine::Vector2 v2, ::UnityEngine::Vector2 v3, ::UnityEngine::Vector2 p)
	{
		return ((::System::ValueTuple_3<::System::Double, ::System::Double, ::System::Double>(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SCENEWATERPROXY_BARYCENTRIC_COORDS_OFFSET))(this, v1, v2, v3, p);
	}

	::System::ValueTuple_2<::System::Double, ::System::Double> interpolate_attributes(::UnityEngine::Vector2 c1, ::UnityEngine::Vector2 c2, ::UnityEngine::Vector2 c3, ::System::Double u, ::System::Double s, ::System::Double t)
	{
		return ((::System::ValueTuple_2<::System::Double, ::System::Double>(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SCENEWATERPROXY_INTERPOLATE_ATTRIBUTES_OFFSET))(this, c1, c2, c3, u, s, t);
	}

	::System::ValueTuple_2<::System::Double, ::System::Double> triangle_interpolation(::UnityEngine::Vector2 v1, ::UnityEngine::Vector2 v2, ::UnityEngine::Vector2 v3, ::UnityEngine::Vector2 c1, ::UnityEngine::Vector2 c2, ::UnityEngine::Vector2 c3, ::UnityEngine::Vector2 p)
	{
		return ((::System::ValueTuple_2<::System::Double, ::System::Double>(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SCENEWATERPROXY_TRIANGLE_INTERPOLATION_OFFSET))(this, v1, v2, v3, c1, c2, c3, p);
	}

	::System::ValueTuple_2<::System::Double, ::System::Double> triangle_interpolation_up_down(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::UnityEngine::Vector3 v3, ::UnityEngine::Vector2 c1, ::UnityEngine::Vector2 c2, ::UnityEngine::Vector2 c3, ::UnityEngine::Vector3 p)
	{
		return ((::System::ValueTuple_2<::System::Double, ::System::Double>(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SCENEWATERPROXY_TRIANGLE_INTERPOLATION_UP_DOWN_OFFSET))(this, v1, v2, v3, c1, c2, c3, p);
	}

	::System::Void GetMinMax(::UnityEngine::Vector2& min, ::UnityEngine::Vector2& max, ::UnityEngine::Vector3 input)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SCENEWATERPROXY_GETMINMAX_OFFSET))(this, min, max, input);
	}

	::System::Void GetMinMaxV2(::UnityEngine::Vector2& min, ::UnityEngine::Vector2& max, ::UnityEngine::Vector2 input)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SCENEWATERPROXY_GETMINMAXV2_OFFSET))(this, min, max, input);
	}

	static ::System::Boolean IsPointInTriangle(::System::ValueTuple_2<::System::Double, ::System::Double> v1, ::System::ValueTuple_2<::System::Double, ::System::Double> v2, ::System::ValueTuple_2<::System::Double, ::System::Double> v3, ::System::ValueTuple_2<::System::Double, ::System::Double> p)
	{
		return ((::System::Boolean(*)(::System::ValueTuple_2<::System::Double, ::System::Double>, ::System::ValueTuple_2<::System::Double, ::System::Double>, ::System::ValueTuple_2<::System::Double, ::System::Double>, ::System::ValueTuple_2<::System::Double, ::System::Double>))((::PBYTE)hIl2Cpp + SCENEWATERPROXY_ISPOINTINTRIANGLE_OFFSET))(v1, v2, v3, p);
	}

	::System::Void OnDrawGizmos()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEWATERPROXY_ONDRAWGIZMOS_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEWATERPROXY_ONVALIDATE_OFFSET))(this);
	}

	::UnityEngine::Bounds GetBoundInWS(::UnityEngine::MeshFilter* filter)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::MeshFilter*))((::PBYTE)hIl2Cpp + SCENEWATERPROXY_GETBOUNDINWS_OFFSET))(this, filter);
	}

	::UnityEngine::Bounds GetBoundInWS_1(::UnityEngine::Bounds bounds, ::UnityEngine::Transform* objTransform)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SCENEWATERPROXY_GETBOUNDINWS_1_OFFSET))(this, bounds, objTransform);
	}
};
