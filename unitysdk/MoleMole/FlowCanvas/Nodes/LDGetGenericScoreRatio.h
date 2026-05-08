#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORERATIO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1498E700)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORERATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1498E7C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetGenericScoreRatio_TypeDefinitionIndex = 82036;

	class LDGetGenericScoreRatio : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Single, ::System::String*, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORERATIO__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::String* scoreName, ::System::Boolean plusOne)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORERATIO_INVOKE_OFFSET))(this, scoreName, plusOne);
		}
	};
}
