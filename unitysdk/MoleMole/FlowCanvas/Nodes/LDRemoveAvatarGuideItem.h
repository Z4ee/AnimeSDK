#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEAVATARGUIDEITEM_INVOKE_OFFSET UNITYSDK_OFFSET(0x19B11980)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEAVATARGUIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19B11BB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRemoveAvatarGuideItem_TypeDefinitionIndex = 41996;

	class LDRemoveAvatarGuideItem : public ::FlowCanvas::Nodes::CallableActionNode_1<::MoleMole::Battle::Entity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEAVATARGUIDEITEM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEAVATARGUIDEITEM_INVOKE_OFFSET))(this, avatar);
		}
	};
}
