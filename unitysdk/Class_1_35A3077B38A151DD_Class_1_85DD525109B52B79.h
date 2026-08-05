#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class SkillTypeToAttackTagsConfig; }
namespace System { class Action; }

#define CLASS_1_35A3077B38A151DD_CLASS_1_85DD525109B52B79_METHOD_1_AD55CA83FCA60E07_OFFSET UNITYSDK_OFFSET(0x14008000)
#define CLASS_1_35A3077B38A151DD_CLASS_1_85DD525109B52B79__CTOR_OFFSET UNITYSDK_OFFSET(0x14007FF0)

inline static constexpr unsigned int Class_1_35A3077B38A151DD_Class_1_85DD525109B52B79_TypeDefinitionIndex = 62845;

class Class_1_35A3077B38A151DD_Class_1_85DD525109B52B79 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35A3077B38A151DD_CLASS_1_85DD525109B52B79__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AD55CA83FCA60E07(::MoleMole::Config::SkillTypeToAttackTagsConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SkillTypeToAttackTagsConfig*))((::PBYTE)hIl2Cpp + CLASS_1_35A3077B38A151DD_CLASS_1_85DD525109B52B79_METHOD_1_AD55CA83FCA60E07_OFFSET))(this, a1);
	}
};
