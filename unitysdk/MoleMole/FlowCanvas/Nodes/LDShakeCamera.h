#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHAKECAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x17809C90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHAKECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x17809DC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShakeCamera_TypeDefinitionIndex = 68783;

	class LDShakeCamera : public ::FlowCanvas::Nodes::CallableActionNode_2<::System::String*, ::MoleMole::Battle::Entity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHAKECAMERA__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* shakeKey, ::MoleMole::Battle::Entity* shakeLauncher)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHAKECAMERA_INVOKE_OFFSET))(this, shakeKey, shakeLauncher);
		}
	};
}
