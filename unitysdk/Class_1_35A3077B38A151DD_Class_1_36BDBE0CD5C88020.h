#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class SkillTypeToAttackTagsConfig; }
namespace System { class Action; }

#define CLASS_1_35A3077B38A151DD_CLASS_1_36BDBE0CD5C88020_METHOD_1_B39AB8F96A172C0C_OFFSET UNITYSDK_OFFSET(0x17773910)
#define CLASS_1_35A3077B38A151DD_CLASS_1_36BDBE0CD5C88020__CTOR_OFFSET UNITYSDK_OFFSET(0x17773900)

inline static constexpr unsigned int Class_1_35A3077B38A151DD_Class_1_36BDBE0CD5C88020_TypeDefinitionIndex = 61220;

class Class_1_35A3077B38A151DD_Class_1_36BDBE0CD5C88020 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35A3077B38A151DD_CLASS_1_36BDBE0CD5C88020__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B39AB8F96A172C0C(::MoleMole::Config::SkillTypeToAttackTagsConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SkillTypeToAttackTagsConfig*))((::PBYTE)hIl2Cpp + CLASS_1_35A3077B38A151DD_CLASS_1_36BDBE0CD5C88020_METHOD_1_B39AB8F96A172C0C_OFFSET))(this, a1);
	}
};
