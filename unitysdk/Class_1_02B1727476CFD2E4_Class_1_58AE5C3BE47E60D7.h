#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class WindFieldConfig; }
namespace System { class Action; }

#define CLASS_1_02B1727476CFD2E4_CLASS_1_58AE5C3BE47E60D7_METHOD_1_FED5D88B759AA2E2_OFFSET UNITYSDK_OFFSET(0x1598B100)
#define CLASS_1_02B1727476CFD2E4_CLASS_1_58AE5C3BE47E60D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1598B0F0)

inline static constexpr unsigned int Class_1_02B1727476CFD2E4_Class_1_58AE5C3BE47E60D7_TypeDefinitionIndex = 69436;

class Class_1_02B1727476CFD2E4_Class_1_58AE5C3BE47E60D7 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02B1727476CFD2E4_CLASS_1_58AE5C3BE47E60D7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FED5D88B759AA2E2(::MoleMole::Config::WindFieldConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::WindFieldConfig*))((::PBYTE)hIl2Cpp + CLASS_1_02B1727476CFD2E4_CLASS_1_58AE5C3BE47E60D7_METHOD_1_FED5D88B759AA2E2_OFFSET))(this, a1);
	}
};
