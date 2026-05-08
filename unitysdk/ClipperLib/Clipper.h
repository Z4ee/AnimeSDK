#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ClipperLib/ClipType.h"
#include "unitysdk/ClipperLib/ClipperBase.h"
#include "unitysdk/ClipperLib/Clipper_NodeType.h"
#include "unitysdk/ClipperLib/Direction.h"
#include "unitysdk/ClipperLib/IntPoint.h"
#include "unitysdk/ClipperLib/PolyFillType.h"

namespace ClipperLib { class IntersectNode; }
namespace ClipperLib { class Join; }
namespace ClipperLib { class Maxima; }
namespace ClipperLib { class OutPt; }
namespace ClipperLib { class OutRec; }
namespace ClipperLib { class PolyNode; }
namespace ClipperLib { class PolyTree; }
namespace ClipperLib { class TEdge; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLIPPERLIB_CLIPPER_ADDEDGETOSEL_OFFSET UNITYSDK_OFFSET(0x1AB625B0)
#define CLIPPERLIB_CLIPPER_ADDGHOSTJOIN_OFFSET UNITYSDK_OFFSET(0x1AB619B0)
#define CLIPPERLIB_CLIPPER_ADDJOIN_OFFSET UNITYSDK_OFFSET(0x1AB61910)
#define CLIPPERLIB_CLIPPER_ADDLOCALMAXPOLY_OFFSET UNITYSDK_OFFSET(0x1AB631B0)
#define CLIPPERLIB_CLIPPER_ADDLOCALMINPOLY_OFFSET UNITYSDK_OFFSET(0x1AB622E0)
#define CLIPPERLIB_CLIPPER_ADDOUTPT_OFFSET UNITYSDK_OFFSET(0x1AB62020)
#define CLIPPERLIB_CLIPPER_ADDPOLYNODETOPATHS_OFFSET UNITYSDK_OFFSET(0x1AB6BD00)
#define CLIPPERLIB_CLIPPER_APPENDPOLYGON_OFFSET UNITYSDK_OFFSET(0x1AB63260)
#define CLIPPERLIB_CLIPPER_AREA_1_OFFSET UNITYSDK_OFFSET(0x1AB608A0)
#define CLIPPERLIB_CLIPPER_AREA_2_OFFSET UNITYSDK_OFFSET(0x1AB63BE0)
#define CLIPPERLIB_CLIPPER_AREA_OFFSET UNITYSDK_OFFSET(0x1AB66700)
#define CLIPPERLIB_CLIPPER_BUILDINTERSECTLIST_OFFSET UNITYSDK_OFFSET(0x1AB65540)
#define CLIPPERLIB_CLIPPER_BUILDRESULT2_OFFSET UNITYSDK_OFFSET(0x1AB5F020)
#define CLIPPERLIB_CLIPPER_BUILDRESULT_OFFSET UNITYSDK_OFFSET(0x1AB5EC30)
#define CLIPPERLIB_CLIPPER_CLEANPOLYGONS_OFFSET UNITYSDK_OFFSET(0x1AB6A310)
#define CLIPPERLIB_CLIPPER_CLEANPOLYGON_OFFSET UNITYSDK_OFFSET(0x1AB69DC0)
#define CLIPPERLIB_CLIPPER_CLOSEDPATHSFROMPOLYTREE_OFFSET UNITYSDK_OFFSET(0x1AB6BFF0)
#define CLIPPERLIB_CLIPPER_COPYAELTOSEL_OFFSET UNITYSDK_OFFSET(0x1AB63050)
#define CLIPPERLIB_CLIPPER_DELETEFROMSEL_OFFSET UNITYSDK_OFFSET(0x1AB63F50)
#define CLIPPERLIB_CLIPPER_DISPOSEALLPOLYPTS_OFFSET UNITYSDK_OFFSET(0x1AB5EFB0)
#define CLIPPERLIB_CLIPPER_DISTANCEFROMLINESQRD_OFFSET UNITYSDK_OFFSET(0x1AB69AD0)
#define CLIPPERLIB_CLIPPER_DISTANCESQRD_OFFSET UNITYSDK_OFFSET(0x1AB69A70)
#define CLIPPERLIB_CLIPPER_DOMAXIMA_OFFSET UNITYSDK_OFFSET(0x1AB66010)
#define CLIPPERLIB_CLIPPER_DOSIMPLEPOLYGONS_OFFSET UNITYSDK_OFFSET(0x1AB61240)
#define CLIPPERLIB_CLIPPER_DUPOUTPT_OFFSET UNITYSDK_OFFSET(0x1AB66BF0)
#define CLIPPERLIB_CLIPPER_E2INSERTSBEFOREE1_OFFSET UNITYSDK_OFFSET(0x1AB62E80)
#define CLIPPERLIB_CLIPPER_EDGESADJACENT_OFFSET UNITYSDK_OFFSET(0x1AB65F80)
#define CLIPPERLIB_CLIPPER_EXCLUDEOP_OFFSET UNITYSDK_OFFSET(0x1AB69D70)
#define CLIPPERLIB_CLIPPER_EXECUTEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AB5E5D0)
#define CLIPPERLIB_CLIPPER_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x1AB5E3E0)
#define CLIPPERLIB_CLIPPER_EXECUTE_2_OFFSET UNITYSDK_OFFSET(0x1AB5E1F0)
#define CLIPPERLIB_CLIPPER_EXECUTE_3_OFFSET UNITYSDK_OFFSET(0x1AB5E400)
#define CLIPPERLIB_CLIPPER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AB5E1D0)
#define CLIPPERLIB_CLIPPER_FIRSTISBOTTOMPT_OFFSET UNITYSDK_OFFSET(0x1AB638D0)
#define CLIPPERLIB_CLIPPER_FIXHOLELINKAGE_OFFSET UNITYSDK_OFFSET(0x1AB5F610)
#define CLIPPERLIB_CLIPPER_FIXUPFIRSTLEFTS1_OFFSET UNITYSDK_OFFSET(0x1AB680D0)
#define CLIPPERLIB_CLIPPER_FIXUPFIRSTLEFTS2_OFFSET UNITYSDK_OFFSET(0x1AB68450)
#define CLIPPERLIB_CLIPPER_FIXUPFIRSTLEFTS3_OFFSET UNITYSDK_OFFSET(0x1AB68970)
#define CLIPPERLIB_CLIPPER_FIXUPINTERSECTIONORDER_OFFSET UNITYSDK_OFFSET(0x1AB65870)
#define CLIPPERLIB_CLIPPER_FIXUPOUTPOLYGON_OFFSET UNITYSDK_OFFSET(0x1AB61000)
#define CLIPPERLIB_CLIPPER_FIXUPOUTPOLYLINE_OFFSET UNITYSDK_OFFSET(0x1AB60F60)
#define CLIPPERLIB_CLIPPER_GETBOTTOMPT_OFFSET UNITYSDK_OFFSET(0x1AB63C50)
#define CLIPPERLIB_CLIPPER_GETDX_OFFSET UNITYSDK_OFFSET(0x1AB638A0)
#define CLIPPERLIB_CLIPPER_GETHORZDIRECTION_OFFSET UNITYSDK_OFFSET(0x1AB64E30)
#define CLIPPERLIB_CLIPPER_GETLASTOUTPT_OFFSET UNITYSDK_OFFSET(0x1AB637D0)
#define CLIPPERLIB_CLIPPER_GETLOWERMOSTREC_OFFSET UNITYSDK_OFFSET(0x1AB63D60)
#define CLIPPERLIB_CLIPPER_GETMAXIMAPAIREX_OFFSET UNITYSDK_OFFSET(0x1AB654A0)
#define CLIPPERLIB_CLIPPER_GETMAXIMAPAIR_OFFSET UNITYSDK_OFFSET(0x1AB64E80)
#define CLIPPERLIB_CLIPPER_GETNEXTINAEL_OFFSET UNITYSDK_OFFSET(0x1AB64EF0)
#define CLIPPERLIB_CLIPPER_GETOUTREC_OFFSET UNITYSDK_OFFSET(0x1AB63E50)
#define CLIPPERLIB_CLIPPER_GETOVERLAP_OFFSET UNITYSDK_OFFSET(0x1AB66CC0)
#define CLIPPERLIB_CLIPPER_GET_REVERSESOLUTION_OFFSET UNITYSDK_OFFSET(0x1AB5E190)
#define CLIPPERLIB_CLIPPER_GET_STRICTLYSIMPLE_OFFSET UNITYSDK_OFFSET(0x1AB5E1B0)
#define CLIPPERLIB_CLIPPER_HORZSEGMENTSOVERLAP_OFFSET UNITYSDK_OFFSET(0x1AB62610)
#define CLIPPERLIB_CLIPPER_INSERTEDGEINTOAEL_OFFSET UNITYSDK_OFFSET(0x1AB61A40)
#define CLIPPERLIB_CLIPPER_INSERTLOCALMINIMAINTOAEL_OFFSET UNITYSDK_OFFSET(0x1AB5F720)
#define CLIPPERLIB_CLIPPER_INSERTMAXIMA_OFFSET UNITYSDK_OFFSET(0x1AB5E0A0)
#define CLIPPERLIB_CLIPPER_INTERSECTEDGES_OFFSET UNITYSDK_OFFSET(0x1AB62800)
#define CLIPPERLIB_CLIPPER_INTERSECTNODESORT_OFFSET UNITYSDK_OFFSET(0x1AB65FC0)
#define CLIPPERLIB_CLIPPER_INTERSECTPOINT_OFFSET UNITYSDK_OFFSET(0x1AB65BE0)
#define CLIPPERLIB_CLIPPER_ISCONTRIBUTING_OFFSET UNITYSDK_OFFSET(0x1AB61EE0)
#define CLIPPERLIB_CLIPPER_ISEVENODDALTFILLTYPE_OFFSET UNITYSDK_OFFSET(0x1AB62FE0)
#define CLIPPERLIB_CLIPPER_ISEVENODDFILLTYPE_OFFSET UNITYSDK_OFFSET(0x1AB62FB0)
#define CLIPPERLIB_CLIPPER_ISINTERMEDIATE_OFFSET UNITYSDK_OFFSET(0x1AB65460)
#define CLIPPERLIB_CLIPPER_ISMAXIMA_OFFSET UNITYSDK_OFFSET(0x1AB65440)
#define CLIPPERLIB_CLIPPER_ISMINIMA_OFFSET UNITYSDK_OFFSET(0x1AB65400)
#define CLIPPERLIB_CLIPPER_JOINCOMMONEDGES_OFFSET UNITYSDK_OFFSET(0x1AB60960)
#define CLIPPERLIB_CLIPPER_JOINHORZ_OFFSET UNITYSDK_OFFSET(0x1AB66D50)
#define CLIPPERLIB_CLIPPER_JOINPOINTS_OFFSET UNITYSDK_OFFSET(0x1AB676A0)
#define CLIPPERLIB_CLIPPER_MINKOWSKIDIFF_OFFSET UNITYSDK_OFFSET(0x1AB6BA20)
#define CLIPPERLIB_CLIPPER_MINKOWSKISUM_1_OFFSET UNITYSDK_OFFSET(0x1AB6B690)
#define CLIPPERLIB_CLIPPER_MINKOWSKISUM_OFFSET UNITYSDK_OFFSET(0x1AB6B420)
#define CLIPPERLIB_CLIPPER_MINKOWSKI_OFFSET UNITYSDK_OFFSET(0x1AB6A3F0)
#define CLIPPERLIB_CLIPPER_OPENPATHSFROMPOLYTREE_OFFSET UNITYSDK_OFFSET(0x1AB6BE90)
#define CLIPPERLIB_CLIPPER_ORIENTATION_OFFSET UNITYSDK_OFFSET(0x1AB66650)
#define CLIPPERLIB_CLIPPER_OUTREC1RIGHTOFOUTREC2_OFFSET UNITYSDK_OFFSET(0x1AB63E10)
#define CLIPPERLIB_CLIPPER_PARSEFIRSTLEFT_OFFSET UNITYSDK_OFFSET(0x1AB68420)
#define CLIPPERLIB_CLIPPER_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0x1AB667B0)
#define CLIPPERLIB_CLIPPER_POINTINPOLYGON_1_OFFSET UNITYSDK_OFFSET(0x1AB67F30)
#define CLIPPERLIB_CLIPPER_POINTINPOLYGON_OFFSET UNITYSDK_OFFSET(0x1AB67DA0)
#define CLIPPERLIB_CLIPPER_POINTSARECLOSE_OFFSET UNITYSDK_OFFSET(0x1AB69D10)
#define CLIPPERLIB_CLIPPER_POLY2CONTAINSPOLY1_OFFSET UNITYSDK_OFFSET(0x1AB68070)
#define CLIPPERLIB_CLIPPER_POLYTREETOPATHS_OFFSET UNITYSDK_OFFSET(0x1AB6BB30)
#define CLIPPERLIB_CLIPPER_POPEDGEFROMSEL_OFFSET UNITYSDK_OFFSET(0x1AB63010)
#define CLIPPERLIB_CLIPPER_PROCESSEDGESATTOPOFSCANBEAM_OFFSET UNITYSDK_OFFSET(0x1AB60050)
#define CLIPPERLIB_CLIPPER_PROCESSHORIZONTALS_OFFSET UNITYSDK_OFFSET(0x1AB5FEC0)
#define CLIPPERLIB_CLIPPER_PROCESSHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1AB63FB0)
#define CLIPPERLIB_CLIPPER_PROCESSINTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x1AB5FF20)
#define CLIPPERLIB_CLIPPER_PROCESSINTERSECTLIST_OFFSET UNITYSDK_OFFSET(0x1AB65B00)
#define CLIPPERLIB_CLIPPER_REVERSEPATHS_OFFSET UNITYSDK_OFFSET(0x1AB66520)
#define CLIPPERLIB_CLIPPER_REVERSEPOLYPTLINKS_OFFSET UNITYSDK_OFFSET(0x1AB60920)
#define CLIPPERLIB_CLIPPER_ROUND_OFFSET UNITYSDK_OFFSET(0x1AB65FF0)
#define CLIPPERLIB_CLIPPER_SETHOLESTATE_OFFSET UNITYSDK_OFFSET(0x1AB636A0)
#define CLIPPERLIB_CLIPPER_SETWINDINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1AB61CA0)
#define CLIPPERLIB_CLIPPER_SET_REVERSESOLUTION_OFFSET UNITYSDK_OFFSET(0x1AB5E1A0)
#define CLIPPERLIB_CLIPPER_SET_STRICTLYSIMPLE_OFFSET UNITYSDK_OFFSET(0x1AB5E1C0)
#define CLIPPERLIB_CLIPPER_SIMPLIFYPOLYGONS_OFFSET UNITYSDK_OFFSET(0x1AB69860)
#define CLIPPERLIB_CLIPPER_SIMPLIFYPOLYGON_OFFSET UNITYSDK_OFFSET(0x1AB68B10)
#define CLIPPERLIB_CLIPPER_SLOPESNEARCOLLINEAR_OFFSET UNITYSDK_OFFSET(0x1AB69B40)
#define CLIPPERLIB_CLIPPER_SWAPPOINTS_OFFSET UNITYSDK_OFFSET(0x1AB63870)
#define CLIPPERLIB_CLIPPER_SWAPPOLYINDEXES_OFFSET UNITYSDK_OFFSET(0x1AB63F10)
#define CLIPPERLIB_CLIPPER_SWAPPOSITIONSINSEL_OFFSET UNITYSDK_OFFSET(0x1AB63080)
#define CLIPPERLIB_CLIPPER_SWAPSIDES_OFFSET UNITYSDK_OFFSET(0x1AB63EE0)
#define CLIPPERLIB_CLIPPER_TOPX_OFFSET UNITYSDK_OFFSET(0x1AB62F50)
#define CLIPPERLIB_CLIPPER_TRANSLATEPATH_OFFSET UNITYSDK_OFFSET(0x1AB6B540)
#define CLIPPERLIB_CLIPPER_UPDATEOUTPTIDXS_OFFSET UNITYSDK_OFFSET(0x1AB68AD0)
#define CLIPPERLIB_CLIPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB5DD90)

namespace ClipperLib
{
	inline static constexpr unsigned int Clipper_TypeDefinitionIndex = 31239;

	class Clipper : public ::ClipperLib::ClipperBase
	{
	public:
		// static const ::System::Int32 ioReverseSolution = 0x1; // 0x0
		// static const ::System::Int32 ioStrictlySimple = 0x2; // 0x0
		// static const ::System::Int32 ioPreserveCollinear = 0x4; // 0x0
		::ClipperLib::Maxima* m_Maxima; // 0x48
		::ClipperLib::TEdge* m_SortedEdges; // 0x50
		::System::Collections::Generic::IComparer_1<::ClipperLib::IntersectNode*>* m_IntersectNodeComparer; // 0x58
		::System::Collections::Generic::List_1<::ClipperLib::IntersectNode*>* m_IntersectList; // 0x60
		::System::Collections::Generic::List_1<::ClipperLib::Join*>* m_Joins; // 0x68
		::System::Collections::Generic::List_1<::ClipperLib::Join*>* m_GhostJoins; // 0x70
		::ClipperLib::ClipType m_ClipType; // 0x78
		::System::Boolean _ReverseSolution_k__BackingField; // 0x7C
		::System::Boolean _StrictlySimple_k__BackingField; // 0x7D
		::System::Boolean m_UsingPolyTree; // 0x7E
		::System::Boolean m_ExecuteLocked; // 0x7F
		::ClipperLib::PolyFillType m_ClipFillType; // 0x80
		::ClipperLib::PolyFillType m_SubjFillType; // 0x84

		::System::Void _ctor(::System::Int32 InitOptions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER__CTOR_OFFSET))(this, InitOptions);
		}

		::System::Void InsertMaxima(::System::Int64 X)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_INSERTMAXIMA_OFFSET))(this, X);
		}

		::System::Boolean get_ReverseSolution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_GET_REVERSESOLUTION_OFFSET))(this);
		}

		::System::Void set_ReverseSolution(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_SET_REVERSESOLUTION_OFFSET))(this, value);
		}

		::System::Boolean get_StrictlySimple()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_GET_STRICTLYSIMPLE_OFFSET))(this);
		}

		::System::Void set_StrictlySimple(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_SET_STRICTLYSIMPLE_OFFSET))(this, value);
		}

		::System::Boolean Execute(::ClipperLib::ClipType clipType, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* solution, ::ClipperLib::PolyFillType FillType)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::ClipType, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*, ::ClipperLib::PolyFillType))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_EXECUTE_OFFSET))(this, clipType, solution, FillType);
		}

		::System::Boolean Execute_1(::ClipperLib::ClipType clipType, ::ClipperLib::PolyTree* polytree, ::ClipperLib::PolyFillType FillType)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::ClipType, ::ClipperLib::PolyTree*, ::ClipperLib::PolyFillType))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_EXECUTE_1_OFFSET))(this, clipType, polytree, FillType);
		}

		::System::Boolean Execute_2(::ClipperLib::ClipType clipType, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* solution, ::ClipperLib::PolyFillType subjFillType, ::ClipperLib::PolyFillType clipFillType)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::ClipType, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*, ::ClipperLib::PolyFillType, ::ClipperLib::PolyFillType))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_EXECUTE_2_OFFSET))(this, clipType, solution, subjFillType, clipFillType);
		}

		::System::Boolean Execute_3(::ClipperLib::ClipType clipType, ::ClipperLib::PolyTree* polytree, ::ClipperLib::PolyFillType subjFillType, ::ClipperLib::PolyFillType clipFillType)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::ClipType, ::ClipperLib::PolyTree*, ::ClipperLib::PolyFillType, ::ClipperLib::PolyFillType))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_EXECUTE_3_OFFSET))(this, clipType, polytree, subjFillType, clipFillType);
		}

		::System::Void FixHoleLinkage(::ClipperLib::OutRec* outRec)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::OutRec*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_FIXHOLELINKAGE_OFFSET))(this, outRec);
		}

		::System::Boolean ExecuteInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_EXECUTEINTERNAL_OFFSET))(this);
		}

		::System::Void DisposeAllPolyPts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_DISPOSEALLPOLYPTS_OFFSET))(this);
		}

		::System::Void AddJoin(::ClipperLib::OutPt* Op1, ::ClipperLib::OutPt* Op2, ::ClipperLib::IntPoint OffPt)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::OutPt*, ::ClipperLib::OutPt*, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_ADDJOIN_OFFSET))(this, Op1, Op2, OffPt);
		}

		::System::Void AddGhostJoin(::ClipperLib::OutPt* Op, ::ClipperLib::IntPoint OffPt)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::OutPt*, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_ADDGHOSTJOIN_OFFSET))(this, Op, OffPt);
		}

		::System::Void InsertLocalMinimaIntoAEL(::System::Int64 botY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_INSERTLOCALMINIMAINTOAEL_OFFSET))(this, botY);
		}

		::System::Void InsertEdgeIntoAEL(::ClipperLib::TEdge* edge, ::ClipperLib::TEdge* startEdge)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_INSERTEDGEINTOAEL_OFFSET))(this, edge, startEdge);
		}

		::System::Boolean E2InsertsBeforeE1(::ClipperLib::TEdge* e1, ::ClipperLib::TEdge* e2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::TEdge*, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_E2INSERTSBEFOREE1_OFFSET))(this, e1, e2);
		}

		::System::Boolean IsEvenOddFillType(::ClipperLib::TEdge* edge)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_ISEVENODDFILLTYPE_OFFSET))(this, edge);
		}

		::System::Boolean IsEvenOddAltFillType(::ClipperLib::TEdge* edge)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_ISEVENODDALTFILLTYPE_OFFSET))(this, edge);
		}

		::System::Boolean IsContributing(::ClipperLib::TEdge* edge)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_ISCONTRIBUTING_OFFSET))(this, edge);
		}

		::System::Void SetWindingCount(::ClipperLib::TEdge* edge)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_SETWINDINGCOUNT_OFFSET))(this, edge);
		}

		::System::Void AddEdgeToSEL(::ClipperLib::TEdge* edge)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_ADDEDGETOSEL_OFFSET))(this, edge);
		}

		::System::Boolean PopEdgeFromSEL(::ClipperLib::TEdge*& e)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::TEdge*&))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_POPEDGEFROMSEL_OFFSET))(this, e);
		}

		::System::Void CopyAELToSEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_COPYAELTOSEL_OFFSET))(this);
		}

		::System::Void SwapPositionsInSEL(::ClipperLib::TEdge* edge1, ::ClipperLib::TEdge* edge2)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_SWAPPOSITIONSINSEL_OFFSET))(this, edge1, edge2);
		}

		::System::Void AddLocalMaxPoly(::ClipperLib::TEdge* e1, ::ClipperLib::TEdge* e2, ::ClipperLib::IntPoint pt)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*, ::ClipperLib::TEdge*, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_ADDLOCALMAXPOLY_OFFSET))(this, e1, e2, pt);
		}

		::ClipperLib::OutPt* AddLocalMinPoly(::ClipperLib::TEdge* e1, ::ClipperLib::TEdge* e2, ::ClipperLib::IntPoint pt)
		{
			return ((::ClipperLib::OutPt*(*)(::PVOID, ::ClipperLib::TEdge*, ::ClipperLib::TEdge*, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_ADDLOCALMINPOLY_OFFSET))(this, e1, e2, pt);
		}

		::ClipperLib::OutPt* AddOutPt(::ClipperLib::TEdge* e, ::ClipperLib::IntPoint pt)
		{
			return ((::ClipperLib::OutPt*(*)(::PVOID, ::ClipperLib::TEdge*, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_ADDOUTPT_OFFSET))(this, e, pt);
		}

		::ClipperLib::OutPt* GetLastOutPt(::ClipperLib::TEdge* e)
		{
			return ((::ClipperLib::OutPt*(*)(::PVOID, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_GETLASTOUTPT_OFFSET))(this, e);
		}

		::System::Void SwapPoints(::ClipperLib::IntPoint& pt1, ::ClipperLib::IntPoint& pt2)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::IntPoint&, ::ClipperLib::IntPoint&))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_SWAPPOINTS_OFFSET))(this, pt1, pt2);
		}

		::System::Boolean HorzSegmentsOverlap(::System::Int64 seg1a, ::System::Int64 seg1b, ::System::Int64 seg2a, ::System::Int64 seg2b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_HORZSEGMENTSOVERLAP_OFFSET))(this, seg1a, seg1b, seg2a, seg2b);
		}

		::System::Void SetHoleState(::ClipperLib::TEdge* e, ::ClipperLib::OutRec* outRec)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*, ::ClipperLib::OutRec*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_SETHOLESTATE_OFFSET))(this, e, outRec);
		}

		::System::Double GetDx(::ClipperLib::IntPoint pt1, ::ClipperLib::IntPoint pt2)
		{
			return ((::System::Double(*)(::PVOID, ::ClipperLib::IntPoint, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_GETDX_OFFSET))(this, pt1, pt2);
		}

		::System::Boolean FirstIsBottomPt(::ClipperLib::OutPt* btmPt1, ::ClipperLib::OutPt* btmPt2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::OutPt*, ::ClipperLib::OutPt*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_FIRSTISBOTTOMPT_OFFSET))(this, btmPt1, btmPt2);
		}

		::ClipperLib::OutPt* GetBottomPt(::ClipperLib::OutPt* pp)
		{
			return ((::ClipperLib::OutPt*(*)(::PVOID, ::ClipperLib::OutPt*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_GETBOTTOMPT_OFFSET))(this, pp);
		}

		::ClipperLib::OutRec* GetLowermostRec(::ClipperLib::OutRec* outRec1, ::ClipperLib::OutRec* outRec2)
		{
			return ((::ClipperLib::OutRec*(*)(::PVOID, ::ClipperLib::OutRec*, ::ClipperLib::OutRec*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_GETLOWERMOSTREC_OFFSET))(this, outRec1, outRec2);
		}

		::System::Boolean OutRec1RightOfOutRec2(::ClipperLib::OutRec* outRec1, ::ClipperLib::OutRec* outRec2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::OutRec*, ::ClipperLib::OutRec*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_OUTREC1RIGHTOFOUTREC2_OFFSET))(this, outRec1, outRec2);
		}

		::ClipperLib::OutRec* GetOutRec(::System::Int32 idx)
		{
			return ((::ClipperLib::OutRec*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_GETOUTREC_OFFSET))(this, idx);
		}

		::System::Void AppendPolygon(::ClipperLib::TEdge* e1, ::ClipperLib::TEdge* e2)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_APPENDPOLYGON_OFFSET))(this, e1, e2);
		}

		::System::Void ReversePolyPtLinks(::ClipperLib::OutPt* pp)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::OutPt*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_REVERSEPOLYPTLINKS_OFFSET))(this, pp);
		}

		static ::System::Void SwapSides(::ClipperLib::TEdge* edge1, ::ClipperLib::TEdge* edge2)
		{
			return ((::System::Void(*)(::ClipperLib::TEdge*, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_SWAPSIDES_OFFSET))(edge1, edge2);
		}

		static ::System::Void SwapPolyIndexes(::ClipperLib::TEdge* edge1, ::ClipperLib::TEdge* edge2)
		{
			return ((::System::Void(*)(::ClipperLib::TEdge*, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_SWAPPOLYINDEXES_OFFSET))(edge1, edge2);
		}

		::System::Void IntersectEdges(::ClipperLib::TEdge* e1, ::ClipperLib::TEdge* e2, ::ClipperLib::IntPoint pt)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*, ::ClipperLib::TEdge*, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_INTERSECTEDGES_OFFSET))(this, e1, e2, pt);
		}

		::System::Void DeleteFromSEL(::ClipperLib::TEdge* e)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_DELETEFROMSEL_OFFSET))(this, e);
		}

		::System::Void ProcessHorizontals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_PROCESSHORIZONTALS_OFFSET))(this);
		}

		::System::Void GetHorzDirection(::ClipperLib::TEdge* HorzEdge, ::ClipperLib::Direction& Dir, ::System::Int64& Left, ::System::Int64& Right)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*, ::ClipperLib::Direction&, ::System::Int64&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_GETHORZDIRECTION_OFFSET))(this, HorzEdge, Dir, Left, Right);
		}

		::System::Void ProcessHorizontal(::ClipperLib::TEdge* horzEdge)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_PROCESSHORIZONTAL_OFFSET))(this, horzEdge);
		}

		::ClipperLib::TEdge* GetNextInAEL(::ClipperLib::TEdge* e, ::ClipperLib::Direction Direction)
		{
			return ((::ClipperLib::TEdge*(*)(::PVOID, ::ClipperLib::TEdge*, ::ClipperLib::Direction))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_GETNEXTINAEL_OFFSET))(this, e, Direction);
		}

		::System::Boolean IsMinima(::ClipperLib::TEdge* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_ISMINIMA_OFFSET))(this, e);
		}

		::System::Boolean IsMaxima(::ClipperLib::TEdge* e, ::System::Double Y)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::TEdge*, ::System::Double))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_ISMAXIMA_OFFSET))(this, e, Y);
		}

		::System::Boolean IsIntermediate(::ClipperLib::TEdge* e, ::System::Double Y)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::TEdge*, ::System::Double))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_ISINTERMEDIATE_OFFSET))(this, e, Y);
		}

		::ClipperLib::TEdge* GetMaximaPair(::ClipperLib::TEdge* e)
		{
			return ((::ClipperLib::TEdge*(*)(::PVOID, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_GETMAXIMAPAIR_OFFSET))(this, e);
		}

		::ClipperLib::TEdge* GetMaximaPairEx(::ClipperLib::TEdge* e)
		{
			return ((::ClipperLib::TEdge*(*)(::PVOID, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_GETMAXIMAPAIREX_OFFSET))(this, e);
		}

		::System::Boolean ProcessIntersections(::System::Int64 topY)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_PROCESSINTERSECTIONS_OFFSET))(this, topY);
		}

		::System::Void BuildIntersectList(::System::Int64 topY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_BUILDINTERSECTLIST_OFFSET))(this, topY);
		}

		::System::Boolean EdgesAdjacent(::ClipperLib::IntersectNode* inode)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::IntersectNode*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_EDGESADJACENT_OFFSET))(this, inode);
		}

		static ::System::Int32 IntersectNodeSort(::ClipperLib::IntersectNode* node1, ::ClipperLib::IntersectNode* node2)
		{
			return ((::System::Int32(*)(::ClipperLib::IntersectNode*, ::ClipperLib::IntersectNode*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_INTERSECTNODESORT_OFFSET))(node1, node2);
		}

		::System::Boolean FixupIntersectionOrder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_FIXUPINTERSECTIONORDER_OFFSET))(this);
		}

		::System::Void ProcessIntersectList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_PROCESSINTERSECTLIST_OFFSET))(this);
		}

		static ::System::Int64 Round(::System::Double value)
		{
			return ((::System::Int64(*)(::System::Double))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_ROUND_OFFSET))(value);
		}

		static ::System::Int64 TopX(::ClipperLib::TEdge* edge, ::System::Int64 currentY)
		{
			return ((::System::Int64(*)(::ClipperLib::TEdge*, ::System::Int64))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_TOPX_OFFSET))(edge, currentY);
		}

		::System::Void IntersectPoint(::ClipperLib::TEdge* edge1, ::ClipperLib::TEdge* edge2, ::ClipperLib::IntPoint& ip)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*, ::ClipperLib::TEdge*, ::ClipperLib::IntPoint&))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_INTERSECTPOINT_OFFSET))(this, edge1, edge2, ip);
		}

		::System::Void ProcessEdgesAtTopOfScanbeam(::System::Int64 topY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_PROCESSEDGESATTOPOFSCANBEAM_OFFSET))(this, topY);
		}

		::System::Void DoMaxima(::ClipperLib::TEdge* e)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::TEdge*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_DOMAXIMA_OFFSET))(this, e);
		}

		static ::System::Void ReversePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* polys)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_REVERSEPATHS_OFFSET))(polys);
		}

		static ::System::Boolean Orientation(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* poly)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_ORIENTATION_OFFSET))(poly);
		}

		::System::Int32 PointCount(::ClipperLib::OutPt* pts)
		{
			return ((::System::Int32(*)(::PVOID, ::ClipperLib::OutPt*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_POINTCOUNT_OFFSET))(this, pts);
		}

		::System::Void BuildResult(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* polyg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_BUILDRESULT_OFFSET))(this, polyg);
		}

		::System::Void BuildResult2(::ClipperLib::PolyTree* polytree)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::PolyTree*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_BUILDRESULT2_OFFSET))(this, polytree);
		}

		::System::Void FixupOutPolyline(::ClipperLib::OutRec* outrec)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::OutRec*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_FIXUPOUTPOLYLINE_OFFSET))(this, outrec);
		}

		::System::Void FixupOutPolygon(::ClipperLib::OutRec* outRec)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::OutRec*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_FIXUPOUTPOLYGON_OFFSET))(this, outRec);
		}

		::ClipperLib::OutPt* DupOutPt(::ClipperLib::OutPt* outPt, ::System::Boolean InsertAfter)
		{
			return ((::ClipperLib::OutPt*(*)(::PVOID, ::ClipperLib::OutPt*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_DUPOUTPT_OFFSET))(this, outPt, InsertAfter);
		}

		::System::Boolean GetOverlap(::System::Int64 a1, ::System::Int64 a2, ::System::Int64 b1, ::System::Int64 b2, ::System::Int64& Left, ::System::Int64& Right)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_GETOVERLAP_OFFSET))(this, a1, a2, b1, b2, Left, Right);
		}

		::System::Boolean JoinHorz(::ClipperLib::OutPt* op1, ::ClipperLib::OutPt* op1b, ::ClipperLib::OutPt* op2, ::ClipperLib::OutPt* op2b, ::ClipperLib::IntPoint Pt, ::System::Boolean DiscardLeft)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::OutPt*, ::ClipperLib::OutPt*, ::ClipperLib::OutPt*, ::ClipperLib::OutPt*, ::ClipperLib::IntPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_JOINHORZ_OFFSET))(this, op1, op1b, op2, op2b, Pt, DiscardLeft);
		}

		::System::Boolean JoinPoints(::ClipperLib::Join* j, ::ClipperLib::OutRec* outRec1, ::ClipperLib::OutRec* outRec2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::Join*, ::ClipperLib::OutRec*, ::ClipperLib::OutRec*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_JOINPOINTS_OFFSET))(this, j, outRec1, outRec2);
		}

		static ::System::Int32 PointInPolygon(::ClipperLib::IntPoint pt, ::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* path)
		{
			return ((::System::Int32(*)(::ClipperLib::IntPoint, ::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_POINTINPOLYGON_OFFSET))(pt, path);
		}

		static ::System::Int32 PointInPolygon_1(::ClipperLib::IntPoint pt, ::ClipperLib::OutPt* op)
		{
			return ((::System::Int32(*)(::ClipperLib::IntPoint, ::ClipperLib::OutPt*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_POINTINPOLYGON_1_OFFSET))(pt, op);
		}

		static ::System::Boolean Poly2ContainsPoly1(::ClipperLib::OutPt* outPt1, ::ClipperLib::OutPt* outPt2)
		{
			return ((::System::Boolean(*)(::ClipperLib::OutPt*, ::ClipperLib::OutPt*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_POLY2CONTAINSPOLY1_OFFSET))(outPt1, outPt2);
		}

		::System::Void FixupFirstLefts1(::ClipperLib::OutRec* OldOutRec, ::ClipperLib::OutRec* NewOutRec)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::OutRec*, ::ClipperLib::OutRec*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_FIXUPFIRSTLEFTS1_OFFSET))(this, OldOutRec, NewOutRec);
		}

		::System::Void FixupFirstLefts2(::ClipperLib::OutRec* innerOutRec, ::ClipperLib::OutRec* outerOutRec)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::OutRec*, ::ClipperLib::OutRec*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_FIXUPFIRSTLEFTS2_OFFSET))(this, innerOutRec, outerOutRec);
		}

		::System::Void FixupFirstLefts3(::ClipperLib::OutRec* OldOutRec, ::ClipperLib::OutRec* NewOutRec)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::OutRec*, ::ClipperLib::OutRec*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_FIXUPFIRSTLEFTS3_OFFSET))(this, OldOutRec, NewOutRec);
		}

		static ::ClipperLib::OutRec* ParseFirstLeft(::ClipperLib::OutRec* FirstLeft)
		{
			return ((::ClipperLib::OutRec*(*)(::ClipperLib::OutRec*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_PARSEFIRSTLEFT_OFFSET))(FirstLeft);
		}

		::System::Void JoinCommonEdges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_JOINCOMMONEDGES_OFFSET))(this);
		}

		::System::Void UpdateOutPtIdxs(::ClipperLib::OutRec* outrec)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::OutRec*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_UPDATEOUTPTIDXS_OFFSET))(this, outrec);
		}

		::System::Void DoSimplePolygons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_DOSIMPLEPOLYGONS_OFFSET))(this);
		}

		static ::System::Double Area(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* poly)
		{
			return ((::System::Double(*)(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_AREA_OFFSET))(poly);
		}

		::System::Double Area_1(::ClipperLib::OutRec* outRec)
		{
			return ((::System::Double(*)(::PVOID, ::ClipperLib::OutRec*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_AREA_1_OFFSET))(this, outRec);
		}

		::System::Double Area_2(::ClipperLib::OutPt* op)
		{
			return ((::System::Double(*)(::PVOID, ::ClipperLib::OutPt*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_AREA_2_OFFSET))(this, op);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* SimplifyPolygon(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* poly, ::ClipperLib::PolyFillType fillType)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*(*)(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*, ::ClipperLib::PolyFillType))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_SIMPLIFYPOLYGON_OFFSET))(poly, fillType);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* SimplifyPolygons(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* polys, ::ClipperLib::PolyFillType fillType)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*, ::ClipperLib::PolyFillType))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_SIMPLIFYPOLYGONS_OFFSET))(polys, fillType);
		}

		static ::System::Double DistanceSqrd(::ClipperLib::IntPoint pt1, ::ClipperLib::IntPoint pt2)
		{
			return ((::System::Double(*)(::ClipperLib::IntPoint, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_DISTANCESQRD_OFFSET))(pt1, pt2);
		}

		static ::System::Double DistanceFromLineSqrd(::ClipperLib::IntPoint pt, ::ClipperLib::IntPoint ln1, ::ClipperLib::IntPoint ln2)
		{
			return ((::System::Double(*)(::ClipperLib::IntPoint, ::ClipperLib::IntPoint, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_DISTANCEFROMLINESQRD_OFFSET))(pt, ln1, ln2);
		}

		static ::System::Boolean SlopesNearCollinear(::ClipperLib::IntPoint pt1, ::ClipperLib::IntPoint pt2, ::ClipperLib::IntPoint pt3, ::System::Double distSqrd)
		{
			return ((::System::Boolean(*)(::ClipperLib::IntPoint, ::ClipperLib::IntPoint, ::ClipperLib::IntPoint, ::System::Double))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_SLOPESNEARCOLLINEAR_OFFSET))(pt1, pt2, pt3, distSqrd);
		}

		static ::System::Boolean PointsAreClose(::ClipperLib::IntPoint pt1, ::ClipperLib::IntPoint pt2, ::System::Double distSqrd)
		{
			return ((::System::Boolean(*)(::ClipperLib::IntPoint, ::ClipperLib::IntPoint, ::System::Double))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_POINTSARECLOSE_OFFSET))(pt1, pt2, distSqrd);
		}

		static ::ClipperLib::OutPt* ExcludeOp(::ClipperLib::OutPt* op)
		{
			return ((::ClipperLib::OutPt*(*)(::ClipperLib::OutPt*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_EXCLUDEOP_OFFSET))(op);
		}

		static ::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* CleanPolygon(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* path, ::System::Double distance)
		{
			return ((::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*(*)(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*, ::System::Double))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_CLEANPOLYGON_OFFSET))(path, distance);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* CleanPolygons(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* polys, ::System::Double distance)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*(*)(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*, ::System::Double))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_CLEANPOLYGONS_OFFSET))(polys, distance);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* Minkowski(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* pattern, ::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* path, ::System::Boolean IsSum, ::System::Boolean IsClosed)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*(*)(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*, ::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_MINKOWSKI_OFFSET))(pattern, path, IsSum, IsClosed);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* MinkowskiSum(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* pattern, ::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* path, ::System::Boolean pathIsClosed)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*(*)(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*, ::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_MINKOWSKISUM_OFFSET))(pattern, path, pathIsClosed);
		}

		static ::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* TranslatePath(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* path, ::ClipperLib::IntPoint delta)
		{
			return ((::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*(*)(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_TRANSLATEPATH_OFFSET))(path, delta);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* MinkowskiSum_1(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* pattern, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* paths, ::System::Boolean pathIsClosed)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*(*)(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_MINKOWSKISUM_1_OFFSET))(pattern, paths, pathIsClosed);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* MinkowskiDiff(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* poly1, ::System::Collections::Generic::List_1<::ClipperLib::IntPoint>* poly2)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*(*)(::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*, ::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_MINKOWSKIDIFF_OFFSET))(poly1, poly2);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* PolyTreeToPaths(::ClipperLib::PolyTree* polytree)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*(*)(::ClipperLib::PolyTree*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_POLYTREETOPATHS_OFFSET))(polytree);
		}

		static ::System::Void AddPolyNodeToPaths(::ClipperLib::PolyNode* polynode, ::ClipperLib::Clipper_NodeType nt, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* paths)
		{
			return ((::System::Void(*)(::ClipperLib::PolyNode*, ::ClipperLib::Clipper_NodeType, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_ADDPOLYNODETOPATHS_OFFSET))(polynode, nt, paths);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* OpenPathsFromPolyTree(::ClipperLib::PolyTree* polytree)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*(*)(::ClipperLib::PolyTree*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_OPENPATHSFROMPOLYTREE_OFFSET))(polytree);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* ClosedPathsFromPolyTree(::ClipperLib::PolyTree* polytree)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*(*)(::ClipperLib::PolyTree*))((::PBYTE)hIl2Cpp + CLIPPERLIB_CLIPPER_CLOSEDPATHSFROMPOLYTREE_OFFSET))(polytree);
		}
	};
}
