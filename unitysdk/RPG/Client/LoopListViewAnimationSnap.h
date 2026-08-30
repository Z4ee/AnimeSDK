#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace SuperScrollView { class LoopListView2; }
namespace System { class String; }

#define RPG_CLIENT_LOOPLISTVIEWANIMATIONSNAP_UPDATE_OFFSET UNITYSDK_OFFSET(0x17485F40)
#define RPG_CLIENT_LOOPLISTVIEWANIMATIONSNAP__CTOR_OFFSET UNITYSDK_OFFSET(0x17486200)
#define RPG_CLIENT_LOOPLISTVIEWANIMATIONSNAP__UPDATEITEMANIMSTATE_OFFSET UNITYSDK_OFFSET(0x17485FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopListViewAnimationSnap_TypeDefinitionIndex = 68980;

	class LoopListViewAnimationSnap : public ::UnityEngine::MonoBehaviour
	{
	public:
		::SuperScrollView::LoopListView2* mLoopListView; // 0x18
		::System::Single mItemDistance; // 0x20
		::System::String* mItemSnapAnimationName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWANIMATIONSNAP__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWANIMATIONSNAP_UPDATE_OFFSET))(this);
		}

		::System::Void _UpdateItemAnimState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPLISTVIEWANIMATIONSNAP__UPDATEITEMANIMSTATE_OFFSET))(this);
		}
	};
}
