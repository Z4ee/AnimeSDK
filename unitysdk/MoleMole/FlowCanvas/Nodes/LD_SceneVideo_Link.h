#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_3.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SCENEVIDEO_LINK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A05FE30)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SCENEVIDEO_LINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05FF30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SceneVideo_Link_TypeDefinitionIndex = 63820;

	class LD_SceneVideo_Link : public ::FlowCanvas::Nodes::CallableActionNode_3<::MoleMole::EntityHandle, ::MoleMole::EntityHandle, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SCENEVIDEO_LINK__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::EntityHandle sourceEntity, ::MoleMole::EntityHandle targetEntity, ::System::String* meshPath)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SCENEVIDEO_LINK_INVOKE_OFFSET))(this, sourceEntity, targetEntity, meshPath);
		}
	};
}
