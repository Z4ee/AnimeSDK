#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTargetValues; }
namespace System { class Action; }

#define CLASS_1_1080DBEE4F3379D6_CLASS_1_5238F8245282DDAB_METHOD_1_29100C12982204F1_OFFSET UNITYSDK_OFFSET(0x15514140)
#define CLASS_1_1080DBEE4F3379D6_CLASS_1_5238F8245282DDAB__CTOR_OFFSET UNITYSDK_OFFSET(0x15514130)

inline static constexpr unsigned int Class_1_1080DBEE4F3379D6_Class_1_5238F8245282DDAB_TypeDefinitionIndex = 53056;

class Class_1_1080DBEE4F3379D6_Class_1_5238F8245282DDAB : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1080DBEE4F3379D6_CLASS_1_5238F8245282DDAB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_29100C12982204F1(::MoleMole::Config::ConfigTargetValues* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTargetValues*))((::PBYTE)hIl2Cpp + CLASS_1_1080DBEE4F3379D6_CLASS_1_5238F8245282DDAB_METHOD_1_29100C12982204F1_OFFSET))(this, a1);
	}
};
