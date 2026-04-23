#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_1_43BD383C98B4C0C5_139_CLASS_1_EABE0A819787F5F4_1_METHOD_1_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0x926D3B0)
#define CLASS_1_43BD383C98B4C0C5_139_CLASS_1_EABE0A819787F5F4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x926D3A0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_139_Class_1_EABE0A819787F5F4_1_TypeDefinitionIndex = 60331;

class Class_1_43BD383C98B4C0C5_139_Class_1_EABE0A819787F5F4_1 : public ::System::Object
{
public:
	::RPG::Client::IAvatarInfoProvider* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_139_CLASS_1_EABE0A819787F5F4_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_139_CLASS_1_EABE0A819787F5F4_1_METHOD_1_01109DD29CB4D216_OFFSET))(this);
	}
};
