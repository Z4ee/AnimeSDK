#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardSearchMap_FilterParams.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardSearchMap_SearchParams.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardSearchMap___c__DisplayClass10_0.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardSearchMap___c__DisplayClass10_1.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardSearchMap___c__DisplayClass6_0.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_3.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP_DOFILTER_OFFSET UNITYSDK_OFFSET(0x16B76BD0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP_DOSEARCH_OFFSET UNITYSDK_OFFSET(0x16B76990)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP_FILTERDISTANCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x16B770A0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP_FILTERINVALIDCHESSPIECE_OFFSET UNITYSDK_OFFSET(0x16B77050)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP_INDEXTOBOARDPOS_OFFSET UNITYSDK_OFFSET(0x16B77A40)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP_INVOKE_OFFSET UNITYSDK_OFFSET(0x16B76830)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B77B30)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x16B77AA0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP__DOSEARCH_G__SEARCHBYBOUND_6_1_OFFSET UNITYSDK_OFFSET(0x16B76F50)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP__DOSEARCH_G__SEARCHBYPOSITION_6_0_OFFSET UNITYSDK_OFFSET(0x16B76E60)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP__FILTERDISTANCEINTERNAL_G__CHECKCOLLISION_10_1_OFFSET UNITYSDK_OFFSET(0x16B77680)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP__FILTERDISTANCEINTERNAL_G__INDEXTOSAMPLEGRIDPOS_10_0_OFFSET UNITYSDK_OFFSET(0x16B77650)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardSearchMap_TypeDefinitionIndex = 81356;

	class ChessBoardSearchMap : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_3<::Il2CppArray<::System::Int32>*, ::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams, ::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams>
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_checkOffsetList()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChessBoardSearchMap_TypeDefinitionIndex)->GetStaticField(0x41B80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP__CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Int32>* Invoke(::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams searchParams, ::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams filterParams)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams, ::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP_INVOKE_OFFSET))(this, searchParams, filterParams);
		}

		::System::Void DoSearch(::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams searchParams, ::System::Collections::Generic::List_1<::System::Int32>*& SearchResult)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP_DOSEARCH_OFFSET))(this, searchParams, SearchResult);
		}

		::System::Void DoFilter(::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams filterParams, ::System::Collections::Generic::List_1<::System::Int32>*& searchResult)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP_DOFILTER_OFFSET))(this, filterParams, searchResult);
		}

		::System::Void FilterInvalidChessPiece(::System::Collections::Generic::List_1<::System::Int32>*& searchResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP_FILTERINVALIDCHESSPIECE_OFFSET))(this, searchResult);
		}

		::System::Collections::Generic::List_1<::System::Int32>* FilterDistanceInternal(::System::Int32 minManhattanDistance, ::System::Int32 needNum, ::System::Collections::Generic::List_1<::System::Int32>*& pointsList, ::System::Int32 row, ::System::Int32 col)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP_FILTERDISTANCEINTERNAL_OFFSET))(this, minManhattanDistance, needNum, pointsList, row, col);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> IndexToBoardPos(::System::Int32 pieceIndex, ::System::Int32 boardCol, ::System::Int32 boardRow)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP_INDEXTOBOARDPOS_OFFSET))(this, pieceIndex, boardCol, boardRow);
		}

		::System::Void _DoSearch_g__SearchByPosition_6_0(::System::Collections::Generic::List_1<::System::Int32>*& searchResult, ::MoleMole::FlowCanvas::ChessBoardSearchMap___c__DisplayClass6_0& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*&, ::MoleMole::FlowCanvas::ChessBoardSearchMap___c__DisplayClass6_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP__DOSEARCH_G__SEARCHBYPOSITION_6_0_OFFSET))(this, searchResult, a2);
		}

		::System::Void _DoSearch_g__SearchByBound_6_1(::System::Collections::Generic::List_1<::System::Int32>*& searchResult, ::MoleMole::FlowCanvas::ChessBoardSearchMap___c__DisplayClass6_0& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*&, ::MoleMole::FlowCanvas::ChessBoardSearchMap___c__DisplayClass6_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP__DOSEARCH_G__SEARCHBYBOUND_6_1_OFFSET))(this, searchResult, a2);
		}

		::System::Boolean _FilterDistanceInternal_g__CheckCollision_10_1(::System::ValueTuple_2<::System::Int32, ::System::Int32>& checkGridPos, ::MoleMole::FlowCanvas::ChessBoardSearchMap___c__DisplayClass10_0& a2, ::MoleMole::FlowCanvas::ChessBoardSearchMap___c__DisplayClass10_1& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>&, ::MoleMole::FlowCanvas::ChessBoardSearchMap___c__DisplayClass10_0&, ::MoleMole::FlowCanvas::ChessBoardSearchMap___c__DisplayClass10_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP__FILTERDISTANCEINTERNAL_G__CHECKCOLLISION_10_1_OFFSET))(this, checkGridPos, a2, a3);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> _FilterDistanceInternal_g__IndexToSampleGridPos_10_0(::System::Int32 pieceIndex, ::MoleMole::FlowCanvas::ChessBoardSearchMap___c__DisplayClass10_0& a2)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32, ::MoleMole::FlowCanvas::ChessBoardSearchMap___c__DisplayClass10_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP__FILTERDISTANCEINTERNAL_G__INDEXTOSAMPLEGRIDPOS_10_0_OFFSET))(this, pieceIndex, a2);
		}
	};
}
