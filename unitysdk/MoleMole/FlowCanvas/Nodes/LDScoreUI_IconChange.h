#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_3.h"
#include "unitysdk/MoleMole/BubbleType.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSCOREUI_ICONCHANGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16B81840)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCOREUI_ICONCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B819A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDScoreUI_IconChange_TypeDefinitionIndex = 77534;

	class LDScoreUI_IconChange : public ::FlowCanvas::Nodes::CallableActionNode_3<::MoleMole::BubbleType, ::System::String*, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCOREUI_ICONCHANGE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::BubbleType bubbleType, ::System::String* iconKey, ::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::BubbleType, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCOREUI_ICONCHANGE_INVOKE_OFFSET))(this, bubbleType, iconKey, playAnim);
		}
	};
}
