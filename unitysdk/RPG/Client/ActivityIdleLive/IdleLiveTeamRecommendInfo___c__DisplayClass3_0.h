#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarTagConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC5EB8F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS3_0___HASMATCHEDTAGONCAPTAIN_B__0_OFFSET UNITYSDK_OFFSET(0xC5EBBE0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamRecommendInfo___c__DisplayClass3_0_TypeDefinitionIndex = 74788;

	class IdleLiveTeamRecommendInfo___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ILBattleAvatarTag>* tagList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __HasMatchedTagOnCaptain_b__0(::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarTagConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS3_0___HASMATCHEDTAGONCAPTAIN_B__0_OFFSET))(this, a1);
		}
	};
}
