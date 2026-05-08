#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFlowCanvas; }
namespace System { class Action; }

#define CLASS_1_DA6FA8BE8D2EBDA0_CLASS_1_5E6FC21CDDAB37BA_METHOD_1_11B7550D7475ED5E_OFFSET UNITYSDK_OFFSET(0xBDFF7D0)
#define CLASS_1_DA6FA8BE8D2EBDA0_CLASS_1_5E6FC21CDDAB37BA__CTOR_OFFSET UNITYSDK_OFFSET(0xBDFF7C0)

inline static constexpr unsigned int Class_1_DA6FA8BE8D2EBDA0_Class_1_5E6FC21CDDAB37BA_TypeDefinitionIndex = 54421;

class Class_1_DA6FA8BE8D2EBDA0_Class_1_5E6FC21CDDAB37BA : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA6FA8BE8D2EBDA0_CLASS_1_5E6FC21CDDAB37BA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_11B7550D7475ED5E(::MoleMole::Config::ConfigFlowCanvas* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFlowCanvas*))((::PBYTE)hIl2Cpp + CLASS_1_DA6FA8BE8D2EBDA0_CLASS_1_5E6FC21CDDAB37BA_METHOD_1_11B7550D7475ED5E_OFFSET))(this, a1);
	}
};
