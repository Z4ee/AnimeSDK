#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A398190)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A398500)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetMonsterLevelFromCard_TypeDefinitionIndex = 44706;

	class LDGetMonsterLevelFromCard : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARD__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 monsterCardId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARD_INVOKE_OFFSET))(this, monsterCardId);
		}
	};
}
