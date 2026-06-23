#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x161D6860)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x161D6900)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetGenericScore_TypeDefinitionIndex = 67382;

	class LDGetGenericScore : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Single, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORE__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::String* scoreName)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORE_INVOKE_OFFSET))(this, scoreName);
		}
	};
}
