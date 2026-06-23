#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigControllableObject; }
namespace System { class Action; }

#define CLASS_1_F1A06B646098D47F_CLASS_1_94035C3C9D212562_METHOD_1_76850012BD1F8CA1_OFFSET UNITYSDK_OFFSET(0x19E295A0)
#define CLASS_1_F1A06B646098D47F_CLASS_1_94035C3C9D212562__CTOR_OFFSET UNITYSDK_OFFSET(0x19E29590)

inline static constexpr unsigned int Class_1_F1A06B646098D47F_Class_1_94035C3C9D212562_TypeDefinitionIndex = 84345;

class Class_1_F1A06B646098D47F_Class_1_94035C3C9D212562 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1A06B646098D47F_CLASS_1_94035C3C9D212562__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_76850012BD1F8CA1(::MoleMole::Config::ConfigControllableObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigControllableObject*))((::PBYTE)hIl2Cpp + CLASS_1_F1A06B646098D47F_CLASS_1_94035C3C9D212562_METHOD_1_76850012BD1F8CA1_OFFSET))(this, a1);
	}
};
