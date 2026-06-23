#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLineSubSystem; }
namespace System { class Action; }

#define CLASS_1_DAF84798E1838B30_CLASS_1_0A46A689FEE611AA_METHOD_1_C85A9AC644317121_OFFSET UNITYSDK_OFFSET(0x190BE1B0)
#define CLASS_1_DAF84798E1838B30_CLASS_1_0A46A689FEE611AA__CTOR_OFFSET UNITYSDK_OFFSET(0x190BE1A0)

inline static constexpr unsigned int Class_1_DAF84798E1838B30_Class_1_0A46A689FEE611AA_TypeDefinitionIndex = 73839;

class Class_1_DAF84798E1838B30_Class_1_0A46A689FEE611AA : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAF84798E1838B30_CLASS_1_0A46A689FEE611AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C85A9AC644317121(::MoleMole::Config::ConfigZipLineSubSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigZipLineSubSystem*))((::PBYTE)hIl2Cpp + CLASS_1_DAF84798E1838B30_CLASS_1_0A46A689FEE611AA_METHOD_1_C85A9AC644317121_OFFSET))(this, a1);
	}
};
