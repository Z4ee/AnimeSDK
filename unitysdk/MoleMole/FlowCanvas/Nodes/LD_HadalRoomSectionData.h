#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

namespace MoleMole { class LevelSectionGroupData; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMSECTIONDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x10E169A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMSECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10E16BC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_HadalRoomSectionData_TypeDefinitionIndex = 41990;

	class LD_HadalRoomSectionData : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::MoleMole::LevelSectionGroupData*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMSECTIONDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::LevelSectionGroupData* Invoke()
		{
			return ((::MoleMole::LevelSectionGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_HADALROOMSECTIONDATA_INVOKE_OFFSET))(this);
		}
	};
}
