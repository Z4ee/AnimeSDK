#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveModifierBuilder_1.h"

namespace RPG::AvatarSystem::Property { template <typename T> class PropertyModifierBuilder_1; }
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarInfo; }

#define CLASS_2_91002003758564E1_BUILD_OFFSET UNITYSDK_OFFSET(0x18F3D100)
#define CLASS_2_91002003758564E1__CTOR_OFFSET UNITYSDK_OFFSET(0x18F3D0E0)

inline static constexpr unsigned int Class_2_91002003758564E1_TypeDefinitionIndex = 74834;

class Class_2_91002003758564E1 : public ::RPG::Client::ActivityIdleLive::IdleLiveModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* CIPONGCFEJP; // 0x10

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo*))((::PBYTE)hIl2Cpp + CLASS_2_91002003758564E1__CTOR_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Build(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
	{
		return ((::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_91002003758564E1_BUILD_OFFSET))(this, a1);
	}
};
