#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarPromotionPropertyData; }

#define CLASS_1_6990FC326F6BA919_METHOD_1_CEBC0B61DB849DAE_OFFSET UNITYSDK_OFFSET(0xAC1E110)
#define CLASS_1_6990FC326F6BA919__CTOR_OFFSET UNITYSDK_OFFSET(0xAC1E1B0)

inline static constexpr unsigned int Class_1_6990FC326F6BA919_TypeDefinitionIndex = 69983;

class Class_1_6990FC326F6BA919 : public ::System::Object
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData*))((::PBYTE)hIl2Cpp + CLASS_1_6990FC326F6BA919__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_6990FC326F6BA919* Method_1_CEBC0B61DB849DAE(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData* a1)
	{
		return ((::Class_1_6990FC326F6BA919*(*)(::RPG::Client::ActivityIdleLive::IdleLiveAvatarPromotionPropertyData*))((::PBYTE)hIl2Cpp + CLASS_1_6990FC326F6BA919_METHOD_1_CEBC0B61DB849DAE_OFFSET))(a1);
	}
};
