#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisionState.h"
#include "unitysdk/RPG/Client/OpenWorld/SceneItemHLODTreeEnableReason.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_918;
class Class_1_09021BDF5ED5EA94;
class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_56FF45D7B2C55655;
class Class_1_8A6989C352B0F0F0;
class Class_1_DE4C6B309308A230;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::Client::OpenWorld { template <typename T> class AOIBase_1; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int SceneItemHLODStreamingLayer_1_TypeDefinitionIndex = 60518;

	template <typename T>
	class SceneItemHLODStreamingLayer_1 : public ::Class_1_5B228A4605C15E47
	{
	public:
		::System::Action* _HLODLoadedCallback; // 0x0
		::System::Single _WatchDelay; // 0x0
		::System::Collections::Generic::List_1<::Class_1_09021BDF5ED5EA94*>* _ShrinkToExpandNodes; // 0x0
		::System::Collections::Generic::List_1<::Class_1_09021BDF5ED5EA94*>* _ExpandToShrinkNodes; // 0x0
		::RPG::Client::OpenWorld::StreamingItemData* _BlockHLODItem; // 0x0
		::Class_1_09021BDF5ED5EA94* _BlockHLODTree; // 0x0
		::System::Collections::Generic::List_1<::Class_1_09021BDF5ED5EA94*>* _HLODGroupTree; // 0x0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_5B228A4605C15E47*>* _HLODLeafItems; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::OpenWorld::StreamingItemData*>* _HLODLeafItemIndex; // 0x0
		::RPG::Client::OpenWorld::BlockVisionState _LastBlockVisionState; // 0x0
	};
}
