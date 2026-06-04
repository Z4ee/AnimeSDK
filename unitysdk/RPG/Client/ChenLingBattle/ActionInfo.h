#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ECB0576E84484CA9;

#define RPG_CLIENT_CHENLINGBATTLE_ACTIONINFO_GET_ACTIONUID_OFFSET UNITYSDK_OFFSET(0xB5A3830)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONINFO_SET_ACTIONUID_OFFSET UNITYSDK_OFFSET(0xB5A3840)
#define RPG_CLIENT_CHENLINGBATTLE_ACTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB5A3810)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ActionInfo_TypeDefinitionIndex = 70964;

	class ActionInfo : public ::System::Object
	{
	public:
		::System::UInt32 _ActionUID_k__BackingField; // 0x10

		::System::Void _ctor(::Class_1_ECB0576E84484CA9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ECB0576E84484CA9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONINFO__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActionUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONINFO_GET_ACTIONUID_OFFSET))(this);
		}

		::System::Void set_ActionUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_ACTIONINFO_SET_ACTIONUID_OFFSET))(this, a1);
		}
	};
}
