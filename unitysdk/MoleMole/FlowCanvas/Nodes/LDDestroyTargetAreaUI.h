#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETAREAUI_INVOKE_OFFSET UNITYSDK_OFFSET(0x16C9E320)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETAREAUI__CTOR_OFFSET UNITYSDK_OFFSET(0x16C9E580)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDDestroyTargetAreaUI_TypeDefinitionIndex = 68599;

	class LDDestroyTargetAreaUI : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Boolean, ::System::Collections::Generic::List_1<::System::String*>*>
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* paramList; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETAREAUI__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Collections::Generic::List_1<::System::String*>* AnchorList)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETAREAUI_INVOKE_OFFSET))(this, AnchorList);
		}
	};
}
