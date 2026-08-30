#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int NodeListViewPanel_1_TypeDefinitionIndex = 72543;

	template <typename T>
	class NodeListViewPanel_1 : public ::Class_1_34917908B7833130
	{
	public:
		::RPG::Client::PrefabLoadMeta* _PrefabLoadMeta; // 0x0
		::System::Collections::Generic::List_1<T>* _NodePanelList; // 0x0
		::System::Int32 _CurCount; // 0x0
	};
}
