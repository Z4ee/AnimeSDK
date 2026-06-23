#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/CustomSetVariableNode_2.h"

namespace MoleMole::FlowCanvas::Nodes { class WaveMonsterInfoData; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CUSTOMSETWAVEMONSTERINFONODE__CTOR_OFFSET UNITYSDK_OFFSET(0x158092C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomSetWaveMonsterInfoNode_TypeDefinitionIndex = 52285;

	class CustomSetWaveMonsterInfoNode : public ::MoleMole::FlowCanvas::Nodes::CustomSetVariableNode_2<::MoleMole::FlowCanvas::Nodes::WaveMonsterInfoData*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CUSTOMSETWAVEMONSTERINFONODE__CTOR_OFFSET))(this);
		}
	};
}
