#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_VEHICLESTART_INVOKE_OFFSET UNITYSDK_OFFSET(0x149A0970)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_VEHICLESTART__CTOR_OFFSET UNITYSDK_OFFSET(0x149A09E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_VehicleStart_TypeDefinitionIndex = 38525;

	class LD_VehicleStart : public ::FlowCanvas::Nodes::CallableActionNode_1<::MoleMole::Battle::Entity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_VEHICLESTART__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_VEHICLESTART_INVOKE_OFFSET))(this, entity);
		}
	};
}
