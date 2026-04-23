#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_D17272E82AE804C2_161;
class Class_1_D17272E82AE804C2_162;
class Class_1_D17272E82AE804C2_164;
class Class_1_D17272E82AE804C2_165;
class Class_1_F65FD1783A40C6D8;
namespace RPG::Client::ChenLingBattle { class Grid; }
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_ASKWAITINGPROMISE_OFFSET UNITYSDK_OFFSET(0x9FA9AC0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_GET_WAITENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x9FA9C70)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x9FA81F0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x9FA8310)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTFINISHPREPARE_OFFSET UNITYSDK_OFFSET(0x9FA8F60)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTMOVEENTITY_OFFSET UNITYSDK_OFFSET(0x9FA9620)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTSELLHANDCARD_OFFSET UNITYSDK_OFFSET(0x9FA8AE0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTUSEHANDCARD_OFFSET UNITYSDK_OFFSET(0x9FA83A0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_RESOLVEPROMISE_OFFSET UNITYSDK_OFFSET(0x9FA9C00)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_SET_WAITENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x9FA9C80)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9FA81B0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__NOTIFYTUTORIALUSEHANDCARDSUCCESS_OFFSET UNITYSDK_OFFSET(0x9FA88F0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGFINISHPREPARESCRSP_OFFSET UNITYSDK_OFFSET(0x9FA93A0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGMOVEENTITYSCRSP_OFFSET UNITYSDK_OFFSET(0x9FA9840)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x9FA8CD0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGUSEHANDCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x9FA8670)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int PrepareEditPhase_TypeDefinitionIndex = 70065;

	class PrepareEditPhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Promises::Promise*>* _WaitingPromises; // 0x18
		::RPG::Client::Promises::Promise* _ExecutingPromise; // 0x20
		::System::Boolean _WaitEnterBattle_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_F65FD1783A40C6D8* phaseManager)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F65FD1783A40C6D8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__CTOR_OFFSET))(this, phaseManager);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* param)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_ONENTER_OFFSET))(this, param);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_ONLEAVE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RequestUseHandCard(::RPG::Client::ChenLingBattle::HandCard* handCard, ::RPG::Client::ChenLingBattle::Grid* grid)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*, ::RPG::Client::ChenLingBattle::Grid*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTUSEHANDCARD_OFFSET))(this, handCard, grid);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingUseHandCardScRsp(::Class_1_D17272E82AE804C2_161* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_161*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGUSEHANDCARDSCRSP_OFFSET))(this, rsp);
		}

		::System::Void _NotifyTutorialUseHandCardSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__NOTIFYTUTORIALUSEHANDCARDSUCCESS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RequestSellHandCard(::RPG::Client::ChenLingBattle::HandCard* handCard)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTSELLHANDCARD_OFFSET))(this, handCard);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSellHandCardScRsp(::Class_1_D17272E82AE804C2_164* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_164*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* RequestFinishPrepare()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTFINISHPREPARE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingFinishPrepareScRsp(::Class_1_D17272E82AE804C2_165* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_165*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGFINISHPREPARESCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* RequestMoveEntity(::System::UInt32 cardUniqueID, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTMOVEENTITY_OFFSET))(this, cardUniqueID, x, y);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingMoveEntityScRsp(::Class_1_D17272E82AE804C2_162* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D17272E82AE804C2_162*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGMOVEENTITYSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* AskWaitingPromise()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_ASKWAITINGPROMISE_OFFSET))(this);
		}

		::System::Void ResolvePromise(::RPG::Client::Promises::Promise* promise)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_RESOLVEPROMISE_OFFSET))(this, promise);
		}

		::System::Boolean get_WaitEnterBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_GET_WAITENTERBATTLE_OFFSET))(this);
		}

		::System::Void set_WaitEnterBattle(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_SET_WAITENTERBATTLE_OFFSET))(this, value);
		}
	};
}
