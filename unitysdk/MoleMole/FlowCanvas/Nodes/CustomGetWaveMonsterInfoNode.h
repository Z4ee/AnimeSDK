#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/CustomGetVariableNode_2.h"

namespace MoleMole::FlowCanvas::Nodes { class WaveMonsterInfoData; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CUSTOMGETWAVEMONSTERINFONODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1911A1C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomGetWaveMonsterInfoNode_TypeDefinitionIndex = 85487;

	class CustomGetWaveMonsterInfoNode : public ::MoleMole::FlowCanvas::Nodes::CustomGetVariableNode_2<::MoleMole::FlowCanvas::Nodes::WaveMonsterInfoData*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CUSTOMGETWAVEMONSTERINFONODE__CTOR_OFFSET))(this);
		}
	};
}
