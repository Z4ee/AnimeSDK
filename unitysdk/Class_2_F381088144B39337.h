#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveModifierBuilder_1.h"

namespace RPG::AvatarSystem::Property { template <typename T> class PropertyModifierBuilder_1; }
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotInfo; }

#define CLASS_2_F381088144B39337_BUILD_OFFSET UNITYSDK_OFFSET(0xD230C50)
#define CLASS_2_F381088144B39337__CTOR_OFFSET UNITYSDK_OFFSET(0xD230C30)

inline static constexpr unsigned int Class_2_F381088144B39337_TypeDefinitionIndex = 74834;

class Class_2_F381088144B39337 : public ::RPG::Client::ActivityIdleLive::IdleLiveModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* GLCFFOIDEMA; // 0x10
	::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* KIHNNLDEOOM; // 0x18

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* a1, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_2_F381088144B39337__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Build(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
	{
		return ((::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_F381088144B39337_BUILD_OFFSET))(this, a1);
	}
};
