#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDamageStaggerLevel; }
namespace System { class Action; }

#define CLASS_1_15573AD7DA8230D5_CLASS_1_A632594EFF8D8171_METHOD_1_25D4DD5F784B157F_OFFSET UNITYSDK_OFFSET(0x127D3190)
#define CLASS_1_15573AD7DA8230D5_CLASS_1_A632594EFF8D8171__CTOR_OFFSET UNITYSDK_OFFSET(0x127D3180)

inline static constexpr unsigned int Class_1_15573AD7DA8230D5_Class_1_A632594EFF8D8171_TypeDefinitionIndex = 46081;

class Class_1_15573AD7DA8230D5_Class_1_A632594EFF8D8171 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15573AD7DA8230D5_CLASS_1_A632594EFF8D8171__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_25D4DD5F784B157F(::MoleMole::Config::ConfigDamageStaggerLevel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDamageStaggerLevel*))((::PBYTE)hIl2Cpp + CLASS_1_15573AD7DA8230D5_CLASS_1_A632594EFF8D8171_METHOD_1_25D4DD5F784B157F_OFFSET))(this, a1);
	}
};
