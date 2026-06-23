#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIScriptableAnimSpecialNum; }
namespace System { class Action; }

#define CLASS_1_0E858BB7E45AD41E_CLASS_1_287FE18896225F20_METHOD_1_C3E9A7F1925AEE4E_OFFSET UNITYSDK_OFFSET(0x15D24200)
#define CLASS_1_0E858BB7E45AD41E_CLASS_1_287FE18896225F20__CTOR_OFFSET UNITYSDK_OFFSET(0x15D241F0)

inline static constexpr unsigned int Class_1_0E858BB7E45AD41E_Class_1_287FE18896225F20_TypeDefinitionIndex = 71175;

class Class_1_0E858BB7E45AD41E_Class_1_287FE18896225F20 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E858BB7E45AD41E_CLASS_1_287FE18896225F20__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C3E9A7F1925AEE4E(::MoleMole::Config::ConfigUIScriptableAnimSpecialNum* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIScriptableAnimSpecialNum*))((::PBYTE)hIl2Cpp + CLASS_1_0E858BB7E45AD41E_CLASS_1_287FE18896225F20_METHOD_1_C3E9A7F1925AEE4E_OFFSET))(this, a1);
	}
};
