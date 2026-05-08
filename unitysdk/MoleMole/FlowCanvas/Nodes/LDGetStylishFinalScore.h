#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHFINALSCORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1603FA60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHFINALSCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1603FC90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetStylishFinalScore_TypeDefinitionIndex = 64758;

	class LDGetStylishFinalScore : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHFINALSCORE__CTOR_OFFSET))(this);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHFINALSCORE_INVOKE_OFFSET))(this);
		}
	};
}
