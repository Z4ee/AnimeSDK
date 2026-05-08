#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DEST_MATH_SPLINEBASE_ITEMDATA_ENSURERENDERPOINTSVALIDITY_OFFSET UNITYSDK_OFFSET(0x1C090880)
#define DEST_MATH_SPLINEBASE_ITEMDATA_EVALFIRSTDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x1C090E80)
#define DEST_MATH_SPLINEBASE_ITEMDATA_EVALLENGTH_1_OFFSET UNITYSDK_OFFSET(0x1C091180)
#define DEST_MATH_SPLINEBASE_ITEMDATA_EVALLENGTH_OFFSET UNITYSDK_OFFSET(0x1C091100)
#define DEST_MATH_SPLINEBASE_ITEMDATA_EVALPOSITION_OFFSET UNITYSDK_OFFSET(0x1C090E20)
#define DEST_MATH_SPLINEBASE_ITEMDATA_EVALSECONDDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x1C090EE0)
#define DEST_MATH_SPLINEBASE_ITEMDATA_EVALSPEED_OFFSET UNITYSDK_OFFSET(0x1C090F60)
#define DEST_MATH_SPLINEBASE_ITEMDATA_EVALTANGENT_OFFSET UNITYSDK_OFFSET(0x1C091020)
#define DEST_MATH_SPLINEBASE_ITEMDATA_EVALTHIRDDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x1C090F30)
#define DEST_MATH_SPLINEBASE_ITEMDATA_PROCESSLENGTH_OFFSET UNITYSDK_OFFSET(0x1C091210)
#define DEST_MATH_SPLINEBASE_ITEMDATA_UPDATERENDERPOINTS_OFFSET UNITYSDK_OFFSET(0x1C0908E0)
#define DEST_MATH_SPLINEBASE_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0912B0)

namespace Dest::Math
{
	inline static constexpr unsigned int SplineBase_ItemData_TypeDefinitionIndex = 33234;

	class SplineBase_ItemData : public ::System::Object
	{
	public:
		// static const ::System::Int32 SegmentCount = 0xA; // 0x0
		// static const ::System::Int32 SegmentCountPlus1 = 0xB; // 0x0
		// static const ::System::Single DeltaTime; // 0x0
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Vector3 A; // 0x1C
		::UnityEngine::Vector3 B; // 0x28
		::UnityEngine::Vector3 C; // 0x34
		::UnityEngine::Vector3 D; // 0x40
		::System::Single Length; // 0x4C
		::System::Single AccumulatedLength; // 0x50
		::Il2CppArray<::UnityEngine::Vector3>* RenderPoints; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_ITEMDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean EnsureRenderPointsValidity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_ITEMDATA_ENSURERENDERPOINTSVALIDITY_OFFSET))(this);
		}

		::System::Void UpdateRenderPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_ITEMDATA_UPDATERENDERPOINTS_OFFSET))(this);
		}

		::UnityEngine::Vector3 EvalPosition(::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_ITEMDATA_EVALPOSITION_OFFSET))(this, t);
		}

		::UnityEngine::Vector3 EvalFirstDerivative(::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_ITEMDATA_EVALFIRSTDERIVATIVE_OFFSET))(this, t);
		}

		::UnityEngine::Vector3 EvalSecondDerivative(::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_ITEMDATA_EVALSECONDDERIVATIVE_OFFSET))(this, t);
		}

		::UnityEngine::Vector3 EvalThirdDerivative(::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_ITEMDATA_EVALTHIRDDERIVATIVE_OFFSET))(this, t);
		}

		::System::Single EvalSpeed(::System::Single t)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_ITEMDATA_EVALSPEED_OFFSET))(this, t);
		}

		::UnityEngine::Vector3 EvalTangent(::System::Single t)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_ITEMDATA_EVALTANGENT_OFFSET))(this, t);
		}

		::System::Single EvalLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_ITEMDATA_EVALLENGTH_OFFSET))(this);
		}

		::System::Single EvalLength_1(::System::Single t0, ::System::Single t1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_ITEMDATA_EVALLENGTH_1_OFFSET))(this, t0, t1);
		}

		::System::Single ProcessLength(::System::Single currentLength)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPLINEBASE_ITEMDATA_PROCESSLENGTH_OFFSET))(this, currentLength);
		}
	};
}
