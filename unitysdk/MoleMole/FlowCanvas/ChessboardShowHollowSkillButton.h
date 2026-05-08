#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSHOWHOLLOWSKILLBUTTON_INVOKE_OFFSET UNITYSDK_OFFSET(0x16038580)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSHOWHOLLOWSKILLBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x160387B0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardShowHollowSkillButton_TypeDefinitionIndex = 40208;

	class ChessboardShowHollowSkillButton : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSHOWHOLLOWSKILLBUTTON__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSHOWHOLLOWSKILLBUTTON_INVOKE_OFFSET))(this, a);
		}
	};
}
