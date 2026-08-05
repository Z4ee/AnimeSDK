#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace MoleMole { class LevelSectionGroupData; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELZEROROOMSECTIONDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1369E670)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELZEROROOMSECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1369E800)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetLevelZeroRoomSectionData_TypeDefinitionIndex = 91131;

	class LD_GetLevelZeroRoomSectionData : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::MoleMole::LevelSectionGroupData*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELZEROROOMSECTIONDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::LevelSectionGroupData* Invoke(::System::Int32 leafQuery)
		{
			return ((::MoleMole::LevelSectionGroupData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELZEROROOMSECTIONDATA_INVOKE_OFFSET))(this, leafQuery);
		}
	};
}
