#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_6.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_CHECKCHESSENTITYPOS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B596E20)
#define MOLEMOLE_FLOWCANVAS_CHECKCHESSENTITYPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B596ED0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int CheckChessEntityPos_TypeDefinitionIndex = 46764;

	class CheckChessEntityPos : public ::FlowCanvas::Nodes::PureFunctionNode_6<::System::Boolean, ::MoleMole::ChessEntity*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHECKCHESSENTITYPOS__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::ChessEntity* entity, ::System::Boolean checkX, ::System::Boolean checkY, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ChessEntity*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHECKCHESSENTITYPOS_INVOKE_OFFSET))(this, entity, checkX, checkY, x, y);
		}
	};
}
