#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_6.h"
#include "unitysdk/ProtoScript/AimRectColor.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEAIMRECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x16038C20)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEAIMRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x16038CF0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameUpdateAimRect_TypeDefinitionIndex = 44647;

	class HackerGameUpdateAimRect : public ::FlowCanvas::Nodes::CallableActionNode_6<::MoleMole::ChessEntity*, ::System::Boolean, ::ProtoScript::AimRectColor, ::System::Boolean, ::System::Boolean, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEAIMRECT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::ChessEntity* chessEntity, ::System::Boolean value, ::ProtoScript::AimRectColor color, ::System::Boolean isHideWithEntity, ::System::Boolean isGuidePoint, ::System::Boolean isOverridePlayer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ChessEntity*, ::System::Boolean, ::ProtoScript::AimRectColor, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEUPDATEAIMRECT_INVOKE_OFFSET))(this, chessEntity, value, color, isHideWithEntity, isGuidePoint, isOverridePlayer);
		}
	};
}
