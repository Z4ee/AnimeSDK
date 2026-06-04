#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFlowDirector_IFlowState; }
namespace RPG::Client { class GridFightFlowDirector_IFlowStateEvent; }
namespace RPG::Client { class GridFightFlowDirector_ITransitionRule; }
namespace RPG::Client { class NotifyHandler; }
namespace System { class Action; }
namespace System { class Type; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB35380)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_FINISH_OFFSET UNITYSDK_OFFSET(0xBB35400)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xBB35210)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_GET_ISINGAME_OFFSET UNITYSDK_OFFSET(0xBB39A80)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_GET_ISINPREPARATION_OFFSET UNITYSDK_OFFSET(0xBB39A20)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INIT_OFFSET UNITYSDK_OFFSET(0xBB35540)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PREPAREUNFINISHEDGAME_OFFSET UNITYSDK_OFFSET(0xBB38FC0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_RECONNECT_OFFSET UNITYSDK_OFFSET(0xBB39140)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_REGISTERTRANSITIONCALLBACK_OFFSET UNITYSDK_OFFSET(0xBB39530)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_START_OFFSET UNITYSDK_OFFSET(0xBB38BB0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_TRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0xBB39040)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xBB394B0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_UNREGISTERTRANSITIONCALLBACK_OFFSET UNITYSDK_OFFSET(0xBB395A0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xBB38B50)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__CLEARSTATES_OFFSET UNITYSDK_OFFSET(0xBB391C0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xBB35110)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__GETSTATE_OFFSET UNITYSDK_OFFSET(0xBB38CD0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__INITSTATES_OFFSET UNITYSDK_OFFSET(0xBB359B0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xBB39930)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONBATTLEGAMEPAGEINITAFTERLEVELSETUP_OFFSET UNITYSDK_OFFSET(0xBB397D0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTBATTLEFINISH_OFFSET UNITYSDK_OFFSET(0xBB398B0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTGETINITIALSUPPLYFINISH_OFFSET UNITYSDK_OFFSET(0xBB396F0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTLEAVEGAMEPLAY_OFFSET UNITYSDK_OFFSET(0xBB39750)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTSETTLEFINISH_OFFSET UNITYSDK_OFFSET(0xBB39990)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTSTARTBATTLE_OFFSET UNITYSDK_OFFSET(0xBB39830)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTSYNCEVENT_OFFSET UNITYSDK_OFFSET(0xBB39690)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__TRANSITIONTO_OFFSET UNITYSDK_OFFSET(0xBB38D80)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__TRIGGERTRANSITION_OFFSET UNITYSDK_OFFSET(0xBB392D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_TypeDefinitionIndex = 60360;

	class GridFightFlowDirector : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightFlowDirector** StaticGet__Instance()
		{
			return (::RPG::Client::GridFightFlowDirector**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector_TypeDefinitionIndex)->GetStaticField(0x2C530);
		}
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::Client::GridFightFlowDirector_IFlowState*>* _States; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::GridFightFlowDirector_IFlowState*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightFlowDirector_ITransitionRule*>*>* _Transitions; // 0x18
		::RPG::Client::GridFightFlowDirector_IFlowState* _CurrentState; // 0x20
		::System::Action* _TransitionCallback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightFlowDirector* get_Instance()
		{
			return ((::RPG::Client::GridFightFlowDirector*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_GET_INSTANCE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INIT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_START_OFFSET))(this);
		}

		::System::Void PrepareUnfinishedGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PREPAREUNFINISHEDGAME_OFFSET))(this);
		}

		::System::Void Reconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_RECONNECT_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_FINISH_OFFSET))(this);
		}

		::System::Void TriggerEvent(::RPG::Client::GridFightFlowDirector_IFlowStateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowStateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_TRIGGEREVENT_OFFSET))(this, a1);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void RegisterTransitionCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_REGISTERTRANSITIONCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnRegisterTransitionCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_UNREGISTERTRANSITIONCALLBACK_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandler(::RPG::Client::NotifyType a1, ::RPG::Client::NotifyHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ADDNOTIFYHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void _InitStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__INITSTATES_OFFSET))(this);
		}

		::System::Void _ClearStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__CLEARSTATES_OFFSET))(this);
		}

		::System::Void _OnGridFightSyncEvent(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTSYNCEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnGridFightGetInitialSupplyFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTGETINITIALSUPPLYFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnGridFightLeaveGamePlay(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTLEAVEGAMEPLAY_OFFSET))(this, a1);
		}

		::System::Void _OnBattleGamePageInitAfterLevelSetup(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONBATTLEGAMEPAGEINITAFTERLEVELSETUP_OFFSET))(this, a1);
		}

		::System::Void _OnGridFightStartBattle(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTSTARTBATTLE_OFFSET))(this, a1);
		}

		::System::Void _OnGridFightBattleFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTBATTLEFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnGridFightSettleFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTSETTLEFINISH_OFFSET))(this, a1);
		}

		::System::Void _TriggerTransition(::RPG::Client::GridFightFlowDirector_IFlowStateEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowStateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__TRIGGERTRANSITION_OFFSET))(this, a1);
		}

		::System::Void _TransitionTo(::RPG::Client::GridFightFlowDirector_IFlowState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__TRANSITIONTO_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightFlowDirector_IFlowState* _GetState(::System::Type* a1)
		{
			return ((::RPG::Client::GridFightFlowDirector_IFlowState*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__GETSTATE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInPreparation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_GET_ISINPREPARATION_OFFSET))(this);
		}

		::System::Boolean get_IsInGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_GET_ISINGAME_OFFSET))(this);
		}
	};
}
