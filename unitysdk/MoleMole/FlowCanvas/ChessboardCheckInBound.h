#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_3.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHECKINBOUND_CHECKISINBOUND_OFFSET UNITYSDK_OFFSET(0x182013D0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHECKINBOUND_INVOKE_OFFSET UNITYSDK_OFFSET(0x18201300)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHECKINBOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x18201440)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardCheckInBound_TypeDefinitionIndex = 39160;

	class ChessboardCheckInBound : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_3<::System::Boolean, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::HollowChessboard::HollowCell>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHECKINBOUND__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* bound, ::MoleMole::HollowChessboard::HollowCell cell)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHECKINBOUND_INVOKE_OFFSET))(this, bound, cell);
		}

		static ::System::Boolean CheckIsInBound(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* bound, ::MoleMole::HollowChessboard::HollowCell cell)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHECKINBOUND_CHECKISINBOUND_OFFSET))(bound, cell);
		}
	};
}
