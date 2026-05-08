#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace MoleMole { class LevelSectionGroupData; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEAFSECTIONDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x125C9200)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEAFSECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x125C9390)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetLeafSectionData_TypeDefinitionIndex = 76479;

	class LD_GetLeafSectionData : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::MoleMole::LevelSectionGroupData*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEAFSECTIONDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::LevelSectionGroupData* Invoke(::System::Int32 leafFcIndex)
		{
			return ((::MoleMole::LevelSectionGroupData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEAFSECTIONDATA_INVOKE_OFFSET))(this, leafFcIndex);
		}
	};
}
