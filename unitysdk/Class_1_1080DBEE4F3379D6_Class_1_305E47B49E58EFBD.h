#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTargetValues; }
namespace System { class Action; }

#define CLASS_1_1080DBEE4F3379D6_CLASS_1_305E47B49E58EFBD_METHOD_1_97ED2FEDCEE4D722_OFFSET UNITYSDK_OFFSET(0x15B1CBF0)
#define CLASS_1_1080DBEE4F3379D6_CLASS_1_305E47B49E58EFBD__CTOR_OFFSET UNITYSDK_OFFSET(0x15B1CBD0)

inline static constexpr unsigned int Class_1_1080DBEE4F3379D6_Class_1_305E47B49E58EFBD_TypeDefinitionIndex = 76890;

class Class_1_1080DBEE4F3379D6_Class_1_305E47B49E58EFBD : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1080DBEE4F3379D6_CLASS_1_305E47B49E58EFBD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_97ED2FEDCEE4D722(::MoleMole::Config::ConfigTargetValues* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTargetValues*))((::PBYTE)hIl2Cpp + CLASS_1_1080DBEE4F3379D6_CLASS_1_305E47B49E58EFBD_METHOD_1_97ED2FEDCEE4D722_OFFSET))(this, a1);
	}
};
