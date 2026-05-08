#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHFINALSCOREGETMULTIPLIER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1173D1E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSTYLISHFINALSCOREGETMULTIPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1173D430)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetStylishFinalScoreGetMultiplier_TypeDefinitionIndex = 81205;

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
