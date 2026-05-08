#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMMONSTERPATTERNBYTAG_INVOKE_OFFSET UNITYSDK_OFFSET(0x170C8BE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMMONSTERPATTERNBYTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x170C8CD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRandomMonsterPatternByTag_TypeDefinitionIndex = 54470;

	class LDRandomMonsterPatternByTag : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Int32, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMMONSTERPATTERNBYTAG__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::String* filterTag)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRANDOMMONSTERPATTERNBYTAG_INVOKE_OFFSET))(this, filterTag);
		}
	};
}
