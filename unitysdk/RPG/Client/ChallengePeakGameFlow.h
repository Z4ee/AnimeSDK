#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlow.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"

class Class_1_12D7DC1DF441FB7B;
class Class_1_BA520BA0030C648C;
namespace RPG::Client { class BaseGameFlowContext; }
namespace RPG::Client { class ChallengePeakBGMUIState; }
namespace RPG::Client { class ChallengePeakGameContext; }
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class ChallengePeakTeamContext; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0x92E3910)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_CREATE_OFFSET UNITYSDK_OFFSET(0x92E2C30)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GETORCREATEGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x92E3070)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_BGMUISTATE_OFFSET UNITYSDK_OFFSET(0x92E2B90)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x92E2B70)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_HASSHOWNSHOPGOODSHINT_OFFSET UNITYSDK_OFFSET(0x92E2C10)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_ISGAMING_OFFSET UNITYSDK_OFFSET(0x92E2BB0)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_PEAKGROUP_OFFSET UNITYSDK_OFFSET(0x92E2B50)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_TEAMCONTEXT_OFFSET UNITYSDK_OFFSET(0x92E2B60)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x92E2B40)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_ONENTERED_OFFSET UNITYSDK_OFFSET(0x92E3960)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_ONINITED_OFFSET UNITYSDK_OFFSET(0x92E3140)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_RECOVER_OFFSET UNITYSDK_OFFSET(0x92E2F90)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_SET_BGMUISTATE_OFFSET UNITYSDK_OFFSET(0x92E2BA0)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_SET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x92E2B80)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_SET_HASSHOWNSHOPGOODSHINT_OFFSET UNITYSDK_OFFSET(0x92E2C20)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x92E2CB0)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW__ONCHALLENGEPEAKGROUPDATACHANGED_OFFSET UNITYSDK_OFFSET(0x92E3AC0)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW__ONCONTEXTATTACHED_OFFSET UNITYSDK_OFFSET(0x92E39B0)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x92E3A60)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW___IFIXBASEPROXY_CHECKCANENTER_OFFSET UNITYSDK_OFFSET(0x92E3C30)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW___IFIXBASEPROXY_ONENTERED_OFFSET UNITYSDK_OFFSET(0x92E3CA0)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW___IFIXBASEPROXY_ONINITED_OFFSET UNITYSDK_OFFSET(0x92E3BD0)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW___IFIXBASEPROXY__ONCONTEXTATTACHED_OFFSET UNITYSDK_OFFSET(0x92E3D40)
#define RPG_CLIENT_CHALLENGEPEAKGAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET UNITYSDK_OFFSET(0x92E3DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakGameFlow_TypeDefinitionIndex = 51263;

	class ChallengePeakGameFlow : public ::RPG::Client::BaseGameFlow
	{
	public:
		::RPG::Client::ChallengePeakGroup* _PeakGroup_k__BackingField; // 0x40
		::RPG::Client::ChallengePeakBGMUIState* _BGMUIState_k__BackingField; // 0x48
		::Class_1_12D7DC1DF441FB7B* _Director; // 0x50
		::RPG::Client::ChallengePeakTeamContext* _TeamContext_k__BackingField; // 0x58
		::RPG::Client::ChallengePeakGameContext* _GameContext_k__BackingField; // 0x60
		::System::Boolean _HasShownShopGoodsHint_k__BackingField; // 0x68

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW__CTOR_OFFSET))(this, parameters);
		}

		::RPG::GameCore::GameFlowType get_Type()
		{
			return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakGroup* get_PeakGroup()
		{
			return ((::RPG::Client::ChallengePeakGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_PEAKGROUP_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakTeamContext* get_TeamContext()
		{
			return ((::RPG::Client::ChallengePeakTeamContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_TEAMCONTEXT_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakGameContext* get_GameContext()
		{
			return ((::RPG::Client::ChallengePeakGameContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_GAMECONTEXT_OFFSET))(this);
		}

		::System::Void set_GameContext(::RPG::Client::ChallengePeakGameContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGameContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_SET_GAMECONTEXT_OFFSET))(this, value);
		}

		::RPG::Client::ChallengePeakBGMUIState* get_BGMUIState()
		{
			return ((::RPG::Client::ChallengePeakBGMUIState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_BGMUISTATE_OFFSET))(this);
		}

		::System::Void set_BGMUIState(::RPG::Client::ChallengePeakBGMUIState* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBGMUIState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_SET_BGMUISTATE_OFFSET))(this, value);
		}

		::System::Boolean get_IsGaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_ISGAMING_OFFSET))(this);
		}

		::System::Boolean get_HasShownShopGoodsHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GET_HASSHOWNSHOPGOODSHINT_OFFSET))(this);
		}

		::System::Void set_HasShownShopGoodsHint(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_SET_HASSHOWNSHOPGOODSHINT_OFFSET))(this, value);
		}

		static ::RPG::Client::ChallengePeakGameFlow* Create(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* parameters)
		{
			return ((::RPG::Client::ChallengePeakGameFlow*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_CREATE_OFFSET))(parameters);
		}

		::System::Void Recover(::Class_1_BA520BA0030C648C* snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BA520BA0030C648C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_RECOVER_OFFSET))(this, snapshot);
		}

		::RPG::Client::ChallengePeakGameContext* GetOrCreateGameContext()
		{
			return ((::RPG::Client::ChallengePeakGameContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_GETORCREATEGAMECONTEXT_OFFSET))(this);
		}

		::System::Void OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_ONINITED_OFFSET))(this);
		}

		::System::Boolean CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_CHECKCANENTER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW_ONENTERED_OFFSET))(this);
		}

		::System::Void _OnContextAttached(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW__ONCONTEXTATTACHED_OFFSET))(this, context);
		}

		::System::Void _OnContextDetached(::RPG::Client::BaseGameFlowContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW__ONCONTEXTDETACHED_OFFSET))(this, context);
		}

		::System::Void _OnChallengePeakGroupDataChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW__ONCHALLENGEPEAKGROUPDATACHANGED_OFFSET))(this, arg);
		}

		::System::Void __iFixBaseProxy_OnInited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW___IFIXBASEPROXY_ONINITED_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_CheckCanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW___IFIXBASEPROXY_CHECKCANENTER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __iFixBaseProxy_OnEntered()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW___IFIXBASEPROXY_ONENTERED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnContextAttached(::RPG::Client::BaseGameFlowContext* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW___IFIXBASEPROXY__ONCONTEXTATTACHED_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__OnContextDetached(::RPG::Client::BaseGameFlowContext* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlowContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKGAMEFLOW___IFIXBASEPROXY__ONCONTEXTDETACHED_OFFSET))(this, P0);
		}
	};
}
