#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

namespace MoleMole::FlowCanvas { class SimpleItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_DROPITEMNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B597E00)
#define MOLEMOLE_FLOWCANVAS_DROPITEMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B597E50)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int DropItemNode_TypeDefinitionIndex = 90868;

	class DropItemNode : public ::FlowCanvas::Nodes::CallableActionNode_2<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::SimpleItem*>*, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::SimpleItem*>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DROPITEMNODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::SimpleItem*>* randomItems, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::SimpleItem*>* conditionItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::SimpleItem*>*, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::SimpleItem*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DROPITEMNODE_INVOKE_OFFSET))(this, randomItems, conditionItems);
		}
	};
}
