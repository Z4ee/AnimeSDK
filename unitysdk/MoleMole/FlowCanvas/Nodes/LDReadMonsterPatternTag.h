#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREADMONSTERPATTERNTAG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B8385C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREADMONSTERPATTERNTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8386C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReadMonsterPatternTag_TypeDefinitionIndex = 90051;

	class LDReadMonsterPatternTag : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADMONSTERPATTERNTAG__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* Invoke(::System::Int32 patternId)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREADMONSTERPATTERNTAG_INVOKE_OFFSET))(this, patternId);
		}
	};
}
