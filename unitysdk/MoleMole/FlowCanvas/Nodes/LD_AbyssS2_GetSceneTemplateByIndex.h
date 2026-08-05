#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace MoleMole::FlatBuffers::Config { class AbyssS2SceneTemplate; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETSCENETEMPLATEBYINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B1B02E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETSCENETEMPLATEBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B0410)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetSceneTemplateByIndex_TypeDefinitionIndex = 69212;

	class LD_AbyssS2_GetSceneTemplateByIndex : public ::FlowCanvas::Nodes::PureFunctionNode_2<::MoleMole::FlatBuffers::Config::AbyssS2SceneTemplate*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETSCENETEMPLATEBYINDEX__CTOR_OFFSET))(this);
		}

		::MoleMole::FlatBuffers::Config::AbyssS2SceneTemplate* Invoke(::System::Int32 qryIndex)
		{
			return ((::MoleMole::FlatBuffers::Config::AbyssS2SceneTemplate*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETSCENETEMPLATEBYINDEX_INVOKE_OFFSET))(this, qryIndex);
		}
	};
}
