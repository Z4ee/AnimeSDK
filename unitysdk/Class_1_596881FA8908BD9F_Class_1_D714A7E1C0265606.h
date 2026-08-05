#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigExQTE; }
namespace System { class Action; }

#define CLASS_1_596881FA8908BD9F_CLASS_1_D714A7E1C0265606_METHOD_1_0641864AE153B359_OFFSET UNITYSDK_OFFSET(0x165EFDB0)
#define CLASS_1_596881FA8908BD9F_CLASS_1_D714A7E1C0265606__CTOR_OFFSET UNITYSDK_OFFSET(0x165EFDA0)

inline static constexpr unsigned int Class_1_596881FA8908BD9F_Class_1_D714A7E1C0265606_TypeDefinitionIndex = 52565;

class Class_1_596881FA8908BD9F_Class_1_D714A7E1C0265606 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_596881FA8908BD9F_CLASS_1_D714A7E1C0265606__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0641864AE153B359(::MoleMole::Config::ConfigExQTE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigExQTE*))((::PBYTE)hIl2Cpp + CLASS_1_596881FA8908BD9F_CLASS_1_D714A7E1C0265606_METHOD_1_0641864AE153B359_OFFSET))(this, a1);
	}
};
