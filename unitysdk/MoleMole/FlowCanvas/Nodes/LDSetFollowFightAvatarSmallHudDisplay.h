#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWFIGHTAVATARSMALLHUDDISPLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x18B25D60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWFIGHTAVATARSMALLHUDDISPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18B25F70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetFollowFightAvatarSmallHudDisplay_TypeDefinitionIndex = 62700;

	class LDSetFollowFightAvatarSmallHudDisplay : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWFIGHTAVATARSMALLHUDDISPLAY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWFIGHTAVATARSMALLHUDDISPLAY_INVOKE_OFFSET))(this, enabled);
		}
	};
}
