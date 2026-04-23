#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeNode; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9BD6200)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__DISPLAYCLASS17_0__GETPOWERFACTOR_B__0_OFFSET UNITYSDK_OFFSET(0x9BD6530)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTechTreeInfo___c__DisplayClass17_0_TypeDefinitionIndex = 69465;

	class IdleLiveTechTreeInfo___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::ILBattleAvatarTag>* captainTags; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetPowerFactor_b__0(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETECHTREEINFO___C__DISPLAYCLASS17_0__GETPOWERFACTOR_B__0_OFFSET))(this, x);
		}
	};
}
