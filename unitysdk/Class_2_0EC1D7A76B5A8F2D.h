#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6990FC326F6BA919.h"

namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarPromotionPropertyData; }

#define CLASS_2_0EC1D7A76B5A8F2D_METHOD_2_F36BA6E976CB3B53_OFFSET UNITYSDK_OFFSET(0xB4F2E60)
#define CLASS_2_0EC1D7A76B5A8F2D__CTOR_OFFSET UNITYSDK_OFFSET(0xB4F2E50)

inline static constexpr unsigned int Class_2_0EC1D7A76B5A8F2D_TypeDefinitionIndex = 74815;

class Class_2_0EC1D7A76B5A8F2D : public ::Class_1_6990FC326F6BA919
{
public:
	::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData*))((::PBYTE)hIl2Cpp + CLASS_2_0EC1D7A76B5A8F2D__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F36BA6E976CB3B53(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_0EC1D7A76B5A8F2D_METHOD_2_F36BA6E976CB3B53_OFFSET))(this, a1);
	}
};
