#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EzySlice/Triangle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EZYSLICE_INTERSECTIONRESULT_ADDINTERSECTIONPOINT_OFFSET UNITYSDK_OFFSET(0x1B7EF270)
#define EZYSLICE_INTERSECTIONRESULT_ADDLOWERHULL_OFFSET UNITYSDK_OFFSET(0x1B7EF210)
#define EZYSLICE_INTERSECTIONRESULT_ADDUPPERHULL_OFFSET UNITYSDK_OFFSET(0x1B7EF1B0)
#define EZYSLICE_INTERSECTIONRESULT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B7EF2C0)
#define EZYSLICE_INTERSECTIONRESULT_GET_INTERSECTIONPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7EF190)
#define EZYSLICE_INTERSECTIONRESULT_GET_INTERSECTIONPOINTS_OFFSET UNITYSDK_OFFSET(0x1B7EF160)
#define EZYSLICE_INTERSECTIONRESULT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1B7EF1A0)
#define EZYSLICE_INTERSECTIONRESULT_GET_LOWERHULLCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7EF180)
#define EZYSLICE_INTERSECTIONRESULT_GET_LOWERHULL_OFFSET UNITYSDK_OFFSET(0x1B7EF150)
#define EZYSLICE_INTERSECTIONRESULT_GET_UPPERHULLCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7EF170)
#define EZYSLICE_INTERSECTIONRESULT_GET_UPPERHULL_OFFSET UNITYSDK_OFFSET(0x1B7EF140)
#define EZYSLICE_INTERSECTIONRESULT_ONDEBUGDRAW_1_OFFSET UNITYSDK_OFFSET(0x1B7EF2F0)
#define EZYSLICE_INTERSECTIONRESULT_ONDEBUGDRAW_OFFSET UNITYSDK_OFFSET(0x1B7EF2E0)
#define EZYSLICE_INTERSECTIONRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EF0C0)

namespace EzySlice
{
	inline static constexpr unsigned int IntersectionResult_TypeDefinitionIndex = 45218;

	class IntersectionResult : public ::System::Object
	{
	public:
		::Il2CppArray<::EzySlice::Triangle>* lower_hull; // 0x10
		::Il2CppArray<::EzySlice::Triangle>* upper_hull; // 0x18
		::Il2CppArray<::UnityEngine::Vector3>* intersection_pt; // 0x20
		::System::Int32 upper_hull_count; // 0x28
		::System::Int32 intersection_pt_count; // 0x2C
		::System::Boolean is_success; // 0x30
		::System::Int32 lower_hull_count; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTIONRESULT__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::EzySlice::Triangle>* get_upperHull()
		{
			return ((::Il2CppArray<::EzySlice::Triangle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTIONRESULT_GET_UPPERHULL_OFFSET))(this);
		}

		::Il2CppArray<::EzySlice::Triangle>* get_lowerHull()
		{
			return ((::Il2CppArray<::EzySlice::Triangle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTIONRESULT_GET_LOWERHULL_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_intersectionPoints()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTIONRESULT_GET_INTERSECTIONPOINTS_OFFSET))(this);
		}

		::System::Int32 get_upperHullCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTIONRESULT_GET_UPPERHULLCOUNT_OFFSET))(this);
		}

		::System::Int32 get_lowerHullCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTIONRESULT_GET_LOWERHULLCOUNT_OFFSET))(this);
		}

		::System::Int32 get_intersectionPointCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTIONRESULT_GET_INTERSECTIONPOINTCOUNT_OFFSET))(this);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTIONRESULT_GET_ISVALID_OFFSET))(this);
		}

		::EzySlice::IntersectionResult* AddUpperHull(::EzySlice::Triangle a1)
		{
			return ((::EzySlice::IntersectionResult*(*)(::PVOID, ::EzySlice::Triangle))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTIONRESULT_ADDUPPERHULL_OFFSET))(this, a1);
		}

		::EzySlice::IntersectionResult* AddLowerHull(::EzySlice::Triangle a1)
		{
			return ((::EzySlice::IntersectionResult*(*)(::PVOID, ::EzySlice::Triangle))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTIONRESULT_ADDLOWERHULL_OFFSET))(this, a1);
		}

		::System::Void AddIntersectionPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTIONRESULT_ADDINTERSECTIONPOINT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTIONRESULT_CLEAR_OFFSET))(this);
		}

		::System::Void OnDebugDraw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTIONRESULT_ONDEBUGDRAW_OFFSET))(this);
		}

		::System::Void OnDebugDraw_1(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + EZYSLICE_INTERSECTIONRESULT_ONDEBUGDRAW_1_OFFSET))(this, a1);
		}
	};
}
