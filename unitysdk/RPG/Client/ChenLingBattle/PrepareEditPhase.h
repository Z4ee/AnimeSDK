#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_F65FD1783A40C6D8;
class Class_1_FA4F4A67B1C04320_154;
class Class_1_FA4F4A67B1C04320_155;
class Class_1_FA4F4A67B1C04320_157;
class Class_1_FA4F4A67B1C04320_158;
namespace RPG::Client::ChenLingBattle { class Grid; }
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_ASKWAITINGPROMISE_OFFSET UNITYSDK_OFFSET(0x933BF60)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_GET_WAITENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x933C110)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x933A690)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x933A7B0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTFINISHPREPARE_OFFSET UNITYSDK_OFFSET(0x933B400)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTMOVEENTITY_OFFSET UNITYSDK_OFFSET(0x933BAC0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTSELLHANDCARD_OFFSET UNITYSDK_OFFSET(0x933AF80)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTUSEHANDCARD_OFFSET UNITYSDK_OFFSET(0x933A840)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_RESOLVEPROMISE_OFFSET UNITYSDK_OFFSET(0x933C0A0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_SET_WAITENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x933C120)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x933A650)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__NOTIFYTUTORIALUSEHANDCARDSUCCESS_OFFSET UNITYSDK_OFFSET(0x933AD90)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGFINISHPREPARESCRSP_OFFSET UNITYSDK_OFFSET(0x933B840)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGMOVEENTITYSCRSP_OFFSET UNITYSDK_OFFSET(0x933BCE0)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x933B170)
#define RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGUSEHANDCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x933AB10)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int PrepareEditPhase_TypeDefinitionIndex = 62066;

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

		::RPG::Client::Promises::IPromise* _OnChenLingUseHandCardScRsp(::Class_1_FA4F4A67B1C04320_154* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_154*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGUSEHANDCARDSCRSP_OFFSET))(this, rsp);
		}

		::System::Void _NotifyTutorialUseHandCardSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__NOTIFYTUTORIALUSEHANDCARDSUCCESS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RequestSellHandCard(::RPG::Client::ChenLingBattle::HandCard* handCard)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTSELLHANDCARD_OFFSET))(this, handCard);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSellHandCardScRsp(::Class_1_FA4F4A67B1C04320_157* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_157*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* RequestFinishPrepare()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTFINISHPREPARE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingFinishPrepareScRsp(::Class_1_FA4F4A67B1C04320_158* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_158*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGFINISHPREPARESCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* RequestMoveEntity(::System::UInt32 cardUniqueID, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE_REQUESTMOVEENTITY_OFFSET))(this, cardUniqueID, x, y);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingMoveEntityScRsp(::Class_1_FA4F4A67B1C04320_155* rsp)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_155*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_PREPAREEDITPHASE__ONCHENLINGMOVEENTITYSCRSP_OFFSET))(this, rsp);
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
