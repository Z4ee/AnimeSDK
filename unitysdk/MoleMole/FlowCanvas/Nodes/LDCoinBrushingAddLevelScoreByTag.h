#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGADDLEVELSCOREBYTAG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A01F5C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGADDLEVELSCOREBYTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A01F860)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCoinBrushingAddLevelScoreByTag_TypeDefinitionIndex = 59784;

	class LDCoinBrushingAddLevelScoreByTag : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGADDLEVELSCOREBYTAG__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOINBRUSHINGADDLEVELSCOREBYTAG_INVOKE_OFFSET))(this, tag);
		}
	};
}
