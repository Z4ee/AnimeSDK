#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDDTargetAreaUIData.h"

namespace MoleMole::FlowCanvas::Nodes { class LDDTargetAreaSource; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETARGETAREAUISOUCE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A01F880)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATETARGETAREAUISOUCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A01FAD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateTargetAreaUISouce_TypeDefinitionIndex = 76523;

	class LDCreateTargetAreaUISouce : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaSource*, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETARGETAREAUISOUCE__CTOR_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::LDDTargetAreaSource* Invoke(::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* targetAreaUIDatas)
		{
			return ((::MoleMole::FlowCanvas::Nodes::LDDTargetAreaSource*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATETARGETAREAUISOUCE_INVOKE_OFFSET))(this, targetAreaUIDatas);
		}
	};
}
