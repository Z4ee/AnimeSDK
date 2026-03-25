#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/PendingAction.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_FA4F4A67B1C04320_172;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }
namespace RPG::Client::ChenLingBattle { class SelectCardActionInfo; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x933D810)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_ONENTER_OFFSET UNITYSDK_OFFSET(0x933D340)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_SELECTCARD_OFFSET UNITYSDK_OFFSET(0x933D900)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x933D330)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION__ONCHENLINGPENDINGACTIONSELECTCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x933DAF0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x933DD20)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION___IFIXBASEPROXY_ONENTER_OFFSET UNITYSDK_OFFSET(0x933DCA0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectCardAction_TypeDefinitionIndex = 62047;

	class SelectCardAction : public ::RPG::Client::ChenLingBattle::PendingAction
	{
	public:
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* gameContext, ::RPG::Client::ChenLingBattle::SelectCardActionInfo* actionInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::RPG::Client::ChenLingBattle::SelectCardActionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION__CTOR_OFFSET))(this, gameContext, actionInfo);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Nullable_1<::System::Int32> defaultSelectedIndex)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_ONENTER_OFFSET))(this, defaultSelectedIndex);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* SelectCard(::System::UInt32 index)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_SELECTCARD_OFFSET))(this, index);
		}

		::System::Void _OnChenLingPendingActionSelectCardScRsp(::Class_1_FA4F4A67B1C04320_172* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_172*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION__ONCHENLINGPENDINGACTIONSELECTCARDSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise* __iFixBaseProxy_OnEnter(::System::Nullable_1<::System::Int32> P0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION___IFIXBASEPROXY_ONENTER_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
