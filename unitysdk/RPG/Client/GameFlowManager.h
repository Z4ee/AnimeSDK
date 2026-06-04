#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
#include "unitysdk/System/Object.h"

class Class_1_B823313B2CC4BC8E;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GAMEFLOWMANAGER_ATTACH_OFFSET UNITYSDK_OFFSET(0xBAB85E0)
#define RPG_CLIENT_GAMEFLOWMANAGER_AUTOSHOWADVENTUREUI_OFFSET UNITYSDK_OFFSET(0xBAB8790)
#define RPG_CLIENT_GAMEFLOWMANAGER_DETACH_OFFSET UNITYSDK_OFFSET(0xBAB86C0)
#define RPG_CLIENT_GAMEFLOWMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAB8560)
#define RPG_CLIENT_GAMEFLOWMANAGER_ENTERGAMEFLOW_OFFSET UNITYSDK_OFFSET(0xBAB7BA0)
#define RPG_CLIENT_GAMEFLOWMANAGER_EXITGAMEFLOW_OFFSET UNITYSDK_OFFSET(0xBAB8200)
#define RPG_CLIENT_GAMEFLOWMANAGER_GETGAMEFLOWBYTYPE_OFFSET UNITYSDK_OFFSET(0xBAB84F0)
#define RPG_CLIENT_GAMEFLOWMANAGER_GETORTRYENTERGAMEFLOW_OFFSET UNITYSDK_OFFSET(0xBAB82B0)
#define RPG_CLIENT_GAMEFLOWMANAGER_GET_CURRENTGAMEFLOWTYPE_OFFSET UNITYSDK_OFFSET(0xBAB8010)
#define RPG_CLIENT_GAMEFLOWMANAGER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBAB8070)
#define RPG_CLIENT_GAMEFLOWMANAGER_GOTO_OFFSET UNITYSDK_OFFSET(0xBAB7E80)
#define RPG_CLIENT_GAMEFLOWMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xBAB8090)
#define RPG_CLIENT_GAMEFLOWMANAGER_ONNETWORKRECONNECTED_OFFSET UNITYSDK_OFFSET(0xBAB8720)
#define RPG_CLIENT_GAMEFLOWMANAGER_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBAB8080)
#define RPG_CLIENT_GAMEFLOWMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xBAB8A10)
#define RPG_CLIENT_GAMEFLOWMANAGER__EXITCURRENTFLOW_OFFSET UNITYSDK_OFFSET(0xBAB8670)
#define RPG_CLIENT_GAMEFLOWMANAGER__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xBAB8800)
#define RPG_CLIENT_GAMEFLOWMANAGER__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xBAB8930)
#define RPG_CLIENT_GAMEFLOWMANAGER__ONMAPCREATESTARTED_OFFSET UNITYSDK_OFFSET(0xBAB89A0)
#define RPG_CLIENT_GAMEFLOWMANAGER__ONRECOVERGAMEFLOW_OFFSET UNITYSDK_OFFSET(0xBAB8870)

namespace RPG::Client
{
	inline static constexpr unsigned int GameFlowManager_TypeDefinitionIndex = 60124;

	class GameFlowManager : public ::System::Object
	{
	public:
		::RPG::Client::BaseGameFlow* _Current_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GameFlowType get_CurrentGameFlowType()
		{
			return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_GET_CURRENTGAMEFLOWTYPE_OFFSET))(this);
		}

		::RPG::Client::BaseGameFlow* get_Current()
		{
			return ((::RPG::Client::BaseGameFlow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_GET_CURRENT_OFFSET))(this);
		}

		::System::Void set_Current(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_SET_CURRENT_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_INIT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseGameFlow*>* EnterGameFlow(::RPG::GameCore::GameFlowType a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseGameFlow*>*(*)(::PVOID, ::RPG::GameCore::GameFlowType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_ENTERGAMEFLOW_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseGameFlow*>* GetOrTryEnterGameFlow(::RPG::GameCore::GameFlowType a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseGameFlow*>*(*)(::PVOID, ::RPG::GameCore::GameFlowType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_GETORTRYENTERGAMEFLOW_OFFSET))(this, a1, a2);
		}

		::RPG::Client::BaseGameFlow* GetGameFlowByType(::RPG::GameCore::GameFlowType a1)
		{
			return ((::RPG::Client::BaseGameFlow*(*)(::PVOID, ::RPG::GameCore::GameFlowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_GETGAMEFLOWBYTYPE_OFFSET))(this, a1);
		}

		::System::Void ExitGameFlow(::RPG::GameCore::GameFlowType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameFlowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_EXITGAMEFLOW_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Attach(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_ATTACH_OFFSET))(this, a1);
		}

		::System::Void Detach(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_DETACH_OFFSET))(this, a1);
		}

		::System::Void OnNetworkReconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_ONNETWORKRECONNECTED_OFFSET))(this);
		}

		::System::Void AutoShowAdventureUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_AUTOSHOWADVENTUREUI_OFFSET))(this);
		}

		::System::Void Goto(::Class_1_B823313B2CC4BC8E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B823313B2CC4BC8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_GOTO_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnRecoverGameFlow(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER__ONRECOVERGAMEFLOW_OFFSET))(this, a1);
		}

		::System::Void _OnHideLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _OnMapCreateStarted(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER__ONMAPCREATESTARTED_OFFSET))(this, a1);
		}

		::System::Void _ExitCurrentFlow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER__EXITCURRENTFLOW_OFFSET))(this);
		}
	};
}
