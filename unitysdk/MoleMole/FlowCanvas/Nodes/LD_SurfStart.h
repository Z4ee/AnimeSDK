#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_4.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFSTART_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A0306C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1A030790)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SurfStart_TypeDefinitionIndex = 82604;

	class LD_SurfStart : public ::FlowCanvas::Nodes::CallableActionNode_4<::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFSTART__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* playerEntity, ::System::String* pathName, ::System::Boolean isReverse, ::System::String* spawnPoint)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFSTART_INVOKE_OFFSET))(this, playerEntity, pathName, isReverse, spawnPoint);
		}
	};
}
