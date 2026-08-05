#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_CHESSHIDEUIVIEW_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B194C80)
#define MOLEMOLE_FLOWCANVAS_CHESSHIDEUIVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B194D90)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessHideUIView_TypeDefinitionIndex = 83762;

	class ChessHideUIView : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHIDEUIVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 pieceIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSHIDEUIVIEW_INVOKE_OFFSET))(this, pieceIndex);
		}
	};
}
