#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace MoleMole::SceneMark { class SceneMarkNode; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSCENEMARKNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10E0A2E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSCENEMARKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E0A490)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetSceneMarkNode_TypeDefinitionIndex = 56932;

	class LDGetSceneMarkNode : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::MoleMole::SceneMark::SceneMarkNode*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSCENEMARKNODE__CTOR_OFFSET))(this);
		}

		::MoleMole::SceneMark::SceneMarkNode* Invoke(::System::String* Name)
		{
			return ((::MoleMole::SceneMark::SceneMarkNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSCENEMARKNODE_INVOKE_OFFSET))(this, Name);
		}
	};
}
