#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINLEVELINTERACTIONREMAININGCNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x15124C20)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINLEVELINTERACTIONREMAININGCNT__CTOR_OFFSET UNITYSDK_OFFSET(0x15124D90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetInLevelInteractionRemainingCnt_TypeDefinitionIndex = 81737;

	class LD_AbyssS2_GetInLevelInteractionRemainingCnt : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Int32, ::MoleMole::Battle::Entity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINLEVELINTERACTIONREMAININGCNT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINLEVELINTERACTIONREMAININGCNT_INVOKE_OFFSET))(this, entity);
		}
	};
}
