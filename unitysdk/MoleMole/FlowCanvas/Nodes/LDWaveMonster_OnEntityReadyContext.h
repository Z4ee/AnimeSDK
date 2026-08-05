#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3217798F52249A87.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class LDWaveMonster; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ONENTITYREADYCONTEXT_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x144D02E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ONENTITYREADYCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x144D02D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveMonster_OnEntityReadyContext_TypeDefinitionIndex = 83846;

	class LDWaveMonster_OnEntityReadyContext : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDWaveMonster* _payload; // 0x10
		::Struct_2_3217798F52249A87 _postReadyConfig; // 0x18

		::System::Void _ctor(::MoleMole::FlowCanvas::Nodes::LDWaveMonster* payload, ::Struct_2_3217798F52249A87 postReadyConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDWaveMonster*, ::Struct_2_3217798F52249A87))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ONENTITYREADYCONTEXT__CTOR_OFFSET))(this, payload, postReadyConfig);
		}

		::System::Void OnEntityReady(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTER_ONENTITYREADYCONTEXT_ONENTITYREADY_OFFSET))(this, entity);
		}
	};
}
