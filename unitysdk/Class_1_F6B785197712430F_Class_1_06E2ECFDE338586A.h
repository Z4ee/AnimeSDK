#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeleportSelections; }
namespace System { class Action; }

#define CLASS_1_F6B785197712430F_CLASS_1_06E2ECFDE338586A_METHOD_1_94B88FEAAB85EB78_OFFSET UNITYSDK_OFFSET(0x15F0F9B0)
#define CLASS_1_F6B785197712430F_CLASS_1_06E2ECFDE338586A__CTOR_OFFSET UNITYSDK_OFFSET(0x15F0F9A0)

inline static constexpr unsigned int Class_1_F6B785197712430F_Class_1_06E2ECFDE338586A_TypeDefinitionIndex = 52723;

class Class_1_F6B785197712430F_Class_1_06E2ECFDE338586A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6B785197712430F_CLASS_1_06E2ECFDE338586A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_94B88FEAAB85EB78(::MoleMole::Config::ConfigTeleportSelections* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTeleportSelections*))((::PBYTE)hIl2Cpp + CLASS_1_F6B785197712430F_CLASS_1_06E2ECFDE338586A_METHOD_1_94B88FEAAB85EB78_OFFSET))(this, a1);
	}
};
