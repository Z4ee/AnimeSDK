#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_43BD383C98B4C0C5_139_CLASS_1_EABE0A819787F5F4_2_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x926DB70)
#define CLASS_1_43BD383C98B4C0C5_139_CLASS_1_EABE0A819787F5F4_2__CTOR_OFFSET UNITYSDK_OFFSET(0x926DB60)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_139_Class_1_EABE0A819787F5F4_2_TypeDefinitionIndex = 60332;

class Class_1_43BD383C98B4C0C5_139_Class_1_EABE0A819787F5F4_2 : public ::System::Object
{
public:
	::RPG::Client::IAvatarInfoProvider* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_139_CLASS_1_EABE0A819787F5F4_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_139_CLASS_1_EABE0A819787F5F4_2_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}
};
