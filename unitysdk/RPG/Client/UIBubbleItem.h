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

#define RPG_CLIENT_UIBUBBLEITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xA6775A0)
#define RPG_CLIENT_UIBUBBLEITEM_DESTROYBUBBLE_OFFSET UNITYSDK_OFFSET(0xA677C40)
#define RPG_CLIENT_UIBUBBLEITEM_GET_BUBBLEMANAGER_OFFSET UNITYSDK_OFFSET(0xA677E50)
#define RPG_CLIENT_UIBUBBLEITEM_GET_OFFSET UNITYSDK_OFFSET(0xA677490)
#define RPG_CLIENT_UIBUBBLEITEM_GET_POOL_OFFSET UNITYSDK_OFFSET(0xA677E70)
#define RPG_CLIENT_UIBUBBLEITEM_HIDE_OFFSET UNITYSDK_OFFSET(0xA677810)
#define RPG_CLIENT_UIBUBBLEITEM_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0xA6777A0)
#define RPG_CLIENT_UIBUBBLEITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA677620)
#define RPG_CLIENT_UIBUBBLEITEM_SETFOLLOWENTITY_OFFSET UNITYSDK_OFFSET(0xA677A00)
#define RPG_CLIENT_UIBUBBLEITEM_SETFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xA677870)
#define RPG_CLIENT_UIBUBBLEITEM_SETLIFETIME_OFFSET UNITYSDK_OFFSET(0xA677AF0)
#define RPG_CLIENT_UIBUBBLEITEM_SETSHOWFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xA677AA0)
#define RPG_CLIENT_UIBUBBLEITEM_SET_BUBBLEMANAGER_OFFSET UNITYSDK_OFFSET(0xA677E60)
#define RPG_CLIENT_UIBUBBLEITEM_SET_POOL_OFFSET UNITYSDK_OFFSET(0xA677E80)
#define RPG_CLIENT_UIBUBBLEITEM_SHOW_1_OFFSET UNITYSDK_OFFSET(0xA677BA0)
#define RPG_CLIENT_UIBUBBLEITEM_SHOW_OFFSET UNITYSDK_OFFSET(0xA677B50)
#define RPG_CLIENT_UIBUBBLEITEM_START_OFFSET UNITYSDK_OFFSET(0xA6775E0)
#define RPG_CLIENT_UIBUBBLEITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xA677680)
#define RPG_CLIENT_UIBUBBLEITEM__COUNTDOWNBUBBLELIFETIME_OFFSET UNITYSDK_OFFSET(0xA6776E0)
#define RPG_CLIENT_UIBUBBLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA677E90)

namespace RPG::Client
{
	inline static constexpr unsigned int UIBubbleItem_TypeDefinitionIndex = 56305;

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

		static ::RPG::Client::UIBubbleItem* Get(::UnityEngine::GameObject* go)
		{
			return ((::RPG::Client::UIBubbleItem*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_GET_OFFSET))(go);
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

		::System::Void ManualUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_MANUALUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void _CountDownBubbleLifeTime(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM__COUNTDOWNBUBBLELIFETIME_OFFSET))(this, deltaTime);
		}

		::System::Void SetFollowTarget(::UnityEngine::GameObject* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SETFOLLOWTARGET_OFFSET))(this, target);
		}

		::System::Void SetFollowEntity(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SETFOLLOWENTITY_OFFSET))(this, entity);
		}

		::System::Void SetShowFinishCallback(::System::Action* showFinishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SETSHOWFINISHCALLBACK_OFFSET))(this, showFinishCallback);
		}

		::System::Void SetLifeTime(::System::Single lifeTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SETLIFETIME_OFFSET))(this, lifeTime);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SHOW_OFFSET))(this);
		}

		::System::Void Show_1(::System::Single lifeTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SHOW_1_OFFSET))(this, lifeTime);
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

		::System::Void set_BubbleManager(::RPG::Client::UIBubbleManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIBubbleManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SET_BUBBLEMANAGER_OFFSET))(this, value);
		}

		::Class_1_BADE65034284623D* get_Pool()
		{
			return ((::Class_1_BADE65034284623D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_GET_POOL_OFFSET))(this);
		}

		::System::Void set_Pool(::Class_1_BADE65034284623D* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BADE65034284623D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIBUBBLEITEM_SET_POOL_OFFSET))(this, value);
		}
	};
}
