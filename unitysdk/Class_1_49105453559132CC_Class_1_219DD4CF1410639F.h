#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDynamicAccessories; }
namespace System { class Action; }

#define CLASS_1_49105453559132CC_CLASS_1_219DD4CF1410639F_METHOD_1_BDFFD7A7157DB903_OFFSET UNITYSDK_OFFSET(0x1578C270)
#define CLASS_1_49105453559132CC_CLASS_1_219DD4CF1410639F__CTOR_OFFSET UNITYSDK_OFFSET(0x1578C260)

inline static constexpr unsigned int Class_1_49105453559132CC_Class_1_219DD4CF1410639F_TypeDefinitionIndex = 64583;

class Class_1_49105453559132CC_Class_1_219DD4CF1410639F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49105453559132CC_CLASS_1_219DD4CF1410639F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BDFFD7A7157DB903(::MoleMole::Config::ConfigDynamicAccessories* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDynamicAccessories*))((::PBYTE)hIl2Cpp + CLASS_1_49105453559132CC_CLASS_1_219DD4CF1410639F_METHOD_1_BDFFD7A7157DB903_OFFSET))(this, a1);
	}
};
