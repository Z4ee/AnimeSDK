#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

namespace MoleMole::FlatBuffers::Config { class AbyssS2SceneTemplate; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURRENTSCENETEMPLATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15123690)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURRENTSCENETEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x151237B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_CurrentSceneTemplate_TypeDefinitionIndex = 78656;

	class LD_AbyssS2_CurrentSceneTemplate : public ::FlowCanvas::Nodes::PureFunctionNode_1<::MoleMole::FlatBuffers::Config::AbyssS2SceneTemplate*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURRENTSCENETEMPLATE__CTOR_OFFSET))(this);
		}

		::MoleMole::FlatBuffers::Config::AbyssS2SceneTemplate* Invoke()
		{
			return ((::MoleMole::FlatBuffers::Config::AbyssS2SceneTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURRENTSCENETEMPLATE_INVOKE_OFFSET))(this);
		}
	};
}
