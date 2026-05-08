#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETMONSTERTEMPLATEIDBYINTERACTIONTEMPLATENPCID_INVOKE_OFFSET UNITYSDK_OFFSET(0x1174D9A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETMONSTERTEMPLATEIDBYINTERACTIONTEMPLATENPCID__CTOR_OFFSET UNITYSDK_OFFSET(0x1174DB00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetMonsterTemplateIdByInteractionTemplateNpcId_TypeDefinitionIndex = 40853;

	class LD_AbyssS2_GetMonsterTemplateIdByInteractionTemplateNpcId : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Int32, ::System::Boolean, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETMONSTERTEMPLATEIDBYINTERACTIONTEMPLATENPCID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Boolean needOwnWeapon, ::System::Int32 interactionTemplateNpcId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETMONSTERTEMPLATEIDBYINTERACTIONTEMPLATENPCID_INVOKE_OFFSET))(this, needOwnWeapon, interactionTemplateNpcId);
		}
	};
}
