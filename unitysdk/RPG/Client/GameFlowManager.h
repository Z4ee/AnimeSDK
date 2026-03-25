#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
#include "unitysdk/System/Object.h"

class Class_1_B823313B2CC4BC8E;
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GAMEFLOWMANAGER_ATTACH_OFFSET UNITYSDK_OFFSET(0x975BAB0)
#define RPG_CLIENT_GAMEFLOWMANAGER_AUTOSHOWADVENTUREUI_OFFSET UNITYSDK_OFFSET(0x975BC80)
#define RPG_CLIENT_GAMEFLOWMANAGER_DETACH_OFFSET UNITYSDK_OFFSET(0x975BB90)
#define RPG_CLIENT_GAMEFLOWMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x975BA30)
#define RPG_CLIENT_GAMEFLOWMANAGER_ENTERGAMEFLOW_OFFSET UNITYSDK_OFFSET(0x975B2D0)
#define RPG_CLIENT_GAMEFLOWMANAGER_EXITGAMEFLOW_OFFSET UNITYSDK_OFFSET(0x975B6E0)
#define RPG_CLIENT_GAMEFLOWMANAGER_GETGAMEFLOWBYTYPE_OFFSET UNITYSDK_OFFSET(0x975B9C0)
#define RPG_CLIENT_GAMEFLOWMANAGER_GETORTRYENTERGAMEFLOW_OFFSET UNITYSDK_OFFSET(0x975B790)
#define RPG_CLIENT_GAMEFLOWMANAGER_GET_CURRENTGAMEFLOWTYPE_OFFSET UNITYSDK_OFFSET(0x975ABD0)
#define RPG_CLIENT_GAMEFLOWMANAGER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x975B5A0)
#define RPG_CLIENT_GAMEFLOWMANAGER_GOTO_OFFSET UNITYSDK_OFFSET(0x975B200)
#define RPG_CLIENT_GAMEFLOWMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x975B5C0)
#define RPG_CLIENT_GAMEFLOWMANAGER_ONNETWORKRECONNECTED_OFFSET UNITYSDK_OFFSET(0x975BBF0)
#define RPG_CLIENT_GAMEFLOWMANAGER_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x975B5B0)
#define RPG_CLIENT_GAMEFLOWMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x975BEF0)
#define RPG_CLIENT_GAMEFLOWMANAGER__EXITCURRENTFLOW_OFFSET UNITYSDK_OFFSET(0x975BB40)
#define RPG_CLIENT_GAMEFLOWMANAGER__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x975BCF0)
#define RPG_CLIENT_GAMEFLOWMANAGER__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x975BE10)
#define RPG_CLIENT_GAMEFLOWMANAGER__ONMAPCREATESTARTED_OFFSET UNITYSDK_OFFSET(0x975BE80)
#define RPG_CLIENT_GAMEFLOWMANAGER__ONRECOVERGAMEFLOW_OFFSET UNITYSDK_OFFSET(0x975BD60)

namespace RPG::Client
{
	inline static constexpr unsigned int GameFlowManager_TypeDefinitionIndex = 52237;

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

		::System::Void set_Current(::RPG::Client::BaseGameFlow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_SET_CURRENT_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_INIT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseGameFlow*>* EnterGameFlow(::RPG::GameCore::GameFlowType type, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters, ::System::Boolean isForce)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseGameFlow*>*(*)(::PVOID, ::RPG::GameCore::GameFlowType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_ENTERGAMEFLOW_OFFSET))(this, type, parameters, isForce);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseGameFlow*>* GetOrTryEnterGameFlow(::RPG::GameCore::GameFlowType type, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseGameFlow*>*(*)(::PVOID, ::RPG::GameCore::GameFlowType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_GETORTRYENTERGAMEFLOW_OFFSET))(this, type, parameters);
		}

		::RPG::Client::BaseGameFlow* GetGameFlowByType(::RPG::GameCore::GameFlowType type)
		{
			return ((::RPG::Client::BaseGameFlow*(*)(::PVOID, ::RPG::GameCore::GameFlowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_GETGAMEFLOWBYTYPE_OFFSET))(this, type);
		}

		::System::Void ExitGameFlow(::RPG::GameCore::GameFlowType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameFlowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_EXITGAMEFLOW_OFFSET))(this, type);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Attach(::RPG::Client::BaseGameFlow* gameFlow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_ATTACH_OFFSET))(this, gameFlow);
		}

		::System::Void Detach(::RPG::Client::BaseGameFlow* gameFlow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_DETACH_OFFSET))(this, gameFlow);
		}

		::System::Void OnNetworkReconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_ONNETWORKRECONNECTED_OFFSET))(this);
		}

		::System::Void AutoShowAdventureUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_AUTOSHOWADVENTUREUI_OFFSET))(this);
		}

		::System::Void Goto(::Class_1_B823313B2CC4BC8E* gotoParams)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B823313B2CC4BC8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER_GOTO_OFFSET))(this, gotoParams);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER__ONADVENTUREPHASEENTERED_OFFSET))(this, obj);
		}

		::System::Void _OnRecoverGameFlow(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER__ONRECOVERGAMEFLOW_OFFSET))(this, obj);
		}

		::System::Void _OnHideLoadingPage(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER__ONHIDELOADINGPAGE_OFFSET))(this, obj);
		}

		::System::Void _OnMapCreateStarted(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER__ONMAPCREATESTARTED_OFFSET))(this, obj);
		}

		::System::Void _ExitCurrentFlow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEFLOWMANAGER__EXITCURRENTFLOW_OFFSET))(this);
		}
	};
}
