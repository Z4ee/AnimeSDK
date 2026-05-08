#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

namespace MoleMole::Utils { class NapCameraSequence; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETNAPCAMERASEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E45A90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetNapCameraSequence_TypeDefinitionIndex = 55601;

	class LDGetNapCameraSequence : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::MoleMole::Utils::NapCameraSequence*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETNAPCAMERASEQUENCE__CTOR_OFFSET))(this);
		}
	};
}
