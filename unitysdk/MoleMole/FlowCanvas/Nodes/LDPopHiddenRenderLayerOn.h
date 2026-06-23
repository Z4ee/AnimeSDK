#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPOPHIDDENRENDERLAYERON_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A025D70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPOPHIDDENRENDERLAYERON__CTOR_OFFSET UNITYSDK_OFFSET(0x1A025EB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPopHiddenRenderLayerOn_TypeDefinitionIndex = 53110;

	class LDPopHiddenRenderLayerOn : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPOPHIDDENRENDERLAYERON__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPOPHIDDENRENDERLAYERON_INVOKE_OFFSET))(this, tag);
		}
	};
}
