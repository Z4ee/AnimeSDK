#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_5.h"
#include "unitysdk/MoleMole/Config/TextureSheetInterruptType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SCENEVIDEO_PLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x149E8210)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SCENEVIDEO_PLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x149E84A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SceneVideo_Play_TypeDefinitionIndex = 85885;

	class LD_SceneVideo_Play : public ::FlowCanvas::Nodes::CallableActionNode_5<::MoleMole::EntityHandle, ::System::String*, ::System::String*, ::System::Boolean, ::MoleMole::Config::TextureSheetInterruptType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SCENEVIDEO_PLAY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::EntityHandle TargetEntity, ::System::String* MeshPath, ::System::String* VideoPath, ::System::Boolean IsLoop, ::MoleMole::Config::TextureSheetInterruptType InterruptType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::String*, ::System::String*, ::System::Boolean, ::MoleMole::Config::TextureSheetInterruptType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SCENEVIDEO_PLAY_INVOKE_OFFSET))(this, TargetEntity, MeshPath, VideoPath, IsLoop, InterruptType);
		}
	};
}
