#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDACTIVEAREABLOCK_INVOKE_OFFSET UNITYSDK_OFFSET(0x182D0140)
#define MOLEMOLE_FLOWCANVAS_NODES_LDACTIVEAREABLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x182D0410)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDActiveAreaBlock_TypeDefinitionIndex = 49959;

	class LDActiveAreaBlock : public ::FlowCanvas::Nodes::CallableActionNode_2<::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDACTIVEAREABLOCK__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 templateId, ::System::Int32 areaId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDACTIVEAREABLOCK_INVOKE_OFFSET))(this, templateId, areaId);
		}
	};
}
