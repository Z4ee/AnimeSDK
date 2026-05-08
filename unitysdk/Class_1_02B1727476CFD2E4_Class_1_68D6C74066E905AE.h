#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class WindFieldConfig; }
namespace System { class Action; }

#define CLASS_1_02B1727476CFD2E4_CLASS_1_68D6C74066E905AE_METHOD_1_60C8AD9C69F06837_OFFSET UNITYSDK_OFFSET(0x181B7890)
#define CLASS_1_02B1727476CFD2E4_CLASS_1_68D6C74066E905AE__CTOR_OFFSET UNITYSDK_OFFSET(0x181B7560)

inline static constexpr unsigned int Class_1_02B1727476CFD2E4_Class_1_68D6C74066E905AE_TypeDefinitionIndex = 62226;

class Class_1_02B1727476CFD2E4_Class_1_68D6C74066E905AE : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02B1727476CFD2E4_CLASS_1_68D6C74066E905AE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_60C8AD9C69F06837(::MoleMole::Config::WindFieldConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::WindFieldConfig*))((::PBYTE)hIl2Cpp + CLASS_1_02B1727476CFD2E4_CLASS_1_68D6C74066E905AE_METHOD_1_60C8AD9C69F06837_OFFSET))(this, a1);
	}
};
