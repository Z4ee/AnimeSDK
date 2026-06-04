#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6990FC326F6BA919.h"

namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarPromotionPropertyData; }

#define CLASS_2_B933654F76575B4D_METHOD_2_2ABC99C0230EA765_OFFSET UNITYSDK_OFFSET(0x144A95A0)
#define CLASS_2_B933654F76575B4D__CTOR_OFFSET UNITYSDK_OFFSET(0x144A9590)

inline static constexpr unsigned int Class_2_B933654F76575B4D_TypeDefinitionIndex = 69985;

class Class_2_B933654F76575B4D : public ::Class_1_6990FC326F6BA919
{
public:
	::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData*))((::PBYTE)hIl2Cpp + CLASS_2_B933654F76575B4D__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2ABC99C0230EA765(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_B933654F76575B4D_METHOD_2_2ABC99C0230EA765_OFFSET))(this, a1);
	}
};
