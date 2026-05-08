#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ProjectileTraitConfig.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_2_F639F9869450856A_CLASS_1_14B7B2697967A666_1_METHOD_1_E933CD957E3CB205_OFFSET UNITYSDK_OFFSET(0x135801C0)
#define CLASS_2_F639F9869450856A_CLASS_1_14B7B2697967A666_1__CTOR_OFFSET UNITYSDK_OFFSET(0x135801B0)

inline static constexpr unsigned int Class_2_F639F9869450856A_Class_1_14B7B2697967A666_1_TypeDefinitionIndex = 42050;

class Class_2_F639F9869450856A_Class_1_14B7B2697967A666_1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_CLASS_1_14B7B2697967A666_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E933CD957E3CB205(::MoleMole::Config::ProjectileTraitConfig a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ProjectileTraitConfig))((::PBYTE)hIl2Cpp + CLASS_2_F639F9869450856A_CLASS_1_14B7B2697967A666_1_METHOD_1_E933CD957E3CB205_OFFSET))(this, a1);
	}
};
