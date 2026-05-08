#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define MOLEMOLE_FLOWCANVAS_HACKERGAMESETRENDERSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15403960)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMESETRENDERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15403A50)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameSetRenderState_TypeDefinitionIndex = 78183;

	class HackerGameSetRenderState : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::MoleMole::HollowChessboard::HollowCell, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESETRENDERSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::HollowChessboard::HollowCell cell, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESETRENDERSTATE_INVOKE_OFFSET))(this, cell, value);
		}
	};
}
