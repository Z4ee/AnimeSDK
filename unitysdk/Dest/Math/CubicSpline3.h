#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/SplineBase.h"
#include "unitysdk/Dest/Math/SplineTypes.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DEST_MATH_CUBICSPLINE3_ADDVERTEXFIRST_OFFSET UNITYSDK_OFFSET(0x1E6EE880)
#define DEST_MATH_CUBICSPLINE3_ADDVERTEXLAST_OFFSET UNITYSDK_OFFSET(0x1E6EE940)
#define DEST_MATH_CUBICSPLINE3_BUILDSPLINE_OFFSET UNITYSDK_OFFSET(0x1E6ED1E0)
#define DEST_MATH_CUBICSPLINE3_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E6EEAC0)
#define DEST_MATH_CUBICSPLINE3_CREATECLOSEDSPLINE_OFFSET UNITYSDK_OFFSET(0x1E6EDD00)
#define DEST_MATH_CUBICSPLINE3_CREATEOPENEDSPLINE_OFFSET UNITYSDK_OFFSET(0x1E6ED6D0)
#define DEST_MATH_CUBICSPLINE3_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1E6ED2D0)
#define DEST_MATH_CUBICSPLINE3_CREATE_OFFSET UNITYSDK_OFFSET(0x1E6ED220)
#define DEST_MATH_CUBICSPLINE3_GETVERTEX_OFFSET UNITYSDK_OFFSET(0x1E6EECB0)
#define DEST_MATH_CUBICSPLINE3_GET_SPLINETYPE_OFFSET UNITYSDK_OFFSET(0x1E6ED180)
#define DEST_MATH_CUBICSPLINE3_INSERTAFTER_OFFSET UNITYSDK_OFFSET(0x1E6EEBE0)
#define DEST_MATH_CUBICSPLINE3_INSERTBEFORE_OFFSET UNITYSDK_OFFSET(0x1E6EEB10)
#define DEST_MATH_CUBICSPLINE3_REMOVEVERTEX_OFFSET UNITYSDK_OFFSET(0x1E6EEA00)
#define DEST_MATH_CUBICSPLINE3_SETVERTEX_OFFSET UNITYSDK_OFFSET(0x1E6EED30)
#define DEST_MATH_CUBICSPLINE3_SET_SPLINETYPE_OFFSET UNITYSDK_OFFSET(0x1E6ED190)
#define DEST_MATH_CUBICSPLINE3__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6EEDE0)

namespace Dest::Math
{
	inline static constexpr unsigned int CubicSpline3_TypeDefinitionIndex = 34791;

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
