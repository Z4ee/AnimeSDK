#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLineSubSystem; }
namespace System { class Action; }

#define CLASS_1_DAF84798E1838B30_CLASS_1_6F65DB0484910594_METHOD_1_5A74ECF32B99F908_OFFSET UNITYSDK_OFFSET(0x156ED150)
#define CLASS_1_DAF84798E1838B30_CLASS_1_6F65DB0484910594__CTOR_OFFSET UNITYSDK_OFFSET(0x156ED140)

inline static constexpr unsigned int Class_1_DAF84798E1838B30_Class_1_6F65DB0484910594_TypeDefinitionIndex = 46405;

class Class_1_DAF84798E1838B30_Class_1_6F65DB0484910594 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAF84798E1838B30_CLASS_1_6F65DB0484910594__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5A74ECF32B99F908(::MoleMole::Config::ConfigZipLineSubSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigZipLineSubSystem*))((::PBYTE)hIl2Cpp + CLASS_1_DAF84798E1838B30_CLASS_1_6F65DB0484910594_METHOD_1_5A74ECF32B99F908_OFFSET))(this, a1);
	}
};
