#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_CE84D8E232AFC277;
class Class_1_D17272E82AE804C2_192;
class Class_1_D17272E82AE804C2_193;
class Class_1_D17272E82AE804C2_195;
class Class_1_D17272E82AE804C2_196;
namespace RPG::Client::ChenLingBattle { class Grid; }
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_ASKWAITINGPROMISE_OFFSET UNITYSDK_OFFSET(0x1CC2A5B0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_GET_WAITENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1CC2A7D0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1CC28A40)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x1CC28B60)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTFINISHPREPARE_OFFSET UNITYSDK_OFFSET(0x1CC298B0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTMOVEENTITY_OFFSET UNITYSDK_OFFSET(0x1CC2A0D0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTSELLHANDCARD_OFFSET UNITYSDK_OFFSET(0x1CC293F0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTUSEHANDCARD_OFFSET UNITYSDK_OFFSET(0x1CC28BF0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_RESOLVEPROMISE_OFFSET UNITYSDK_OFFSET(0x1CC2A760)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_SET_WAITENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x1CC2A7E0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC28A00)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__NOTIFYTUTORIALUSEHANDCARDSUCCESS_OFFSET UNITYSDK_OFFSET(0x1CC291F0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGFINISHPREPARESCRSP_OFFSET UNITYSDK_OFFSET(0x1CC29E50)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGMOVEENTITYSCRSP_OFFSET UNITYSDK_OFFSET(0x1CC2A330)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1CC29620)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGUSEHANDCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1CC28F70)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int PrepareEditPhase_TypeDefinitionIndex = 75826;

	class PrepareEditPhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::Promises::Promise* _ExecutingPromise; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::Promises::Promise*>* _WaitingPromises; // 0x20
		::System::Boolean _WaitEnterBattle_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_CE84D8E232AFC277* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CE84D8E232AFC277*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_ONENTER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_ONLEAVE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RequestUseHandCard(::RPG::Client::ChenLingBattle::HandCard* a1, ::RPG::Client::ChenLingBattle::Grid* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*, ::RPG::Client::ChenLingBattle::Grid*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTUSEHANDCARD_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingUseHandCardScRsp(::Class_1_D17272E82AE804C2_192* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_192*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGUSEHANDCARDSCRSP_OFFSET))(this, a1);
		}

		::System::Void _NotifyTutorialUseHandCardSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__NOTIFYTUTORIALUSEHANDCARDSUCCESS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RequestSellHandCard(::RPG::Client::ChenLingBattle::HandCard* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTSELLHANDCARD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSellHandCardScRsp(::Class_1_D17272E82AE804C2_195* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_195*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RequestFinishPrepare()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTFINISHPREPARE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingFinishPrepareScRsp(::Class_1_D17272E82AE804C2_196* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_196*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGFINISHPREPARESCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RequestMoveEntity(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTMOVEENTITY_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingMoveEntityScRsp(::Class_1_D17272E82AE804C2_193* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_193*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGMOVEENTITYSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* AskWaitingPromise()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_ASKWAITINGPROMISE_OFFSET))(this);
		}

		::System::Void ResolvePromise(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_RESOLVEPROMISE_OFFSET))(this, a1);
		}

		::System::Boolean get_WaitEnterBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_GET_WAITENTERBATTLE_OFFSET))(this);
		}

		::System::Void set_WaitEnterBattle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_SET_WAITENTERBATTLE_OFFSET))(this, a1);
		}
	};
}
