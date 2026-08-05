#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLine; }
namespace System { class Action; }

#define CLASS_1_2B2CF705BA7D8E61_CLASS_1_75C8F16757D6F37E_METHOD_1_17342DCD2589816F_OFFSET UNITYSDK_OFFSET(0x14F02230)
#define CLASS_1_2B2CF705BA7D8E61_CLASS_1_75C8F16757D6F37E__CTOR_OFFSET UNITYSDK_OFFSET(0x14F02220)

inline static constexpr unsigned int Class_1_2B2CF705BA7D8E61_Class_1_75C8F16757D6F37E_TypeDefinitionIndex = 84429;

class Class_1_2B2CF705BA7D8E61_Class_1_75C8F16757D6F37E : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B2CF705BA7D8E61_CLASS_1_75C8F16757D6F37E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_17342DCD2589816F(::MoleMole::Config::ConfigZipLine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigZipLine*))((::PBYTE)hIl2Cpp + CLASS_1_2B2CF705BA7D8E61_CLASS_1_75C8F16757D6F37E_METHOD_1_17342DCD2589816F_OFFSET))(this, a1);
	}
};
