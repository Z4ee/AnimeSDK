#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

namespace MoleMole { class LevelSectionGroupData; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_AREASECTIONDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1499B440)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_AREASECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1499BA70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_AreaSectionData_TypeDefinitionIndex = 48163;

	class LD_AbyssS2_AreaSectionData : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::MoleMole::LevelSectionGroupData*>
	{
	public:
		// static const ::System::String* SecionKEY; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_AREASECTIONDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::LevelSectionGroupData* Invoke()
		{
			return ((::MoleMole::LevelSectionGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_AREASECTIONDATA_INVOKE_OFFSET))(this);
		}
	};
}
