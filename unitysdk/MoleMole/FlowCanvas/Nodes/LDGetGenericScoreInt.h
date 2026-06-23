#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCOREINT_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D39AD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCOREINT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D39D90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetGenericScoreInt_TypeDefinitionIndex = 49680;

	class LDGetGenericScoreInt : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Int32, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCOREINT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::String* scoreName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCOREINT_INVOKE_OFFSET))(this, scoreName);
		}
	};
}
