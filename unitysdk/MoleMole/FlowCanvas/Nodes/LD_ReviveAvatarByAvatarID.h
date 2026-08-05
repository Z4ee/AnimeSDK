#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_REVIVEAVATARBYAVATARID_INVOKE_OFFSET UNITYSDK_OFFSET(0x144D5940)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_REVIVEAVATARBYAVATARID__CTOR_OFFSET UNITYSDK_OFFSET(0x144D5AB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ReviveAvatarByAvatarID_TypeDefinitionIndex = 56254;

	class LD_ReviveAvatarByAvatarID : public ::FlowCanvas::Nodes::CallableActionNode_2<::System::Int32, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REVIVEAVATARBYAVATARID__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 targetAvatarID, ::System::Single HPRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REVIVEAVATARBYAVATARID_INVOKE_OFFSET))(this, targetAvatarID, HPRatio);
		}
	};
}
