#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem::Property { template <typename T> class PropertyModifierBuilder_1; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamAvatarData; }
namespace RPG::Client::ActivityIdleLive { template <typename T> class IdleLiveModifierBuilder_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B91A7D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS41_0___BUILDMODIFIERBUILDERS_B__0_OFFSET UNITYSDK_OFFSET(0x1B91B860)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTeamInfo___c__DisplayClass41_0_TypeDefinitionIndex = 74799;

	class IdleLiveBaseTeamInfo___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveTeamAvatarData* data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* __BuildModifierBuilders_b__0(::RPG::Client::ActivityIdleLive::IdleLiveModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* a1)
		{
			return ((::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBASETEAMINFO___C__DISPLAYCLASS41_0___BUILDMODIFIERBUILDERS_B__0_OFFSET))(this, a1);
		}
	};
}
