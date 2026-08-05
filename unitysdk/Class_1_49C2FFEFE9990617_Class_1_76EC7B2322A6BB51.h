#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGamepadTriggerEffect; }
namespace System { class Action; }

#define CLASS_1_49C2FFEFE9990617_CLASS_1_76EC7B2322A6BB51_METHOD_1_152B0B0CDD843B00_OFFSET UNITYSDK_OFFSET(0x178D3950)
#define CLASS_1_49C2FFEFE9990617_CLASS_1_76EC7B2322A6BB51__CTOR_OFFSET UNITYSDK_OFFSET(0x178D3940)

inline static constexpr unsigned int Class_1_49C2FFEFE9990617_Class_1_76EC7B2322A6BB51_TypeDefinitionIndex = 71449;

class Class_1_49C2FFEFE9990617_Class_1_76EC7B2322A6BB51 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49C2FFEFE9990617_CLASS_1_76EC7B2322A6BB51__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_152B0B0CDD843B00(::MoleMole::Config::ConfigGamepadTriggerEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGamepadTriggerEffect*))((::PBYTE)hIl2Cpp + CLASS_1_49C2FFEFE9990617_CLASS_1_76EC7B2322A6BB51_METHOD_1_152B0B0CDD843B00_OFFSET))(this, a1);
	}
};
