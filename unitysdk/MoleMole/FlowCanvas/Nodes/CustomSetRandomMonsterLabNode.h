#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/CustomSetVariableNode_2.h"

namespace MoleMole::FlowCanvas::Nodes { class RandomGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_CUSTOMSETRANDOMMONSTERLABNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16B79400)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomSetRandomMonsterLabNode_TypeDefinitionIndex = 58807;

	class CustomSetRandomMonsterLabNode : public ::MoleMole::FlowCanvas::Nodes::CustomSetVariableNode_2<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::RandomGroupInfo*>*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CUSTOMSETRANDOMMONSTERLABNODE__CTOR_OFFSET))(this);
		}
	};
}
