#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarSkillConfig; }

#define CLASS_1_BA37B85D67AEA614_GET_SKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x139BBAD0)
#define CLASS_1_BA37B85D67AEA614_METHOD_1_8A9A72FB00358D11_OFFSET UNITYSDK_OFFSET(0x139BBA50)
#define CLASS_1_BA37B85D67AEA614_METHOD_1_EF90527E19A345E6_OFFSET UNITYSDK_OFFSET(0x139BB9B0)
#define CLASS_1_BA37B85D67AEA614_SET_SKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x139BBAE0)
#define CLASS_1_BA37B85D67AEA614__CTOR_OFFSET UNITYSDK_OFFSET(0x139BBA40)

inline static constexpr unsigned int Class_1_BA37B85D67AEA614_TypeDefinitionIndex = 69954;

class Class_1_BA37B85D67AEA614 : public ::System::Object
{
public:
	::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig* _SkillConfig_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA37B85D67AEA614__CTOR_OFFSET))(this);
	}

	static ::Class_1_BA37B85D67AEA614* Method_1_EF90527E19A345E6(::System::UInt32 a1)
	{
		return ((::Class_1_BA37B85D67AEA614*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BA37B85D67AEA614_METHOD_1_EF90527E19A345E6_OFFSET))(a1);
	}

	::System::Boolean Method_1_8A9A72FB00358D11()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA37B85D67AEA614_METHOD_1_8A9A72FB00358D11_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig* get_SkillConfig()
	{
		return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BA37B85D67AEA614_GET_SKILLCONFIG_OFFSET))(this);
	}

	::System::Void set_SkillConfig(::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarSkillConfig*))((::PBYTE)hIl2Cpp + CLASS_1_BA37B85D67AEA614_SET_SKILLCONFIG_OFFSET))(this, a1);
	}
};
