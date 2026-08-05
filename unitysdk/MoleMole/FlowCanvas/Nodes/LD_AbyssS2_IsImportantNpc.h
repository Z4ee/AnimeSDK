#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISIMPORTANTNPC_INVOKE_OFFSET UNITYSDK_OFFSET(0x13A8C360)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISIMPORTANTNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x13A8C520)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_IsImportantNpc_TypeDefinitionIndex = 90813;

	class LD_AbyssS2_IsImportantNpc : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Boolean, ::MoleMole::Battle::Entity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISIMPORTANTNPC__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* targetEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISIMPORTANTNPC_INVOKE_OFFSET))(this, targetEntity);
		}
	};
}
