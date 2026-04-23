#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6990FC326F6BA919.h"

namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarPromotionPropertyData; }

#define CLASS_2_47157C95E3A6FE58_METHOD_2_77FD92418D71F44A_OFFSET UNITYSDK_OFFSET(0xA52D320)
#define CLASS_2_47157C95E3A6FE58__CTOR_OFFSET UNITYSDK_OFFSET(0xA52D310)

inline static constexpr unsigned int Class_2_47157C95E3A6FE58_TypeDefinitionIndex = 69173;

class Class_2_47157C95E3A6FE58 : public ::Class_1_6990FC326F6BA919
{
public:
	::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData*))((::PBYTE)hIl2Cpp + CLASS_2_47157C95E3A6FE58__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_77FD92418D71F44A(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_47157C95E3A6FE58_METHOD_2_77FD92418D71F44A_OFFSET))(this, a1);
	}
};
