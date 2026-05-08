#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StraightPathFlags.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/Experimental/AI/NavMeshLocation.h"
#include "unitysdk/UnityEngine/Experimental/AI/NavMeshQuery.h"
#include "unitysdk/UnityEngine/Experimental/AI/PathQueryStatus.h"
#include "unitysdk/UnityEngine/Experimental/AI/PolygonId.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshPath; }

#define PATHUTILS_FINDNEARESTPOINTSBYPATH_OFFSET UNITYSDK_OFFSET(0x18EB9AD0)
#define PATHUTILS_FINDSTRAIGHTPATH_OFFSET UNITYSDK_OFFSET(0x18EB83B0)
#define PATHUTILS_PERP2D_OFFSET UNITYSDK_OFFSET(0x18EB7D60)
#define PATHUTILS_RETRACEPORTALS_OFFSET UNITYSDK_OFFSET(0x18EB7E50)
#define PATHUTILS_SWAP_OFFSET UNITYSDK_OFFSET(0x18EB7DE0)
#define PATHUTILS_TRYCALCULATEPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x18EB9FC0)
#define PATHUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18EBA3A0)
#define PATHUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x18EBA390)

inline static constexpr unsigned int PathUtils_TypeDefinitionIndex = 39714;

class PathUtils : public ::System::Object
{
public:
	static ::UnityEngine::AI::NavMeshPath** StaticGet_CommNavMeshPath()
	{
		return (::UnityEngine::AI::NavMeshPath**)Il2CppClass::FromTypeDefinitionIndex(PathUtils_TypeDefinitionIndex)->GetStaticField(0x46D60);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHUTILS__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PATHUTILS__CCTOR_OFFSET))();
	}

	static ::System::Single Perp2D(::UnityEngine::Vector3 u, ::UnityEngine::Vector3 v)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PATHUTILS_PERP2D_OFFSET))(u, v);
	}

	static ::System::Void Swap(::UnityEngine::Vector3& a, ::UnityEngine::Vector3& b)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + PATHUTILS_SWAP_OFFSET))(a, b);
	}

	static ::System::Int32 RetracePortals(::UnityEngine::Experimental::AI::NavMeshQuery query, ::System::Int32 startIndex, ::System::Int32 endIndex, ::Unity::Collections::NativeSlice_1<::UnityEngine::Experimental::AI::PolygonId> path, ::System::Int32 n, ::UnityEngine::Vector3 termPos, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::AI::NavMeshLocation>& straightPath, ::Unity::Collections::NativeArray_1<::StraightPathFlags>& straightPathFlags, ::System::Int32 maxStraightPath)
	{
		return ((::System::Int32(*)(::UnityEngine::Experimental::AI::NavMeshQuery, ::System::Int32, ::System::Int32, ::Unity::Collections::NativeSlice_1<::UnityEngine::Experimental::AI::PolygonId>, ::System::Int32, ::UnityEngine::Vector3, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::AI::NavMeshLocation>&, ::Unity::Collections::NativeArray_1<::StraightPathFlags>&, ::System::Int32))((::PBYTE)hIl2Cpp + PATHUTILS_RETRACEPORTALS_OFFSET))(query, startIndex, endIndex, path, n, termPos, straightPath, straightPathFlags, maxStraightPath);
	}

	static ::UnityEngine::Experimental::AI::PathQueryStatus FindStraightPath(::UnityEngine::Experimental::AI::NavMeshQuery query, ::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 endPos, ::Unity::Collections::NativeSlice_1<::UnityEngine::Experimental::AI::PolygonId> path, ::System::Int32 pathSize, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::AI::NavMeshLocation>& straightPath, ::Unity::Collections::NativeArray_1<::StraightPathFlags>& straightPathFlags, ::Unity::Collections::NativeArray_1<::System::Single>& vertexSide, ::System::Int32& straightPathCount, ::System::Int32 maxStraightPath)
	{
		return ((::UnityEngine::Experimental::AI::PathQueryStatus(*)(::UnityEngine::Experimental::AI::NavMeshQuery, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Unity::Collections::NativeSlice_1<::UnityEngine::Experimental::AI::PolygonId>, ::System::Int32, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::AI::NavMeshLocation>&, ::Unity::Collections::NativeArray_1<::StraightPathFlags>&, ::Unity::Collections::NativeArray_1<::System::Single>&, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + PATHUTILS_FINDSTRAIGHTPATH_OFFSET))(query, startPos, endPos, path, pathSize, straightPath, straightPathFlags, vertexSide, straightPathCount, maxStraightPath);
	}

	static ::System::Void FindNearestPointsByPath(::UnityEngine::Vector3 source, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points, ::System::Single heightLimit, ::System::Int32 count, ::System::Int32& resCnt, ::System::Collections::Generic::List_1<::System::Int32>*& indexes)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Int32, ::System::Int32&, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + PATHUTILS_FINDNEARESTPOINTSBYPATH_OFFSET))(source, points, heightLimit, count, resCnt, indexes);
	}

	static ::System::Boolean TryCalculatePathLength(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Single& pathLength)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&))((::PBYTE)hIl2Cpp + PATHUTILS_TRYCALCULATEPATHLENGTH_OFFSET))(start, end, pathLength);
	}
};
