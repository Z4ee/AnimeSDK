#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDRECORDUSINGMONSTERCARDLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x192443E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRECORDUSINGMONSTERCARDLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19244650)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRecordUsingMonsterCardList_TypeDefinitionIndex = 86235;

	class LDRecordUsingMonsterCardList : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Collections::Generic::List_1<::System::Int32>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRECORDUSINGMONSTERCARDLIST__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::Int32>* monsterCardIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRECORDUSINGMONSTERCARDLIST_INVOKE_OFFSET))(this, monsterCardIds);
		}
	};
}
