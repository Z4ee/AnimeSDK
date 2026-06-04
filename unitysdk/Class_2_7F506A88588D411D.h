#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/Property/PropertyModifierBuilder_1.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"

class Class_3_1C169A0F2ACF26E7;
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarInfo; }
namespace System { class Object; }

#define CLASS_2_7F506A88588D411D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B8BCB0)
#define CLASS_2_7F506A88588D411D_METHOD_2_4EC67CD3E2DF87A5_OFFSET UNITYSDK_OFFSET(0x13B8AD90)
#define CLASS_2_7F506A88588D411D__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x13B8BC70)
#define CLASS_2_7F506A88588D411D__CTOR_OFFSET UNITYSDK_OFFSET(0x13B8AC30)
#define CLASS_2_7F506A88588D411D__REBUILD_OFFSET UNITYSDK_OFFSET(0x13B8ADF0)

inline static constexpr unsigned int Class_2_7F506A88588D411D_TypeDefinitionIndex = 69992;

class Class_2_7F506A88588D411D : public ::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* Field_2_0; // 0x20
	::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo*))((::PBYTE)hIl2Cpp + CLASS_2_7F506A88588D411D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4EC67CD3E2DF87A5(::System::Object* a1, ::Class_3_1C169A0F2ACF26E7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_3_1C169A0F2ACF26E7*))((::PBYTE)hIl2Cpp + CLASS_2_7F506A88588D411D_METHOD_2_4EC67CD3E2DF87A5_OFFSET))(this, a1, a2);
	}

	::System::Void _Rebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F506A88588D411D__REBUILD_OFFSET))(this);
	}

	::System::Boolean _CheckNeedRebuild()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F506A88588D411D__CHECKNEEDREBUILD_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F506A88588D411D_DISPOSE_OFFSET))(this);
	}
};
