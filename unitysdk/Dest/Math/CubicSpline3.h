#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/SplineBase.h"
#include "unitysdk/Dest/Math/SplineTypes.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DEST_MATH_CUBICSPLINE3_ADDVERTEXFIRST_OFFSET UNITYSDK_OFFSET(0x1FAD2D40)
#define DEST_MATH_CUBICSPLINE3_ADDVERTEXLAST_OFFSET UNITYSDK_OFFSET(0x1FAD2E00)
#define DEST_MATH_CUBICSPLINE3_BUILDSPLINE_OFFSET UNITYSDK_OFFSET(0x1FAD1680)
#define DEST_MATH_CUBICSPLINE3_CLEAR_OFFSET UNITYSDK_OFFSET(0x1FAD2F80)
#define DEST_MATH_CUBICSPLINE3_CREATECLOSEDSPLINE_OFFSET UNITYSDK_OFFSET(0x1FAD21C0)
#define DEST_MATH_CUBICSPLINE3_CREATEOPENEDSPLINE_OFFSET UNITYSDK_OFFSET(0x1FAD1B90)
#define DEST_MATH_CUBICSPLINE3_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1FAD1770)
#define DEST_MATH_CUBICSPLINE3_CREATE_OFFSET UNITYSDK_OFFSET(0x1FAD16C0)
#define DEST_MATH_CUBICSPLINE3_GETVERTEX_OFFSET UNITYSDK_OFFSET(0x1FAD3170)
#define DEST_MATH_CUBICSPLINE3_GET_SPLINETYPE_OFFSET UNITYSDK_OFFSET(0x1FAD1620)
#define DEST_MATH_CUBICSPLINE3_INSERTAFTER_OFFSET UNITYSDK_OFFSET(0x1FAD30A0)
#define DEST_MATH_CUBICSPLINE3_INSERTBEFORE_OFFSET UNITYSDK_OFFSET(0x1FAD2FD0)
#define DEST_MATH_CUBICSPLINE3_REMOVEVERTEX_OFFSET UNITYSDK_OFFSET(0x1FAD2EC0)
#define DEST_MATH_CUBICSPLINE3_SETVERTEX_OFFSET UNITYSDK_OFFSET(0x1FAD31F0)
#define DEST_MATH_CUBICSPLINE3_SET_SPLINETYPE_OFFSET UNITYSDK_OFFSET(0x1FAD1630)
#define DEST_MATH_CUBICSPLINE3__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD32A0)

namespace Dest::Math
{
	inline static constexpr unsigned int CubicSpline3_TypeDefinitionIndex = 35450;

	class CubicSpline3 : public ::Dest::Math::SplineBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CUBICSPLINE3__CTOR_OFFSET))(this);
		}

		::Dest::Math::SplineTypes get_SplineType()
		{
			return ((::Dest::Math::SplineTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CUBICSPLINE3_GET_SPLINETYPE_OFFSET))(this);
		}

		::System::Void set_SplineType(::Dest::Math::SplineTypes value)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::SplineTypes))((::PBYTE)hIl2Cpp + DEST_MATH_CUBICSPLINE3_SET_SPLINETYPE_OFFSET))(this, value);
		}

		static ::Dest::Math::CubicSpline3* Create()
		{
			return ((::Dest::Math::CubicSpline3*(*)())((::PBYTE)hIl2Cpp + DEST_MATH_CUBICSPLINE3_CREATE_OFFSET))();
		}

		static ::Dest::Math::CubicSpline3* Create_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, ::Dest::Math::SplineTypes type)
		{
			return ((::Dest::Math::CubicSpline3*(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::Dest::Math::SplineTypes))((::PBYTE)hIl2Cpp + DEST_MATH_CUBICSPLINE3_CREATE_1_OFFSET))(points, type);
		}

		::System::Void BuildSpline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CUBICSPLINE3_BUILDSPLINE_OFFSET))(this);
		}

		::System::Void CreateOpenedSpline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CUBICSPLINE3_CREATEOPENEDSPLINE_OFFSET))(this);
		}

		::System::Void CreateClosedSpline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CUBICSPLINE3_CREATECLOSEDSPLINE_OFFSET))(this);
		}

		::System::Void AddVertexFirst(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_CUBICSPLINE3_ADDVERTEXFIRST_OFFSET))(this, position);
		}

		::System::Void AddVertexLast(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_CUBICSPLINE3_ADDVERTEXLAST_OFFSET))(this, position);
		}

		::System::Void RemoveVertex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_CUBICSPLINE3_REMOVEVERTEX_OFFSET))(this, index);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CUBICSPLINE3_CLEAR_OFFSET))(this);
		}

		::System::Void InsertBefore(::System::Int32 vertexIndex, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_CUBICSPLINE3_INSERTBEFORE_OFFSET))(this, vertexIndex, position);
		}

		::System::Void InsertAfter(::System::Int32 vertexIndex, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_CUBICSPLINE3_INSERTAFTER_OFFSET))(this, vertexIndex, position);
		}

		::UnityEngine::Vector3 GetVertex(::System::Int32 vertexIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_CUBICSPLINE3_GETVERTEX_OFFSET))(this, vertexIndex);
		}

		::System::Void SetVertex(::System::Int32 vertexIndex, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_CUBICSPLINE3_SETVERTEX_OFFSET))(this, vertexIndex, position);
		}
	};
}
