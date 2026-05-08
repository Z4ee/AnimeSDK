#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardSearchMap_FilterParams.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas { class ChessBoardSearchMap; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10B9AC80)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP___C__DISPLAYCLASS8_0__DOFILTER_B__2_OFFSET UNITYSDK_OFFSET(0x10B9AD40)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP___C__DISPLAYCLASS8_0__DOFILTER_G__FILTERDISTANCE_1_OFFSET UNITYSDK_OFFSET(0x10B9AEE0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP___C__DISPLAYCLASS8_0__DOFILTER_G__FILTERTAGS_0_OFFSET UNITYSDK_OFFSET(0x10B9AC90)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardSearchMap___c__DisplayClass8_0_TypeDefinitionIndex = 81362;

	class ChessBoardSearchMap___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::ChessBoardSearchMap* __4__this; // 0x10
		::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams filterParams; // 0x18
		::System::Int32 configRow; // 0x28
		::System::Int32 configCol; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoFilter_g__FilterTags_0(::System::Collections::Generic::List_1<::System::Int32>*& filterResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP___C__DISPLAYCLASS8_0__DOFILTER_G__FILTERTAGS_0_OFFSET))(this, filterResult);
		}

		::System::Boolean _DoFilter_b__2(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP___C__DISPLAYCLASS8_0__DOFILTER_B__2_OFFSET))(this, index);
		}

		::System::Void _DoFilter_g__FilterDistance_1(::System::Collections::Generic::List_1<::System::Int32>*& filterResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSEARCHMAP___C__DISPLAYCLASS8_0__DOFILTER_G__FILTERDISTANCE_1_OFFSET))(this, filterResult);
		}
	};
}
