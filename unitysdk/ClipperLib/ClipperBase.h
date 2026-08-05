#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ClipperLib/IntPoint.h"
#include "unitysdk/ClipperLib/IntRect.h"
#include "unitysdk/ClipperLib/PolyType.h"
#include "unitysdk/System/Object.h"

namespace ClipperLib { class LocalMinima; }
namespace ClipperLib { class OutPt; }
namespace ClipperLib { class OutRec; }
namespace ClipperLib { class Scanbeam; }
namespace ClipperLib { class TEdge; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLIPPERLIB_CLIPPERBASE_ADDPATHS_OFFSET UNITYSDK_OFFSET(0x1E3D0C70)
#define CLIPPERLIB_CLIPPERBASE_ADDPATH_OFFSET UNITYSDK_OFFSET(0x1E3CFE80)
#define CLIPPERLIB_CLIPPERBASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E3D3940)
#define CLIPPERLIB_CLIPPERBASE_CREATEOUTREC_OFFSET UNITYSDK_OFFSET(0x1E3CA9A0)
#define CLIPPERLIB_CLIPPERBASE_DELETEFROMAEL_OFFSET UNITYSDK_OFFSET(0x1E3CC2B0)
#define CLIPPERLIB_CLIPPERBASE_DISPOSELOCALMINIMALIST_OFFSET UNITYSDK_OFFSET(0x1E3D3AC0)
#define CLIPPERLIB_CLIPPERBASE_DISPOSEOUTREC_OFFSET UNITYSDK_OFFSET(0x1E3C8CA0)
#define CLIPPERLIB_CLIPPERBASE_FINDNEXTLOCMIN_OFFSET UNITYSDK_OFFSET(0x1E3D3D20)
#define CLIPPERLIB_CLIPPERBASE_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E3D4450)
#define CLIPPERLIB_CLIPPERBASE_GET_PRESERVECOLLINEAR_OFFSET UNITYSDK_OFFSET(0x1E3D34A0)
#define CLIPPERLIB_CLIPPERBASE_INITEDGE2_OFFSET UNITYSDK_OFFSET(0x1E3D3C10)
#define CLIPPERLIB_CLIPPERBASE_INITEDGE_OFFSET UNITYSDK_OFFSET(0x1E3D3BD0)
#define CLIPPERLIB_CLIPPERBASE_INSERTLOCALMINIMA_OFFSET UNITYSDK_OFFSET(0x1E3D4370)
#define CLIPPERLIB_CLIPPERBASE_INSERTSCANBEAM_OFFSET UNITYSDK_OFFSET(0x1E3C9600)
#define CLIPPERLIB_CLIPPERBASE_ISHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1E3C9990)
#define CLIPPERLIB_CLIPPERBASE_LOCALMINIMAPENDING_OFFSET UNITYSDK_OFFSET(0x1E3C7CF0)
#define CLIPPERLIB_CLIPPERBASE_NEAR_ZERO_OFFSET UNITYSDK_OFFSET(0x1E3D3470)
#define CLIPPERLIB_CLIPPERBASE_POINTISVERTEX_OFFSET UNITYSDK_OFFSET(0x1E3D34C0)
#define CLIPPERLIB_CLIPPERBASE_POINTONLINESEGMENT_OFFSET UNITYSDK_OFFSET(0x1E3D3500)
#define CLIPPERLIB_CLIPPERBASE_POINTONPOLYGON_OFFSET UNITYSDK_OFFSET(0x1E3D38A0)
#define CLIPPERLIB_CLIPPERBASE_POPLOCALMINIMA_OFFSET UNITYSDK_OFFSET(0x1E3CA220)
#define CLIPPERLIB_CLIPPERBASE_POPSCANBEAM_OFFSET UNITYSDK_OFFSET(0x1E3C6B70)
#define CLIPPERLIB_CLIPPERBASE_PROCESSBOUND_OFFSET UNITYSDK_OFFSET(0x1E3D3E40)
#define CLIPPERLIB_CLIPPERBASE_PT2ISBETWEENPT1ANDPT3_OFFSET UNITYSDK_OFFSET(0x1E3CDF20)
#define CLIPPERLIB_CLIPPERBASE_RANGETEST_OFFSET UNITYSDK_OFFSET(0x1E3D3AE0)
#define CLIPPERLIB_CLIPPERBASE_REMOVEEDGE_OFFSET UNITYSDK_OFFSET(0x1E3D4400)
#define CLIPPERLIB_CLIPPERBASE_RESET_OFFSET UNITYSDK_OFFSET(0x1E3C6AE0)
#define CLIPPERLIB_CLIPPERBASE_REVERSEHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1E3D43C0)
#define CLIPPERLIB_CLIPPERBASE_SETDX_OFFSET UNITYSDK_OFFSET(0x1E3D3CC0)
#define CLIPPERLIB_CLIPPERBASE_SET_PRESERVECOLLINEAR_OFFSET UNITYSDK_OFFSET(0x1E3D34B0)
#define CLIPPERLIB_CLIPPERBASE_SLOPESEQUAL_1_OFFSET UNITYSDK_OFFSET(0x1E3CDD60)
#define CLIPPERLIB_CLIPPERBASE_SLOPESEQUAL_2_OFFSET UNITYSDK_OFFSET(0x1E3C9A30)
#define CLIPPERLIB_CLIPPERBASE_SLOPESEQUAL_OFFSET UNITYSDK_OFFSET(0x1E3CC5A0)
#define CLIPPERLIB_CLIPPERBASE_SWAPPOSITIONSINAEL_OFFSET UNITYSDK_OFFSET(0x1E3CC320)
#define CLIPPERLIB_CLIPPERBASE_SWAP_OFFSET UNITYSDK_OFFSET(0x1E3CAC50)
#define CLIPPERLIB_CLIPPERBASE_UPDATEEDGEINTOAEL_OFFSET UNITYSDK_OFFSET(0x1E3CC430)
#define CLIPPERLIB_CLIPPERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C5440)

namespace ClipperLib
{
	inline static constexpr unsigned int ClipperBase_TypeDefinitionIndex = 33424;

	class ClipperBase : public ::System::Object
	{
	public:
		// static const ::System::Double horizontal; // 0x0
		// static const ::System::Int32 Skip = 0xFFFFFFFE; // 0x0
		// static const ::System::Int32 Unassigned = 0xFFFFFFFF; // 0x0
		// static const ::System::Double tolerance; // 0x0
		// static const ::System::Int64 loRange = 0x3FFFFFFF; // 0x0
		// static const ::System::Int64 hiRange = 0x3FFFFFFFFFFFFFFF; // 0x0
		::ClipperLib::TEdge* m_ActiveEdges; // 0x10
		::ClipperLib::Scanbeam* m_Scanbeam; // 0x18
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::TEdge*>*>* m_edges; // 0x20
		::ClipperLib::LocalMinima* m_MinimaList; // 0x28
		::System::Collections::Generic::List_1<::ClipperLib::OutRec*>* m_PolyOuts; // 0x30
		::ClipperLib::LocalMinima* m_CurrentLM; // 0x38
		::System::Boolean m_HasOpenPaths; // 0x40
		::System::Boolean _PreserveCollinear_k__BackingField; // 0x41
		::System::Boolean m_UseFullRange; // 0x42

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean near_zero(::System::Double val)
		{
			return ((::System::Boolean(*)(::System::Double))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_NEAR_ZERO_OFFSET))(val);
		}

		::System::Boolean get_PreserveCollinear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_GET_PRESERVECOLLINEAR_OFFSET))(this);
		}

		::System::Void set_PreserveCollinear(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_SET_PRESERVECOLLINEAR_OFFSET))(this, value);
		}

		::System::Void Swap(::System::Int64& val1, ::System::Int64& val2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_SWAP_OFFSET))(this, val1, val2);
		}

		static ::System::Boolean IsHorizontal(::ClipperLib::TEdge* e)
		{
			return ((::System::Boolean(*)(::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_ISHORIZONTAL_OFFSET))(e);
		}

		::System::Boolean PointIsVertex(::ClipperLib::IntPoint pt, ::ClipperLib::OutPt* pp)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::IntPoint, ::ClipperLib::OutPt*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_POINTISVERTEX_OFFSET))(this, pt, pp);
		}

		::System::Boolean PointOnLineSegment(::ClipperLib::IntPoint pt, ::ClipperLib::IntPoint linePt1, ::ClipperLib::IntPoint linePt2, ::System::Boolean UseFullRange)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::IntPoint, ::ClipperLib::IntPoint, ::ClipperLib::IntPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_POINTONLINESEGMENT_OFFSET))(this, pt, linePt1, linePt2, UseFullRange);
		}

		::System::Boolean PointOnPolygon(::ClipperLib::IntPoint pt, ::ClipperLib::OutPt* pp, ::System::Boolean UseFullRange)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::IntPoint, ::ClipperLib::OutPt*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_POINTONPOLYGON_OFFSET))(this, pt, pp, UseFullRange);
		}

		static ::System::Boolean SlopesEqual(::ClipperLib::TEdge* e1, ::ClipperLib::TEdge* e2, ::System::Boolean UseFullRange)
		{
			return ((::System::Boolean(*)(::ClipperLib::TEdge*, ::ClipperLib::TEdge*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_SLOPESEQUAL_OFFSET))(e1, e2, UseFullRange);
		}

		static ::System::Boolean SlopesEqual_1(::ClipperLib::IntPoint pt1, ::ClipperLib::IntPoint pt2, ::ClipperLib::IntPoint pt3, ::System::Boolean UseFullRange)
		{
			return ((::System::Boolean(*)(::ClipperLib::IntPoint, ::ClipperLib::IntPoint, ::ClipperLib::IntPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_SLOPESEQUAL_1_OFFSET))(pt1, pt2, pt3, UseFullRange);
		}

		static ::System::Boolean SlopesEqual_2(::ClipperLib::IntPoint pt1, ::ClipperLib::IntPoint pt2, ::ClipperLib::IntPoint pt3, ::ClipperLib::IntPoint pt4, ::System::Boolean UseFullRange)
		{
			return ((::System::Boolean(*)(::ClipperLib::IntPoint, ::ClipperLib::IntPoint, ::ClipperLib::IntPoint, ::ClipperLib::IntPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_SLOPESEQUAL_2_OFFSET))(pt1, pt2, pt3, pt4, UseFullRange);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_CLEAR_OFFSET))(this);
		}

		::System::Void DisposeLocalMinimaList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_DISPOSELOCALMINIMALIST_OFFSET))(this);
		}

		::System::Void RangeTest(::ClipperLib::IntPoint Pt, ::System::Boolean& useFullRange)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::IntPoint, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_RANGETEST_OFFSET))(this, Pt, useFullRange);
		}

		::System::Void InitEdge(::ClipperLib::TEdge* e, ::ClipperLib::TEdge* eNext, ::ClipperLib::TEdge* ePrev, ::ClipperLib::IntPoint pt)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*, ::ClipperLib::TEdge*, ::ClipperLib::TEdge*, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_INITEDGE_OFFSET))(this, e, eNext, ePrev, pt);
		}

		::System::Void InitEdge2(::ClipperLib::TEdge* e, ::ClipperLib::PolyType polyType)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*, ::ClipperLib::PolyType))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_INITEDGE2_OFFSET))(this, e, polyType);
		}

		::ClipperLib::TEdge* FindNextLocMin(::ClipperLib::TEdge* E)
		{
			return ((::ClipperLib::TEdge*(*)(::PVOID, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_FINDNEXTLOCMIN_OFFSET))(this, E);
		}

		::ClipperLib::TEdge* ProcessBound(::ClipperLib::TEdge* E, ::System::Boolean LeftBoundIsForward)
		{
			return ((::ClipperLib::TEdge*(*)(::PVOID, ::ClipperLib::TEdge*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_PROCESSBOUND_OFFSET))(this, E, LeftBoundIsForward);
		}

		::System::Boolean AddPath(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* pg, ::ClipperLib::PolyType polyType, ::System::Boolean Closed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*, ::ClipperLib::PolyType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_ADDPATH_OFFSET))(this, pg, polyType, Closed);
		}

		::System::Boolean AddPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* ppg, ::ClipperLib::PolyType polyType, ::System::Boolean closed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*, ::ClipperLib::PolyType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_ADDPATHS_OFFSET))(this, ppg, polyType, closed);
		}

		::System::Boolean Pt2IsBetweenPt1AndPt3(::ClipperLib::IntPoint pt1, ::ClipperLib::IntPoint pt2, ::ClipperLib::IntPoint pt3)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::IntPoint, ::ClipperLib::IntPoint, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_PT2ISBETWEENPT1ANDPT3_OFFSET))(this, pt1, pt2, pt3);
		}

		::ClipperLib::TEdge* RemoveEdge(::ClipperLib::TEdge* e)
		{
			return ((::ClipperLib::TEdge*(*)(::PVOID, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_REMOVEEDGE_OFFSET))(this, e);
		}

		::System::Void SetDx(::ClipperLib::TEdge* e)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_SETDX_OFFSET))(this, e);
		}

		::System::Void InsertLocalMinima(::ClipperLib::LocalMinima* newLm)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::LocalMinima*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_INSERTLOCALMINIMA_OFFSET))(this, newLm);
		}

		::System::Boolean PopLocalMinima(::System::Int64 Y, ::ClipperLib::LocalMinima*& current)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::ClipperLib::LocalMinima*&))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_POPLOCALMINIMA_OFFSET))(this, Y, current);
		}

		::System::Void ReverseHorizontal(::ClipperLib::TEdge* e)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_REVERSEHORIZONTAL_OFFSET))(this, e);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_RESET_OFFSET))(this);
		}

		static ::ClipperLib::IntRect GetBounds(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* paths)
		{
			return ((::ClipperLib::IntRect(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_GETBOUNDS_OFFSET))(paths);
		}

		::System::Void InsertScanbeam(::System::Int64 Y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_INSERTSCANBEAM_OFFSET))(this, Y);
		}

		::System::Boolean PopScanbeam(::System::Int64& Y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64&))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_POPSCANBEAM_OFFSET))(this, Y);
		}

		::System::Boolean LocalMinimaPending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_LOCALMINIMAPENDING_OFFSET))(this);
		}

		::ClipperLib::OutRec* CreateOutRec()
		{
			return ((::ClipperLib::OutRec*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_CREATEOUTREC_OFFSET))(this);
		}

		::System::Void DisposeOutRec(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_DISPOSEOUTREC_OFFSET))(this, index);
		}

		::System::Void UpdateEdgeIntoAEL(::ClipperLib::TEdge*& e)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*&))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_UPDATEEDGEINTOAEL_OFFSET))(this, e);
		}

		::System::Void SwapPositionsInAEL(::ClipperLib::TEdge* edge1, ::ClipperLib::TEdge* edge2)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_SWAPPOSITIONSINAEL_OFFSET))(this, edge1, edge2);
		}

		::System::Void DeleteFromAEL(::ClipperLib::TEdge* e)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPERBASE_DELETEFROMAEL_OFFSET))(this, e);
		}
	};
}
