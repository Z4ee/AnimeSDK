#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDynamicAccessories; }
namespace System { class Action; }

#define CLASS_1_49105453559132CC_CLASS_1_8488ED62E65EFA8F_METHOD_1_BEE78D08754BE4D8_OFFSET UNITYSDK_OFFSET(0x16C4B8A0)
#define CLASS_1_49105453559132CC_CLASS_1_8488ED62E65EFA8F__CTOR_OFFSET UNITYSDK_OFFSET(0x16C4B780)

inline static constexpr unsigned int Class_1_49105453559132CC_Class_1_8488ED62E65EFA8F_TypeDefinitionIndex = 52106;

class Class_1_49105453559132CC_Class_1_8488ED62E65EFA8F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49105453559132CC_CLASS_1_8488ED62E65EFA8F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BEE78D08754BE4D8(::MoleMole::Config::ConfigDynamicAccessories* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDynamicAccessories*))((::PBYTE)hIl2Cpp + CLASS_1_49105453559132CC_CLASS_1_8488ED62E65EFA8F_METHOD_1_BEE78D08754BE4D8_OFFSET))(this, a1);
	}
};
