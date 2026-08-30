#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E7175D70942CF05A.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisionState.h"
#include "unitysdk/RPG/Client/OpenWorld/SceneItemHLODStreamingLayer_1_HLODProxyState.h"
#include "unitysdk/RPG/Client/OpenWorld/SceneItemHLODStreamingLayer_1_HLODTransitionContext.h"
#include "unitysdk/RPG/Client/OpenWorld/SceneItemHLODStreamingLayer_1_HLODTransitionEnterRequest.h"
#include "unitysdk/RPG/Client/OpenWorld/SceneItemHLODTreeEnableReason.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1187;
class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_8A6989C352B0F0F0;
class Class_1_CD49E6413051D9AA;
class Class_1_D70A30D666F20D90;
class Class_1_DE4C6B309308A230;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::Client::OpenWorld { template <typename T> class AOIBase_1; }
namespace RPG::Client::OpenWorld { template <typename T> class SceneItemHLODStreamingLayer_1_HLODTransitionMonitor; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int SceneItemHLODStreamingLayer_1_TypeDefinitionIndex = 73713;

	template <typename T>
	class SceneItemHLODStreamingLayer_1 : public ::Class_1_E7175D70942CF05A
	{
	public:
		::System::Single _WatchDelay; // 0x0
		::RPG::Client::OpenWorld::SceneItemHLODStreamingLayer_1_HLODTransitionMonitor<T>* _TransitionMonitor; // 0x0
		::System::Collections::Generic::List_1<::Class_1_CD49E6413051D9AA*>* _ReadyToShrinkNodes; // 0x0
		::RPG::Client::OpenWorld::SceneItemHLODStreamingLayer_1_HLODTransitionContext<T> _TickCtx; // 0x0
		::System::Func_2<::Class_1_CD49E6413051D9AA*, ::System::Boolean>* _OnVisitShrinkToExpandTick; // 0x0
		::System::Func_2<::Class_1_CD49E6413051D9AA*, ::System::Boolean>* _OnVisitExpandToShrinkTick; // 0x0
		::System::Action* _HLODLoadedCallback; // 0x0
		::RPG::Client::OpenWorld::StreamingItemData* _BlockHLODItem; // 0x0
		::Class_1_CD49E6413051D9AA* _BlockHLODTree; // 0x0
		::System::Collections::Generic::List_1<::Class_1_CD49E6413051D9AA*>* _HLODGroupTree; // 0x0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_E7175D70942CF05A*>* _HLODLeafItems; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::OpenWorld::StreamingItemData*>* _HLODLeafItemIndex; // 0x0
		::RPG::Client::OpenWorld::BlockVisionState _LastBlockVisionState; // 0x0
	};
}
