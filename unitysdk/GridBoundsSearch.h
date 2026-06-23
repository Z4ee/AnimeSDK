#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

class StaticGrid2D;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GRIDBOUNDSSEARCH_FINDBINARY_OFFSET UNITYSDK_OFFSET(0xE7E9460)
#define GRIDBOUNDSSEARCH_FINDENDCOLBINARY_OFFSET UNITYSDK_OFFSET(0xE7E9970)
#define GRIDBOUNDSSEARCH_FINDENDROWBINARY_OFFSET UNITYSDK_OFFSET(0xE7E9750)
#define GRIDBOUNDSSEARCH_FINDPOINTSINBOUNDSBRUTEFORCE_OFFSET UNITYSDK_OFFSET(0xE7E9170)
#define GRIDBOUNDSSEARCH_FINDPOINTSINBOUNDSOPTIMIZED_OFFSET UNITYSDK_OFFSET(0xE7E9A80)
#define GRIDBOUNDSSEARCH_FINDPOINTSINBOUNDSRECURSIVE_OFFSET UNITYSDK_OFFSET(0xE7E9CC0)
#define GRIDBOUNDSSEARCH_FINDPOINTSINBOUNDSSMART_OFFSET UNITYSDK_OFFSET(0xE7EA5F0)
#define GRIDBOUNDSSEARCH_FINDPOINTSINBOUNDS_OFFSET UNITYSDK_OFFSET(0xE7E8E30)
#define GRIDBOUNDSSEARCH_FINDSTARTCOLBINARY_OFFSET UNITYSDK_OFFSET(0xE7E9860)
#define GRIDBOUNDSSEARCH_FINDSTARTROWBINARY_OFFSET UNITYSDK_OFFSET(0xE7E9640)
#define GRIDBOUNDSSEARCH_GETINTERSECTIONBOUNDS_OFFSET UNITYSDK_OFFSET(0xE7EA880)
#define GRIDBOUNDSSEARCH_GETSUBGRIDBOUNDS_OFFSET UNITYSDK_OFFSET(0xE7EA3C0)
#define GRIDBOUNDSSEARCH_SEARCHRECURSIVE_OFFSET UNITYSDK_OFFSET(0xE7E9DF0)

inline static constexpr unsigned int GridBoundsSearch_TypeDefinitionIndex = 84253;

class GridBoundsSearch : public ::System::Object
{
public:
	static ::System::Void FindPointsInBounds(::StaticGrid2D* grid, ::UnityEngine::Bounds bounds, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& result)
	{
		return ((::System::Void(*)(::StaticGrid2D*, ::UnityEngine::Bounds, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + GRIDBOUNDSSEARCH_FINDPOINTSINBOUNDS_OFFSET))(grid, bounds, result);
	}

	static ::System::Int32 FindStartRowBinary(::StaticGrid2D* grid, ::System::Single minY)
	{
		return ((::System::Int32(*)(::StaticGrid2D*, ::System::Single))((::PBYTE)hIl2Cpp + GRIDBOUNDSSEARCH_FINDSTARTROWBINARY_OFFSET))(grid, minY);
	}

	static ::System::Int32 FindBinary(::StaticGrid2D* grid, ::System::Single threshold, ::System::Boolean findRow, ::System::Int32 defaultResult)
	{
		return ((::System::Int32(*)(::StaticGrid2D*, ::System::Single, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + GRIDBOUNDSSEARCH_FINDBINARY_OFFSET))(grid, threshold, findRow, defaultResult);
	}

	static ::System::Int32 FindEndRowBinary(::StaticGrid2D* grid, ::System::Single maxY)
	{
		return ((::System::Int32(*)(::StaticGrid2D*, ::System::Single))((::PBYTE)hIl2Cpp + GRIDBOUNDSSEARCH_FINDENDROWBINARY_OFFSET))(grid, maxY);
	}

	static ::System::Int32 FindStartColBinary(::StaticGrid2D* grid, ::System::Single minX)
	{
		return ((::System::Int32(*)(::StaticGrid2D*, ::System::Single))((::PBYTE)hIl2Cpp + GRIDBOUNDSSEARCH_FINDSTARTCOLBINARY_OFFSET))(grid, minX);
	}

	static ::System::Int32 FindEndColBinary(::StaticGrid2D* grid, ::System::Single maxX)
	{
		return ((::System::Int32(*)(::StaticGrid2D*, ::System::Single))((::PBYTE)hIl2Cpp + GRIDBOUNDSSEARCH_FINDENDCOLBINARY_OFFSET))(grid, maxX);
	}

	static ::System::Void FindPointsInBoundsBruteForce(::StaticGrid2D* grid, ::UnityEngine::Bounds bounds, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& result)
	{
		return ((::System::Void(*)(::StaticGrid2D*, ::UnityEngine::Bounds, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + GRIDBOUNDSSEARCH_FINDPOINTSINBOUNDSBRUTEFORCE_OFFSET))(grid, bounds, result);
	}

	static ::System::Void FindPointsInBoundsOptimized(::StaticGrid2D* grid, ::UnityEngine::Bounds bounds, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& result)
	{
		return ((::System::Void(*)(::StaticGrid2D*, ::UnityEngine::Bounds, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + GRIDBOUNDSSEARCH_FINDPOINTSINBOUNDSOPTIMIZED_OFFSET))(grid, bounds, result);
	}

	static ::System::Void FindPointsInBoundsRecursive(::StaticGrid2D* grid, ::UnityEngine::Bounds bounds, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& result)
	{
		return ((::System::Void(*)(::StaticGrid2D*, ::UnityEngine::Bounds, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + GRIDBOUNDSSEARCH_FINDPOINTSINBOUNDSRECURSIVE_OFFSET))(grid, bounds, result);
	}

	static ::System::Void SearchRecursive(::StaticGrid2D* grid, ::UnityEngine::Bounds bounds, ::System::Int32 rowStart, ::System::Int32 rowEnd, ::System::Int32 colStart, ::System::Int32 colEnd, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* result)
	{
		return ((::System::Void(*)(::StaticGrid2D*, ::UnityEngine::Bounds, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + GRIDBOUNDSSEARCH_SEARCHRECURSIVE_OFFSET))(grid, bounds, rowStart, rowEnd, colStart, colEnd, result);
	}

	static ::UnityEngine::Bounds GetSubGridBounds(::StaticGrid2D* grid, ::System::Int32 rowStart, ::System::Int32 rowEnd, ::System::Int32 colStart, ::System::Int32 colEnd)
	{
		return ((::UnityEngine::Bounds(*)(::StaticGrid2D*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GRIDBOUNDSSEARCH_GETSUBGRIDBOUNDS_OFFSET))(grid, rowStart, rowEnd, colStart, colEnd);
	}

	static ::System::Void FindPointsInBoundsSmart(::StaticGrid2D* grid, ::UnityEngine::Bounds bounds, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& result)
	{
		return ((::System::Void(*)(::StaticGrid2D*, ::UnityEngine::Bounds, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*&))((::PBYTE)hIl2Cpp + GRIDBOUNDSSEARCH_FINDPOINTSINBOUNDSSMART_OFFSET))(grid, bounds, result);
	}

	static ::UnityEngine::Bounds GetIntersectionBounds(::UnityEngine::Bounds bounds1, ::UnityEngine::Bounds bounds2)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + GRIDBOUNDSSEARCH_GETINTERSECTIONBOUNDS_OFFSET))(bounds1, bounds2);
	}
};
