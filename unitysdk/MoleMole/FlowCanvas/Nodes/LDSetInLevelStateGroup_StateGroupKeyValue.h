#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDSetInLevelStateGroup_InLevelStateEnum.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDSetInLevelStateGroup_StateGroupEnum.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP_STATEGROUPKEYVALUE_CLONE_OFFSET UNITYSDK_OFFSET(0x10E0EF50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP_STATEGROUPKEYVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E0EFE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetInLevelStateGroup_StateGroupKeyValue_TypeDefinitionIndex = 82147;

	class LDSetInLevelStateGroup_StateGroupKeyValue : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum StateGroup; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum State; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP_STATEGROUPKEYVALUE__CTOR_OFFSET))(this);
		}

		static ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue* Clone(::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue* other)
		{
			return ((::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*(*)(::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP_STATEGROUPKEYVALUE_CLONE_OFFSET))(other);
		}
	};
}
