#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/CustomGetVariableNode_2.h"

namespace MoleMole::FlowCanvas::Nodes { class RandomGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_CUSTOMGETRANDOMMONSTERLABNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x170FE4F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomGetRandomMonsterLabNode_TypeDefinitionIndex = 42647;

	class CustomGetRandomMonsterLabNode : public ::MoleMole::FlowCanvas::Nodes::CustomGetVariableNode_2<::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::RandomGroupInfo*>*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CUSTOMGETRANDOMMONSTERLABNODE__CTOR_OFFSET))(this);
		}
	};
}
