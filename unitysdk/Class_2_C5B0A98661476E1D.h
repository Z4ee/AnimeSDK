#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveModifierBuilder_1.h"

namespace RPG::AvatarSystem::Property { template <typename T> class PropertyModifierBuilder_1; }
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTechTreeInfo; }

#define CLASS_2_C5B0A98661476E1D_BUILD_OFFSET UNITYSDK_OFFSET(0x1858D960)
#define CLASS_2_C5B0A98661476E1D__CTOR_OFFSET UNITYSDK_OFFSET(0x1858D940)

inline static constexpr unsigned int Class_2_C5B0A98661476E1D_TypeDefinitionIndex = 71525;

class Class_2_C5B0A98661476E1D : public ::RPG::Client::ActivityIdleLive::IdleLiveModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveTechTreeInfo* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveTechTreeInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTechTreeInfo*))((::PBYTE)hIl2Cpp + CLASS_2_C5B0A98661476E1D__CTOR_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Build(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
	{
		return ((::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_C5B0A98661476E1D_BUILD_OFFSET))(this, a1);
	}
};
