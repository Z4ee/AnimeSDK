#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEPARTNERAVATARBYID_INVOKE_OFFSET UNITYSDK_OFFSET(0x13EDB200)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEPARTNERAVATARBYID__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDB320)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_RemovePartnerAvatarByID_TypeDefinitionIndex = 78781;

	class LD_RemovePartnerAvatarByID : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEPARTNERAVATARBYID__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEPARTNERAVATARBYID_INVOKE_OFFSET))(this, avatarID);
		}
	};
}
