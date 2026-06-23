#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectEntityDither; }
namespace System { class Action; }

#define CLASS_1_8F83EEC31E353269_CLASS_1_E563BFF076615BD1_METHOD_1_ED075BBE8D37D754_OFFSET UNITYSDK_OFFSET(0x15B20190)
#define CLASS_1_8F83EEC31E353269_CLASS_1_E563BFF076615BD1__CTOR_OFFSET UNITYSDK_OFFSET(0x15B20180)

inline static constexpr unsigned int Class_1_8F83EEC31E353269_Class_1_E563BFF076615BD1_TypeDefinitionIndex = 58542;

class Class_1_8F83EEC31E353269_Class_1_E563BFF076615BD1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F83EEC31E353269_CLASS_1_E563BFF076615BD1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ED075BBE8D37D754(::MoleMole::Config::ConfigViewObjectEntityDither* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectEntityDither*))((::PBYTE)hIl2Cpp + CLASS_1_8F83EEC31E353269_CLASS_1_E563BFF076615BD1_METHOD_1_ED075BBE8D37D754_OFFSET))(this, a1);
	}
};
