#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
class Class_1_CD49E6413051D9AA;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int SceneItemHLODStreamingLayer_1_HLODTransitionMonitor_TypeDefinitionIndex = 73719;

	template <typename T>
	class SceneItemHLODStreamingLayer_1_HLODTransitionMonitor : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_CD49E6413051D9AA*>* _ShrinkToExpandNodes; // 0x0
		::System::Collections::Generic::HashSet_1<::Class_1_CD49E6413051D9AA*>* _ShrinkToExpandSet; // 0x0
		::System::Collections::Generic::List_1<::Class_1_CD49E6413051D9AA*>* _ExpandToShrinkNodes; // 0x0
		::System::Collections::Generic::HashSet_1<::Class_1_CD49E6413051D9AA*>* _ExpandToShrinkSet; // 0x0
		::Class_1_303D5A33D1401D59* _OwnerBlock; // 0x0
	};
}
