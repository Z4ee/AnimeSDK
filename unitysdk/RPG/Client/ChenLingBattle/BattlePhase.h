#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"

class Class_1_3AD2528CD53B1639_4;
class Class_1_B77B453EF78ADA0C;
class Class_1_CE84D8E232AFC277;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0xB5A4CB0)
#define RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0xB5A5D30)
#define RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_SETTLE_OFFSET UNITYSDK_OFFSET(0xB5A5990)
#define RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB5A4CA0)
#define RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE__HANDLEFINISHBATTLESCRSP_OFFSET UNITYSDK_OFFSET(0xB5A5B80)
#define RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE__ONTRANSITIONPAGEENTER_OFFSET UNITYSDK_OFFSET(0xB5A5700)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int BattlePhase_TypeDefinitionIndex = 70862;

	class BattlePhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::Promises::Promise* _TransitionPromise; // 0x18

		::System::Void _ctor(::Class_1_CE84D8E232AFC277* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CE84D8E232AFC277*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_ONENTER_OFFSET))(this, a1);
		}

		::System::Void _OnTransitionPageEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE__ONTRANSITIONPAGEENTER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* Settle(::Class_1_B77B453EF78ADA0C* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_B77B453EF78ADA0C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_SETTLE_OFFSET))(this, a1);
		}

		::System::Void _HandleFinishBattleScRsp(::Class_1_3AD2528CD53B1639_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE__HANDLEFINISHBATTLESCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_BATTLEPHASE_ONLEAVE_OFFSET))(this);
		}
	};
}
