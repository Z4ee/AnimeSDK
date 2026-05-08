#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define MOLEMOLE_FLOWCANVAS_PLAYITEMCOLLECTEFFECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x11751CE0)
#define MOLEMOLE_FLOWCANVAS_PLAYITEMCOLLECTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x117520B0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int PlayItemCollectEffect_TypeDefinitionIndex = 61444;

	class PlayItemCollectEffect : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::MoleMole::HollowChessboard::HollowCell, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_PLAYITEMCOLLECTEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::HollowChessboard::HollowCell cell, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_PLAYITEMCOLLECTEFFECT_INVOKE_OFFSET))(this, cell, count);
		}
	};
}
