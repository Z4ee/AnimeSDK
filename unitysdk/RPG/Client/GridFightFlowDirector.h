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

#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA495A50)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_FINISH_OFFSET UNITYSDK_OFFSET(0xA495AD0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA4958E0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_GET_ISINGAME_OFFSET UNITYSDK_OFFSET(0xA49A2A0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_GET_ISINPREPARATION_OFFSET UNITYSDK_OFFSET(0xA49A260)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_INIT_OFFSET UNITYSDK_OFFSET(0xA495C10)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_PREPAREUNFINISHEDGAME_OFFSET UNITYSDK_OFFSET(0xA4997E0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_RECONNECT_OFFSET UNITYSDK_OFFSET(0xA499960)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_REGISTERTRANSITIONCALLBACK_OFFSET UNITYSDK_OFFSET(0xA499D70)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_START_OFFSET UNITYSDK_OFFSET(0xA499460)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_TRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0xA499860)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xA499CF0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_UNREGISTERTRANSITIONCALLBACK_OFFSET UNITYSDK_OFFSET(0xA499DE0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xA499400)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__CLEARSTATES_OFFSET UNITYSDK_OFFSET(0xA4999E0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA4957E0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__GETSTATE_OFFSET UNITYSDK_OFFSET(0xA499590)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__INITSTATES_OFFSET UNITYSDK_OFFSET(0xA495FF0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xA49A170)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONBATTLEGAMEPAGEINITAFTERLEVELSETUP_OFFSET UNITYSDK_OFFSET(0xA49A010)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTBATTLEFINISH_OFFSET UNITYSDK_OFFSET(0xA49A0F0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTGETINITIALSUPPLYFINISH_OFFSET UNITYSDK_OFFSET(0xA499F30)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTLEAVEGAMEPLAY_OFFSET UNITYSDK_OFFSET(0xA499F90)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTSETTLEFINISH_OFFSET UNITYSDK_OFFSET(0xA49A1D0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTSTARTBATTLE_OFFSET UNITYSDK_OFFSET(0xA49A070)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTSYNCEVENT_OFFSET UNITYSDK_OFFSET(0xA499ED0)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__TRANSITIONTO_OFFSET UNITYSDK_OFFSET(0xA499650)
#define RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__TRIGGERTRANSITION_OFFSET UNITYSDK_OFFSET(0xA499B10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFlowDirector_TypeDefinitionIndex = 59425;

	class GridFightFlowDirector : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightFlowDirector** StaticGet__Instance()
		{
			return (::RPG::Client::GridFightFlowDirector**)Il2CppClass::FromTypeDefinitionIndex(GridFightFlowDirector_TypeDefinitionIndex)->GetStaticField(0x10720);
		}
		::RPG::Client::GridFightFlowDirector_IFlowState* _CurrentState; // 0x10
		::System::Action* _TransitionCallback; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::GridFightFlowDirector_IFlowState*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightFlowDirector_ITransitionRule*>*>* _Transitions; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::Client::GridFightFlowDirector_IFlowState*>* _States; // 0x28

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

		::System::Void TriggerEvent(::RPG::Client::GridFightFlowDirector_IFlowStateEvent* event)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowStateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_TRIGGEREVENT_OFFSET))(this, event);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void RegisterTransitionCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_REGISTERTRANSITIONCALLBACK_OFFSET))(this, callback);
		}

		::System::Void UnRegisterTransitionCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR_UNREGISTERTRANSITIONCALLBACK_OFFSET))(this, callback);
		}

		::System::Void _AddNotifyHandler(::RPG::Client::NotifyType type, ::RPG::Client::NotifyHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ADDNOTIFYHANDLER_OFFSET))(this, type, handler);
		}

		::System::Void _InitStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__INITSTATES_OFFSET))(this);
		}

		::System::Void _ClearStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__CLEARSTATES_OFFSET))(this);
		}

		::System::Void _OnGridFightSyncEvent(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTSYNCEVENT_OFFSET))(this, arg);
		}

		::System::Void _OnGridFightGetInitialSupplyFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTGETINITIALSUPPLYFINISH_OFFSET))(this, arg);
		}

		::System::Void _OnGridFightLeaveGamePlay(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTLEAVEGAMEPLAY_OFFSET))(this, arg);
		}

		::System::Void _OnBattleGamePageInitAfterLevelSetup(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONBATTLEGAMEPAGEINITAFTERLEVELSETUP_OFFSET))(this, arg);
		}

		::System::Void _OnGridFightStartBattle(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTSTARTBATTLE_OFFSET))(this, arg);
		}

		::System::Void _OnGridFightBattleFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTBATTLEFINISH_OFFSET))(this, arg);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _OnGridFightSettleFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__ONGRIDFIGHTSETTLEFINISH_OFFSET))(this, arg);
		}

		::System::Void _TriggerTransition(::RPG::Client::GridFightFlowDirector_IFlowStateEvent* event)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowStateEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__TRIGGERTRANSITION_OFFSET))(this, event);
		}

		::System::Void _TransitionTo(::RPG::Client::GridFightFlowDirector_IFlowState* newState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFlowDirector_IFlowState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__TRANSITIONTO_OFFSET))(this, newState);
		}

		::RPG::Client::GridFightFlowDirector_IFlowState* _GetState(::System::Type* type)
		{
			return ((::RPG::Client::GridFightFlowDirector_IFlowState*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFLOWDIRECTOR__GETSTATE_OFFSET))(this, type);
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
