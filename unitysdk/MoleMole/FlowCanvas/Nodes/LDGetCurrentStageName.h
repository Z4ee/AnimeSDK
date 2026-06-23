#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETCURRENTSTAGENAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x161D6400)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETCURRENTSTAGENAME__CTOR_OFFSET UNITYSDK_OFFSET(0x161D6520)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetCurrentStageName_TypeDefinitionIndex = 69039;

	class LDGetCurrentStageName : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETCURRENTSTAGENAME__CTOR_OFFSET))(this);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETCURRENTSTAGENAME_INVOKE_OFFSET))(this);
		}
	};
}
