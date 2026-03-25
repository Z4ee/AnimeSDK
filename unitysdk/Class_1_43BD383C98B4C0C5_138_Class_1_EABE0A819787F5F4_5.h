#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_43BD383C98B4C0C5_138_CLASS_1_EABE0A819787F5F4_5_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x118F3020)
#define CLASS_1_43BD383C98B4C0C5_138_CLASS_1_EABE0A819787F5F4_5__CTOR_OFFSET UNITYSDK_OFFSET(0x118F3010)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_138_Class_1_EABE0A819787F5F4_5_TypeDefinitionIndex = 53211;

class Class_1_43BD383C98B4C0C5_138_Class_1_EABE0A819787F5F4_5 : public ::System::Object
{
public:
	::RPG::Client::IAvatarInfoProvider* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_138_CLASS_1_EABE0A819787F5F4_5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_138_CLASS_1_EABE0A819787F5F4_5_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}
};
