#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTSHAKECAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x16CA06A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTSHAKECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA0840)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDInterruptShakeCamera_TypeDefinitionIndex = 62390;

	class LDInterruptShakeCamera : public ::FlowCanvas::Nodes::CallableActionNode_3<::System::String*, ::MoleMole::Battle::Entity*, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTSHAKECAMERA__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* shakeKey, ::MoleMole::Battle::Entity* shakeLauncher, ::System::Boolean isGlobal)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTSHAKECAMERA_INVOKE_OFFSET))(this, shakeKey, shakeLauncher, isGlobal);
		}
	};
}
