#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEAVATARBYINDEXLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x19081450)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEAVATARBYINDEXLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x190814A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_RemoveAvatarByIndexList_TypeDefinitionIndex = 58734;

	class LD_RemoveAvatarByIndexList : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Collections::Generic::List_1<::System::Int32>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEAVATARBYINDEXLIST__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::Int32>* indexList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVEAVATARBYINDEXLIST_INVOKE_OFFSET))(this, indexList);
		}
	};
}
