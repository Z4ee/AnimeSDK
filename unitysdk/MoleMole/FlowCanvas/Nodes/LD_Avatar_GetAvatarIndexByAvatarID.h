#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARINDEXBYAVATARID_GETAVATARINDEXBYAVATARID_OFFSET UNITYSDK_OFFSET(0x19DB87E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARINDEXBYAVATARID_INVOKE_OFFSET UNITYSDK_OFFSET(0x19DB8790)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARINDEXBYAVATARID__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB8B90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_Avatar_GetAvatarIndexByAvatarID_TypeDefinitionIndex = 56742;

	class LD_Avatar_GetAvatarIndexByAvatarID : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARINDEXBYAVATARID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 avatarID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARINDEXBYAVATARID_INVOKE_OFFSET))(this, avatarID);
		}

		static ::System::Int32 GetAvatarIndexByAvatarID(::System::Int32 avatarID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_AVATAR_GETAVATARINDEXBYAVATARID_GETAVATARINDEXBYAVATARID_OFFSET))(avatarID);
		}
	};
}
