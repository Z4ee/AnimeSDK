#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/CustomGetVariableNode_2.h"

namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_CUSTOMGETCHESSENTITYSAVEMAPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E54860)

namespace MoleMole
{
	inline static constexpr unsigned int CustomGetChessEntitySaveMapNode_TypeDefinitionIndex = 41657;

	class CustomGetChessEntitySaveMapNode : public ::MoleMole::FlowCanvas::Nodes::CustomGetVariableNode_2<::MoleMole::ChessEntity*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMGETCHESSENTITYSAVEMAPNODE__CTOR_OFFSET))(this);
		}
	};
}
