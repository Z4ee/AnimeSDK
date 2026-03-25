#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleMonoStateBase.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelMainPuzzleStateType.h"

class Class_0_16E4307DCC419505_604;
class Class_1_085A149A901F5E47;
class Class_2_0BF0926D4A749938;
namespace RPG::Client::Prop { class ChimeraBillboardController; }
namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleShopView; }
namespace RPG::Client::Prop { class ChimeraDuelShopDraggedChimeraSlot; }
namespace RPG::Client::Prop { class ChimeraDuelTeamMemberSlot; }
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_GETKEYMAPANCHOR_OFFSET UNITYSDK_OFFSET(0xA054400)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_GETPROXY_OFFSET UNITYSDK_OFFSET(0xA054810)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_GETTEAMMEMBERSLOT_OFFSET UNITYSDK_OFFSET(0xA054370)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_GET_DRAGGEDCHIMERASLOT_OFFSET UNITYSDK_OFFSET(0xA0537F0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_GET_TEAMMEMBERSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0xA054320)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xA053750)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_GET__STATETYPE_OFFSET UNITYSDK_OFFSET(0xA053680)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_GET__UINAME_OFFSET UNITYSDK_OFFSET(0xA053710)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_GET__UIPATH_OFFSET UNITYSDK_OFFSET(0xA0536D0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_INSTANTIATEBILLBOARD_OFFSET UNITYSDK_OFFSET(0xA054240)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0xA053920)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0xA053F20)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_PLAYPERFORMANCEANDGETCANCELHANDLER_OFFSET UNITYSDK_OFFSET(0xA0544D0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_PREPAREENTERBYUI_OFFSET UNITYSDK_OFFSET(0xA0538E0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_REMOVEPROXY_OFFSET UNITYSDK_OFFSET(0xA0549D0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_RPG_CLIENT_PROP_IDUELCHIMERAPROXYCONTAINER_GETPROXIES_OFFSET UNITYSDK_OFFSET(0xA054790)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_SET_DRAGGEDCHIMERASLOT_OFFSET UNITYSDK_OFFSET(0xA053800)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA053810)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA054080)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___IFIXBASEPROXY_ONENTER_OFFSET UNITYSDK_OFFSET(0xA054A60)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___IFIXBASEPROXY_ONEXIT_OFFSET UNITYSDK_OFFSET(0xA054A70)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___IFIXBASEPROXY__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA054A80)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleShopState_TypeDefinitionIndex = 63835;

	class ChimeraDuelMainPuzzleShopState : public ::RPG::Client::Prop::ChimeraDuelMainPuzzleMonoStateBase
	{
	public:
		::Class_1_085A149A901F5E47* _PerformancePlayer; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraDuelTeamMemberSlot*>* _TeamMemberSlots; // 0x30
		::RPG::Client::Prop::ChimeraDuelShopDraggedChimeraSlot* _DraggedChimeraSlot_k__BackingField; // 0x38
		::Class_2_0BF0926D4A749938* _PerformanceExecuteContext; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::Prop::DuelChimeraProxy*>* _TeamMemberProxies; // 0x48
		::System::Boolean _WouldEnterByUI; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType get__StateType()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_GET__STATETYPE_OFFSET))(this);
		}

		static ::System::String* get__UIPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_GET__UIPATH_OFFSET))();
		}

		static ::System::String* get__UIName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_GET__UINAME_OFFSET))();
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleShopView* get_View()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleShopView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_GET_VIEW_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelShopDraggedChimeraSlot* get_DraggedChimeraSlot()
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopDraggedChimeraSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_GET_DRAGGEDCHIMERASLOT_OFFSET))(this);
		}

		::System::Void set_DraggedChimeraSlot(::RPG::Client::Prop::ChimeraDuelShopDraggedChimeraSlot* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelShopDraggedChimeraSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_SET_DRAGGEDCHIMERASLOT_OFFSET))(this, value);
		}

		::System::Void PrepareEnterByUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_PREPAREENTERBYUI_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_ONENTER_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_ONEXIT_OFFSET))(this);
		}

		::System::Void _OnUIScreenSizeChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE__ONUISCREENSIZECHANGED_OFFSET))(this, arg);
		}

		::RPG::Client::Prop::ChimeraBillboardController* InstantiateBillboard(::System::Func_2<::UnityEngine::Transform*, ::UnityEngine::GameObject*>* instantiate)
		{
			return ((::RPG::Client::Prop::ChimeraBillboardController*(*)(::PVOID, ::System::Func_2<::UnityEngine::Transform*, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_INSTANTIATEBILLBOARD_OFFSET))(this, instantiate);
		}

		::System::Int32 get_TeamMemberSlotCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_GET_TEAMMEMBERSLOTCOUNT_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraDuelTeamMemberSlot* GetTeamMemberSlot(::System::Int32 slotIndex)
		{
			return ((::RPG::Client::Prop::ChimeraDuelTeamMemberSlot*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_GETTEAMMEMBERSLOT_OFFSET))(this, slotIndex);
		}

		::UnityEngine::Transform* GetKeyMapAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_GETKEYMAPANCHOR_OFFSET))(this);
		}

		::System::Action* PlayPerformanceAndGetCancelHandler(::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_604*>* commands, ::System::Action_1<::System::Boolean>* onComplete)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_604*>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_PLAYPERFORMANCEANDGETCANCELHANDLER_OFFSET))(this, commands, onComplete);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::DuelChimeraProxy*>* RPG_Client_Prop_IDuelChimeraProxyContainer_GetProxies()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Prop::DuelChimeraProxy*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_RPG_CLIENT_PROP_IDUELCHIMERAPROXYCONTAINER_GETPROXIES_OFFSET))(this);
		}

		::RPG::Client::Prop::DuelChimeraProxy* GetProxy(::System::Int32 uniqueID)
		{
			return ((::RPG::Client::Prop::DuelChimeraProxy*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_GETPROXY_OFFSET))(this, uniqueID);
		}

		::System::Void RemoveProxy(::System::Int32 uniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE_REMOVEPROXY_OFFSET))(this, uniqueID);
		}

		::System::Void __iFixBaseProxy_OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___IFIXBASEPROXY_ONENTER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___IFIXBASEPROXY_ONEXIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnUIScreenSizeChanged(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLESHOPSTATE___IFIXBASEPROXY__ONUISCREENSIZECHANGED_OFFSET))(this, P0);
		}
	};
}
