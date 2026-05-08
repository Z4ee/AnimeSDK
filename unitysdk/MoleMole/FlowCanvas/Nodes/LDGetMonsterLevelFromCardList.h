#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARDLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x16B7C360)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARDLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x16B7C910)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARDLIST__GETMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0x16B7C4F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetMonsterLevelFromCardList_TypeDefinitionIndex = 38318;

	class LDGetMonsterLevelFromCardList : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARDLIST__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* Invoke(::System::Collections::Generic::List_1<::System::Int32>* monsterCardList)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARDLIST_INVOKE_OFFSET))(this, monsterCardList);
		}

		static ::System::Int32 _GetMonsterLevel(::System::Int32 monsterCardId)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARDLIST__GETMONSTERLEVEL_OFFSET))(monsterCardId);
		}
	};
}
