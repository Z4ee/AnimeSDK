#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETVEHICLEHITCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1780E4C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETVEHICLEHITCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1780E560)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetVehicleHitCount_TypeDefinitionIndex = 78512;

	class LD_GetVehicleHitCount : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Int32, ::MoleMole::Battle::Entity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETVEHICLEHITCOUNT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETVEHICLEHITCOUNT_INVOKE_OFFSET))(this, entity);
		}
	};
}
