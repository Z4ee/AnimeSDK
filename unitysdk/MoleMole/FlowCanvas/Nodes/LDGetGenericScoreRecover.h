#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORERECOVER_INVOKE_OFFSET UNITYSDK_OFFSET(0x118B53F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORERECOVER__CTOR_OFFSET UNITYSDK_OFFSET(0x118B5480)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetGenericScoreRecover_TypeDefinitionIndex = 61207;

	class LDGetGenericScoreRecover : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Single, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORERECOVER__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::String* scoreName)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORERECOVER_INVOKE_OFFSET))(this, scoreName);
		}
	};
}
