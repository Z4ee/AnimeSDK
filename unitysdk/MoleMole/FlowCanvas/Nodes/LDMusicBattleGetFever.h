#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEGETFEVER_INVOKE_OFFSET UNITYSDK_OFFSET(0x107CFA70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEGETFEVER__CTOR_OFFSET UNITYSDK_OFFSET(0x107CFB00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMusicBattleGetFever_TypeDefinitionIndex = 73050;

	class LDMusicBattleGetFever : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEGETFEVER__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMUSICBATTLEGETFEVER_INVOKE_OFFSET))(this);
		}
	};
}
