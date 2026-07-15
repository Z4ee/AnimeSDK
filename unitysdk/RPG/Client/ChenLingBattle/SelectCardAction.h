#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/PendingAction.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_D17272E82AE804C2_200;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }
namespace RPG::Client::ChenLingBattle { class SelectCardActionInfo; }
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AFDC9F0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_ONENTER_OFFSET UNITYSDK_OFFSET(0x1AFDC530)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_SELECTCARD_OFFSET UNITYSDK_OFFSET(0x1AFDCAE0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFDC520)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION__ONCHENLINGPENDINGACTIONSELECTCARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1AFDCD40)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectCardAction_TypeDefinitionIndex = 72371;

	class SelectCardAction : public ::RPG::Client::ChenLingBattle::PendingAction
	{
	public:
		::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::RPG::Client::ChenLingBattle::SelectCardActionInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::RPG::Client::ChenLingBattle::SelectCardActionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_ONENTER_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* SelectCard(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION_SELECTCARD_OFFSET))(this, a1);
		}

		::System::Void _OnChenLingPendingActionSelectCardScRsp(::Class_1_D17272E82AE804C2_200* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_200*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDACTION__ONCHENLINGPENDINGACTIONSELECTCARDSCRSP_OFFSET))(this, a1);
		}
	};
}
