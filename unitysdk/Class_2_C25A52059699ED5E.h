#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/Property/PropertyModifierBuilder_1.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarConfig; }

#define CLASS_2_C25A52059699ED5E_METHOD_2_85E059D0485AE5A4_1_OFFSET UNITYSDK_OFFSET(0x1368FEE0)
#define CLASS_2_C25A52059699ED5E_METHOD_2_85E059D0485AE5A4_OFFSET UNITYSDK_OFFSET(0x1368F240)
#define CLASS_2_C25A52059699ED5E__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x1368FF30)
#define CLASS_2_C25A52059699ED5E__CTOR_OFFSET UNITYSDK_OFFSET(0x1368F1A0)
#define CLASS_2_C25A52059699ED5E__REBUILD_OFFSET UNITYSDK_OFFSET(0x1368F290)

inline static constexpr unsigned int Class_2_C25A52059699ED5E_TypeDefinitionIndex = 69989;

class Class_2_C25A52059699ED5E : public ::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* Field_2_0; // 0x20
	::System::Int32 Field_2_1; // 0x28
	::System::Int32 Field_2_2; // 0x2C

	::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C25A52059699ED5E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_85E059D0485AE5A4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C25A52059699ED5E_METHOD_2_85E059D0485AE5A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_85E059D0485AE5A4_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C25A52059699ED5E_METHOD_2_85E059D0485AE5A4_1_OFFSET))(this, a1);
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
