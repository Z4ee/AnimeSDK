#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIBubbleItemState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_BADE65034284623D;
namespace RPG::Client { class UIBubbleManager; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_UIBUBBLEITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xCB32930)
#define RPG_CLIENT_UIBUBBLEITEM_DESTROYBUBBLE_OFFSET UNITYSDK_OFFSET(0xCB331D0)
#define RPG_CLIENT_UIBUBBLEITEM_GET_BUBBLEMANAGER_OFFSET UNITYSDK_OFFSET(0xCB333E0)
#define RPG_CLIENT_UIBUBBLEITEM_GET_OFFSET UNITYSDK_OFFSET(0xCB32820)
#define RPG_CLIENT_UIBUBBLEITEM_GET_POOL_OFFSET UNITYSDK_OFFSET(0xCB33400)
#define RPG_CLIENT_UIBUBBLEITEM_HIDE_OFFSET UNITYSDK_OFFSET(0xCB32BB0)
#define RPG_CLIENT_UIBUBBLEITEM_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0xCB32B40)
#define RPG_CLIENT_UIBUBBLEITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCB329B0)
#define RPG_CLIENT_UIBUBBLEITEM_SETFOLLOWENTITY_OFFSET UNITYSDK_OFFSET(0xCB32F80)
#define RPG_CLIENT_UIBUBBLEITEM_SETFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xCB32C10)
#define RPG_CLIENT_UIBUBBLEITEM_SETLIFETIME_OFFSET UNITYSDK_OFFSET(0xCB33080)
#define RPG_CLIENT_UIBUBBLEITEM_SETSHOWFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xCB33030)
#define RPG_CLIENT_UIBUBBLEITEM_SET_BUBBLEMANAGER_OFFSET UNITYSDK_OFFSET(0xCB333F0)
#define RPG_CLIENT_UIBUBBLEITEM_SET_POOL_OFFSET UNITYSDK_OFFSET(0xCB33410)
#define RPG_CLIENT_UIBUBBLEITEM_SHOW_1_OFFSET UNITYSDK_OFFSET(0xCB33130)
#define RPG_CLIENT_UIBUBBLEITEM_SHOW_OFFSET UNITYSDK_OFFSET(0xCB330E0)
#define RPG_CLIENT_UIBUBBLEITEM_START_OFFSET UNITYSDK_OFFSET(0xCB32970)
#define RPG_CLIENT_UIBUBBLEITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xCB32A10)
#define RPG_CLIENT_UIBUBBLEITEM__COUNTDOWNBUBBLELIFETIME_OFFSET UNITYSDK_OFFSET(0xCB32A70)
#define RPG_CLIENT_UIBUBBLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCB33420)

namespace RPG::Client
{
	inline static constexpr unsigned int UIBubbleItem_TypeDefinitionIndex = 64468;

	class UIBubbleItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::XLua::LuaTable* UserObject; // 0x18
		::System::Single LifeTime; // 0x20
		::System::Boolean IsManualUpdate; // 0x24
		::System::Single _CurLifeTime; // 0x28
		::RPG::Client::UIBubbleManager* _BubbleManager_k__BackingField; // 0x30
		::Class_1_BADE65034284623D* _Pool_k__BackingField; // 0x38
		::RPG::Client::UIBubbleItemState _State; // 0x40
		::RPG::Client::UIFollow3DTarget* _FollowTarget; // 0x48
		::System::Action* _ShowFinishCallback; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::UIBubbleItem* Get(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::Client::UIBubbleItem*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_GET_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_UPDATE_OFFSET))(this);
		}

		::System::Void ManualUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_MANUALUPDATE_OFFSET))(this, a1);
		}

		::System::Void _CountDownBubbleLifeTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM__COUNTDOWNBUBBLELIFETIME_OFFSET))(this, a1);
		}

		::System::Void SetFollowTarget(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SETFOLLOWTARGET_OFFSET))(this, a1);
		}

		::System::Void SetFollowEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SETFOLLOWENTITY_OFFSET))(this, a1);
		}

		::System::Void SetShowFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SETSHOWFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetLifeTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SETLIFETIME_OFFSET))(this, a1);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SHOW_OFFSET))(this);
		}

		::System::Void Show_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SHOW_1_OFFSET))(this, a1);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_HIDE_OFFSET))(this);
		}

		::System::Void DestroyBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_DESTROYBUBBLE_OFFSET))(this);
		}

		::RPG::Client::UIBubbleManager* get_BubbleManager()
		{
			return ((::RPG::Client::UIBubbleManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_GET_BUBBLEMANAGER_OFFSET))(this);
		}

		::System::Void set_BubbleManager(::RPG::Client::UIBubbleManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIBubbleManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SET_BUBBLEMANAGER_OFFSET))(this, a1);
		}

		::Class_1_BADE65034284623D* get_Pool()
		{
			return ((::Class_1_BADE65034284623D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_GET_POOL_OFFSET))(this);
		}

		::System::Void set_Pool(::Class_1_BADE65034284623D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BADE65034284623D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SET_POOL_OFFSET))(this, a1);
		}
	};
}
