#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"
#include "unitysdk/MoleMole/Vector2Int.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTRANSLATIONACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x12607BA0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDTRANSLATIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12607D90)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardTranslationAction_TypeDefinitionIndex = 54718;

	class ChessboardTranslationAction : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::MoleMole::Vector2Int, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDTRANSLATIONACTION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Vector2Int jumpInfo, ::System::Boolean useSpecialTextureSheet)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDTRANSLATIONACTION_INVOKE_OFFSET))(this, jumpInfo, useSpecialTextureSheet);
		}
	};
}
