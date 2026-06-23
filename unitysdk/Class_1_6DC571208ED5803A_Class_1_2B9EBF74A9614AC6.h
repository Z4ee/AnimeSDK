#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCharacterAimMode; }
namespace System { class Action; }

#define CLASS_1_6DC571208ED5803A_CLASS_1_2B9EBF74A9614AC6_METHOD_1_C46D633F1809B0B2_OFFSET UNITYSDK_OFFSET(0x1AAD23E0)
#define CLASS_1_6DC571208ED5803A_CLASS_1_2B9EBF74A9614AC6__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD23D0)

inline static constexpr unsigned int Class_1_6DC571208ED5803A_Class_1_2B9EBF74A9614AC6_TypeDefinitionIndex = 63209;

class Class_1_6DC571208ED5803A_Class_1_2B9EBF74A9614AC6 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DC571208ED5803A_CLASS_1_2B9EBF74A9614AC6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C46D633F1809B0B2(::MoleMole::Config::ConfigCharacterAimMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCharacterAimMode*))((::PBYTE)hIl2Cpp + CLASS_1_6DC571208ED5803A_CLASS_1_2B9EBF74A9614AC6_METHOD_1_C46D633F1809B0B2_OFFSET))(this, a1);
	}
};
