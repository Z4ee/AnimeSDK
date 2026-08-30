#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6990FC326F6BA919.h"

namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarPromotionPropertyData; }

#define CLASS_2_EC098AF914329D37_1_METHOD_2_7CC029567F2AE723_OFFSET UNITYSDK_OFFSET(0xBEA0B40)
#define CLASS_2_EC098AF914329D37_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBEA0B30)

inline static constexpr unsigned int Class_2_EC098AF914329D37_1_TypeDefinitionIndex = 74816;

class Class_2_EC098AF914329D37_1 : public ::Class_1_6990FC326F6BA919
{
public:
	::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData*))((::PBYTE)hIl2Cpp + CLASS_2_EC098AF914329D37_1__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7CC029567F2AE723(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_EC098AF914329D37_1_METHOD_2_7CC029567F2AE723_OFFSET))(this, a1);
	}
};
