#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_3AD2528CD53B1639_4;
class Class_1_829D266DDB3E979B;
class Class_1_F65FD1783A40C6D8;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x9F8AB90)
#define RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0x9F8B710)
#define RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_SETTLE_OFFSET UNITYSDK_OFFSET(0x9F8B380)
#define RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F8AB80)
#define RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE__HANDLEFINISHBATTLESCRSP_OFFSET UNITYSDK_OFFSET(0x9F8B550)
#define RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE__ONTRANSITIONPAGEENTER_OFFSET UNITYSDK_OFFSET(0x9F8B1F0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int BattlePhase_TypeDefinitionIndex = 70050;

	class BattlePhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::Promises::Promise* _TransitionPromise; // 0x18

		::System::Void _ctor(::Class_1_F65FD1783A40C6D8* phaseManager)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F65FD1783A40C6D8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE__CTOR_OFFSET))(this, phaseManager);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* param)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_ONENTER_OFFSET))(this, param);
		}

		::System::Void _OnTransitionPageEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE__ONTRANSITIONPAGEENTER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* Settle(::Class_1_829D266DDB3E979B* info)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_829D266DDB3E979B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_SETTLE_OFFSET))(this, info);
		}

		::System::Void _HandleFinishBattleScRsp(::Class_1_3AD2528CD53B1639_4* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE__HANDLEFINISHBATTLESCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_ONLEAVE_OFFSET))(this);
		}
	};
}
