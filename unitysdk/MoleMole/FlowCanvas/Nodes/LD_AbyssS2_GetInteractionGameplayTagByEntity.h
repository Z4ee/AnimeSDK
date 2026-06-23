#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINTERACTIONGAMEPLAYTAGBYENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x11611380)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINTERACTIONGAMEPLAYTAGBYENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x11611510)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetInteractionGameplayTagByEntity_TypeDefinitionIndex = 61506;

	class LD_AbyssS2_GetInteractionGameplayTagByEntity : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::Battle::Entity*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINTERACTIONGAMEPLAYTAGBYENTITY__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* Invoke(::MoleMole::Battle::Entity* targetEntity, ::System::Int32 interactionPool)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINTERACTIONGAMEPLAYTAGBYENTITY_INVOKE_OFFSET))(this, targetEntity, interactionPool);
		}
	};
}
