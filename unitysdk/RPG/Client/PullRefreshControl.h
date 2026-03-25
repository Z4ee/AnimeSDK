#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PullRefreshControl_DragLoadState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace SuperScrollView { class LoopListView2; }
namespace System { class Action; }

#define RPG_CLIENT_PULLREFRESHCONTROL_INIT_OFFSET UNITYSDK_OFFSET(0xA236A30)
#define RPG_CLIENT_PULLREFRESHCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xA236E10)
#define RPG_CLIENT_PULLREFRESHCONTROL__ISREACHBOTTOM_OFFSET UNITYSDK_OFFSET(0xA236C60)
#define RPG_CLIENT_PULLREFRESHCONTROL__ONDRAG_OFFSET UNITYSDK_OFFSET(0xA236D40)
#define RPG_CLIENT_PULLREFRESHCONTROL__ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xA236DB0)
#define RPG_CLIENT_PULLREFRESHCONTROL__SETDRAGHANDLER_OFFSET UNITYSDK_OFFSET(0xA236AA0)
#define RPG_CLIENT_PULLREFRESHCONTROL__SETENDDRAGHANDLER_OFFSET UNITYSDK_OFFSET(0xA236B80)

namespace RPG::Client
{
	inline static constexpr unsigned int PullRefreshControl_TypeDefinitionIndex = 59529;

	class PullRefreshControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::PullRefreshControl_DragLoadState mDragLoadState; // 0x18
		::SuperScrollView::LoopListView2* mLoopListView; // 0x20
		::System::Int32 DragLoadHeight; // 0x28
		::System::Action* mOnRefreshCallback; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PULLREFRESHCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Init(::SuperScrollView::LoopListView2* loopListView2, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListView2*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PULLREFRESHCONTROL_INIT_OFFSET))(this, loopListView2, callback);
		}

		::System::Void _SetDragHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PULLREFRESHCONTROL__SETDRAGHANDLER_OFFSET))(this);
		}

		::System::Void _SetEndDragHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PULLREFRESHCONTROL__SETENDDRAGHANDLER_OFFSET))(this);
		}

		::System::Boolean _IsReachBottom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PULLREFRESHCONTROL__ISREACHBOTTOM_OFFSET))(this);
		}

		::System::Void _OnDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PULLREFRESHCONTROL__ONDRAG_OFFSET))(this);
		}

		::System::Void _OnEndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PULLREFRESHCONTROL__ONENDDRAG_OFFSET))(this);
		}
	};
}
