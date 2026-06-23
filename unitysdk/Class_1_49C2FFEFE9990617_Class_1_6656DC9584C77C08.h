#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGamepadTriggerEffect; }
namespace System { class Action; }

#define CLASS_1_49C2FFEFE9990617_CLASS_1_6656DC9584C77C08_METHOD_1_757604E14C759419_OFFSET UNITYSDK_OFFSET(0x11AF6CE0)
#define CLASS_1_49C2FFEFE9990617_CLASS_1_6656DC9584C77C08__CTOR_OFFSET UNITYSDK_OFFSET(0x11AF6CD0)

inline static constexpr unsigned int Class_1_49C2FFEFE9990617_Class_1_6656DC9584C77C08_TypeDefinitionIndex = 60374;

class Class_1_49C2FFEFE9990617_Class_1_6656DC9584C77C08 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49C2FFEFE9990617_CLASS_1_6656DC9584C77C08__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_757604E14C759419(::MoleMole::Config::ConfigGamepadTriggerEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGamepadTriggerEffect*))((::PBYTE)hIl2Cpp + CLASS_1_49C2FFEFE9990617_CLASS_1_6656DC9584C77C08_METHOD_1_757604E14C759419_OFFSET))(this, a1);
	}
};
