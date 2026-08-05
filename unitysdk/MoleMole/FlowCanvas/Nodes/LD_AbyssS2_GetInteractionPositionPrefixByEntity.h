#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINTERACTIONPOSITIONPREFIXBYENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x13A8C1F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINTERACTIONPOSITIONPREFIXBYENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x13A8C340)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetInteractionPositionPrefixByEntity_TypeDefinitionIndex = 90012;

	class LD_AbyssS2_GetInteractionPositionPrefixByEntity : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::String*, ::MoleMole::Battle::Entity*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINTERACTIONPOSITIONPREFIXBYENTITY__CTOR_OFFSET))(this);
		}

		::System::String* Invoke(::MoleMole::Battle::Entity* targetEntity, ::System::Int32 interactionPool)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINTERACTIONPOSITIONPREFIXBYENTITY_INVOKE_OFFSET))(this, targetEntity, interactionPool);
		}
	};
}
