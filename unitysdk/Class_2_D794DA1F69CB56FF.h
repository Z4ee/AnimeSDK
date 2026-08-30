#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/Property/PropertyModifierBuilder_1.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"

class Class_1_F6160A8B4F4A1F27;

#define CLASS_2_D794DA1F69CB56FF_METHOD_2_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x17F72200)
#define CLASS_2_D794DA1F69CB56FF__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x17F72250)
#define CLASS_2_D794DA1F69CB56FF__CTOR_OFFSET UNITYSDK_OFFSET(0x17F71BB0)
#define CLASS_2_D794DA1F69CB56FF__REBUILD_OFFSET UNITYSDK_OFFSET(0x17F71C40)

inline static constexpr unsigned int Class_2_D794DA1F69CB56FF_TypeDefinitionIndex = 74820;

class Class_2_D794DA1F69CB56FF : public ::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>
{
public:
	::Class_1_F6160A8B4F4A1F27* BIJLLNCPOKD; // 0x20
	::System::UInt32 FFFFJCOACPK; // 0x28

	::System::Void _ctor(::Class_1_F6160A8B4F4A1F27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F6160A8B4F4A1F27*))((::PBYTE)hIl2Cpp + CLASS_2_D794DA1F69CB56FF__CTOR_OFFSET))(this, a1);
	}

	::System::Void _Rebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D794DA1F69CB56FF__REBUILD_OFFSET))(this);
	}

	::System::Void Method_2_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D794DA1F69CB56FF_METHOD_2_FBF2CB29FD3B55E6_OFFSET))(this);
	}

	::System::Boolean _CheckNeedRebuild()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D794DA1F69CB56FF__CHECKNEEDREBUILD_OFFSET))(this);
	}
};
