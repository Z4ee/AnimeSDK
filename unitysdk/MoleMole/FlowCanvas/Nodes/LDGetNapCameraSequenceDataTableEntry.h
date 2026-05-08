#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

namespace MoleMole::Utils { class INapCameraSequenceDataTableEntry; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETNAPCAMERASEQUENCEDATATABLEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3B200)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetNapCameraSequenceDataTableEntry_TypeDefinitionIndex = 82129;

	class LDGetNapCameraSequenceDataTableEntry : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::MoleMole::Utils::INapCameraSequenceDataTableEntry*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETNAPCAMERASEQUENCEDATATABLEENTRY__CTOR_OFFSET))(this);
		}
	};
}
