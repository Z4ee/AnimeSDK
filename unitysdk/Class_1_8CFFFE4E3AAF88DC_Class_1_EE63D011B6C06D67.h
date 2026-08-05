#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHack; }
namespace System { class Action; }

#define CLASS_1_8CFFFE4E3AAF88DC_CLASS_1_EE63D011B6C06D67_METHOD_1_28C065AD5149D75B_OFFSET UNITYSDK_OFFSET(0x13CD5320)
#define CLASS_1_8CFFFE4E3AAF88DC_CLASS_1_EE63D011B6C06D67__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD5310)

inline static constexpr unsigned int Class_1_8CFFFE4E3AAF88DC_Class_1_EE63D011B6C06D67_TypeDefinitionIndex = 63138;

class Class_1_8CFFFE4E3AAF88DC_Class_1_EE63D011B6C06D67 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CFFFE4E3AAF88DC_CLASS_1_EE63D011B6C06D67__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_28C065AD5149D75B(::MoleMole::Config::ConfigHack* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHack*))((::PBYTE)hIl2Cpp + CLASS_1_8CFFFE4E3AAF88DC_CLASS_1_EE63D011B6C06D67_METHOD_1_28C065AD5149D75B_OFFSET))(this, a1);
	}
};
