#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEAVATARBYINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x16B86390)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEAVATARBYINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x16B86430)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_RemoveAvatarByIndex_TypeDefinitionIndex = 49884;

	class LD_RemoveAvatarByIndex : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEAVATARBYINDEX__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEAVATARBYINDEX_INVOKE_OFFSET))(this, index);
		}
	};
}
