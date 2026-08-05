#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDamageStaggerLevel; }
namespace System { class Action; }

#define CLASS_1_15573AD7DA8230D5_CLASS_1_1BEE30907A057060_METHOD_1_E5DAC7A8C19B182A_OFFSET UNITYSDK_OFFSET(0x14DD9280)
#define CLASS_1_15573AD7DA8230D5_CLASS_1_1BEE30907A057060__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD9270)

inline static constexpr unsigned int Class_1_15573AD7DA8230D5_Class_1_1BEE30907A057060_TypeDefinitionIndex = 46869;

class Class_1_15573AD7DA8230D5_Class_1_1BEE30907A057060 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15573AD7DA8230D5_CLASS_1_1BEE30907A057060__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E5DAC7A8C19B182A(::MoleMole::Config::ConfigDamageStaggerLevel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDamageStaggerLevel*))((::PBYTE)hIl2Cpp + CLASS_1_15573AD7DA8230D5_CLASS_1_1BEE30907A057060_METHOD_1_E5DAC7A8C19B182A_OFFSET))(this, a1);
	}
};
