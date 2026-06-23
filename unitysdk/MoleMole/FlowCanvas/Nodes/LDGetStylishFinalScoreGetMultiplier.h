#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHFINALSCOREGETMULTIPLIER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1580E1C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHFINALSCOREGETMULTIPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1580E410)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetStylishFinalScoreGetMultiplier_TypeDefinitionIndex = 59225;

	class LDGetStylishFinalScoreGetMultiplier : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::String*>
	{
	public:
		// static const ::System::String* DefaultValue; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHFINALSCOREGETMULTIPLIER__CTOR_OFFSET))(this);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHFINALSCOREGETMULTIPLIER_INVOKE_OFFSET))(this);
		}
	};
}
