#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIWeapon; }
namespace System { class Action; }

#define CLASS_1_C77BB1071F0961C6_CLASS_1_71D42853C4C709CE_METHOD_1_061F2760442E4396_OFFSET UNITYSDK_OFFSET(0x16F18B70)
#define CLASS_1_C77BB1071F0961C6_CLASS_1_71D42853C4C709CE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F18B60)

inline static constexpr unsigned int Class_1_C77BB1071F0961C6_Class_1_71D42853C4C709CE_TypeDefinitionIndex = 67797;

class Class_1_C77BB1071F0961C6_Class_1_71D42853C4C709CE : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C77BB1071F0961C6_CLASS_1_71D42853C4C709CE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_061F2760442E4396(::MoleMole::Config::ConfigUIWeapon* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIWeapon*))((::PBYTE)hIl2Cpp + CLASS_1_C77BB1071F0961C6_CLASS_1_71D42853C4C709CE_METHOD_1_061F2760442E4396_OFFSET))(this, a1);
	}
};
