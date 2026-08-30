#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/Property/PropertyModifierBuilder_1.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarConfig; }

#define CLASS_2_C25A52059699ED5E_METHOD_2_4EAC1A74BB022F9B_1_OFFSET UNITYSDK_OFFSET(0x19FD9A20)
#define CLASS_2_C25A52059699ED5E_METHOD_2_4EAC1A74BB022F9B_OFFSET UNITYSDK_OFFSET(0x19FD8D10)
#define CLASS_2_C25A52059699ED5E__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x19FD9A70)
#define CLASS_2_C25A52059699ED5E__CTOR_OFFSET UNITYSDK_OFFSET(0x19FD8C70)
#define CLASS_2_C25A52059699ED5E__REBUILD_OFFSET UNITYSDK_OFFSET(0x19FD8D60)

inline static constexpr unsigned int Class_2_C25A52059699ED5E_TypeDefinitionIndex = 74818;

class Class_2_C25A52059699ED5E : public ::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* IGHAHBNLIJA; // 0x20
	::System::Int32 IACHHFMCKMC; // 0x28
	::System::Int32 CLPLIBODOGC; // 0x2C

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C25A52059699ED5E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4EAC1A74BB022F9B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C25A52059699ED5E_METHOD_2_4EAC1A74BB022F9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_4EAC1A74BB022F9B_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C25A52059699ED5E_METHOD_2_4EAC1A74BB022F9B_1_OFFSET))(this, a1);
	}

	::System::Void _Rebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C25A52059699ED5E__REBUILD_OFFSET))(this);
	}

	::System::Boolean _CheckNeedRebuild()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C25A52059699ED5E__CHECKNEEDREBUILD_OFFSET))(this);
	}
};
