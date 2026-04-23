#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/Property/PropertyModifierBuilder_1.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"

namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotInfo; }

#define CLASS_2_7A8F7ACF0C7369F4_METHOD_2_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0xAA869C0)
#define CLASS_2_7A8F7ACF0C7369F4__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0xAA86A10)
#define CLASS_2_7A8F7ACF0C7369F4__CTOR_OFFSET UNITYSDK_OFFSET(0xAA86260)
#define CLASS_2_7A8F7ACF0C7369F4__REBUILD_OFFSET UNITYSDK_OFFSET(0xAA86300)

inline static constexpr unsigned int Class_2_7A8F7ACF0C7369F4_TypeDefinitionIndex = 69188;

class Class_2_7A8F7ACF0C7369F4 : public ::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>
{
public:
	::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* Field_2_1; // 0x20
	::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* Field_2_2; // 0x28
	::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* Field_2_0; // 0x30
	::System::UInt32 Field_2_3; // 0x38

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* a2, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*, ::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + CLASS_2_7A8F7ACF0C7369F4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _Rebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A8F7ACF0C7369F4__REBUILD_OFFSET))(this);
	}

	::System::Void Method_2_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A8F7ACF0C7369F4_METHOD_2_FBF2CB29FD3B55E6_OFFSET))(this);
	}

	::System::Boolean _CheckNeedRebuild()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A8F7ACF0C7369F4__CHECKNEEDREBUILD_OFFSET))(this);
	}
};
