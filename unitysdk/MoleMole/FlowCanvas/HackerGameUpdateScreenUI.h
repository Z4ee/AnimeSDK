#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_4.h"
#include "unitysdk/ProtoScript/ChessUIControlType.h"
#include "unitysdk/ProtoScript/ChessUIIconType.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATESCREENUI_INVOKE_OFFSET UNITYSDK_OFFSET(0x1923DB60)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATESCREENUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1923DEC0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameUpdateScreenUI_TypeDefinitionIndex = 85729;

	class HackerGameUpdateScreenUI : public ::FlowCanvas::Nodes::CallableActionNode_4<::MoleMole::ChessEntity*, ::ProtoScript::ChessUIControlType, ::ProtoScript::ChessUIIconType, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATESCREENUI__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntity* chessEntity, ::ProtoScript::ChessUIControlType controlType, ::ProtoScript::ChessUIIconType iconType, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*, ::ProtoScript::ChessUIControlType, ::ProtoScript::ChessUIIconType, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATESCREENUI_INVOKE_OFFSET))(this, chessEntity, controlType, iconType, value);
		}
	};
}
