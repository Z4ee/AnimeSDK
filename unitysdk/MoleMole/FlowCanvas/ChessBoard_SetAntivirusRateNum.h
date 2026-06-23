#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_SETANTIVIRUSRATENUM_INVOKE_OFFSET UNITYSDK_OFFSET(0x12606CC0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARD_SETANTIVIRUSRATENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x12606DB0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoard_SetAntivirusRateNum_TypeDefinitionIndex = 47444;

	class ChessBoard_SetAntivirusRateNum : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_SETANTIVIRUSRATENUM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 numValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARD_SETANTIVIRUSRATENUM_INVOKE_OFFSET))(this, numValue);
		}
	};
}
