#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CurvePoint.h"
#include "unitysdk/LargeVector.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CURVEINTERPOLATOR_CATMULL3_OFFSET UNITYSDK_OFFSET(0x13A62840)
#define CURVEINTERPOLATOR_CATMULLN_OFFSET UNITYSDK_OFFSET(0x13A62B40)
#define CURVEINTERPOLATOR_CATMULLROM_OFFSET UNITYSDK_OFFSET(0x13A62CF0)
#define CURVEINTERPOLATOR_EVALUATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x13A62420)
#define CURVEINTERPOLATOR_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13A62380)
#define CURVEINTERPOLATOR_LERP2_OFFSET UNITYSDK_OFFSET(0x13A62710)
#define CURVEINTERPOLATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x13A62310)

inline static constexpr unsigned int CurveInterpolator_TypeDefinitionIndex = 81911;

class CurveInterpolator : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::CurvePoint>* _points; // 0x10
	::System::Int32 _vectorSize; // 0x18

	::System::Void _ctor(::System::Int32 vectorSize, ::System::Collections::Generic::List_1<::CurvePoint>* points)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::CurvePoint>*))((::PBYTE)hIl2Cpp + CURVEINTERPOLATOR__CTOR_OFFSET))(this, vectorSize, points);
	}

	::Il2CppArray<::UnityEngine::Vector2>* Evaluate(::System::Single t)
	{
		return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CURVEINTERPOLATOR_EVALUATE_OFFSET))(this, t);
	}

	::LargeVector Evaluate_internal(::System::Single t)
	{
		return ((::LargeVector(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CURVEINTERPOLATOR_EVALUATE_INTERNAL_OFFSET))(this, t);
	}

	::LargeVector Lerp2(::CurvePoint a, ::CurvePoint b, ::System::Single t)
	{
		return ((::LargeVector(*)(::PVOID, ::CurvePoint, ::CurvePoint, ::System::Single))((::PBYTE)hIl2Cpp + CURVEINTERPOLATOR_LERP2_OFFSET))(this, a, b, t);
	}

	::LargeVector Catmull3(::System::Int32 idx, ::System::Single t)
	{
		return ((::LargeVector(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CURVEINTERPOLATOR_CATMULL3_OFFSET))(this, idx, t);
	}

	::LargeVector CatmullN(::System::Int32 idx, ::System::Single t)
	{
		return ((::LargeVector(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CURVEINTERPOLATOR_CATMULLN_OFFSET))(this, idx, t);
	}

	static ::LargeVector CatmullRom(::LargeVector p0, ::LargeVector p1, ::LargeVector p2, ::LargeVector p3, ::System::Single u)
	{
		return ((::LargeVector(*)(::LargeVector, ::LargeVector, ::LargeVector, ::LargeVector, ::System::Single))((::PBYTE)hIl2Cpp + CURVEINTERPOLATOR_CATMULLROM_OFFSET))(p0, p1, p2, p3, u);
	}
};
