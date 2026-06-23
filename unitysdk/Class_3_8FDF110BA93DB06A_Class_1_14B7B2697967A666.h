#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ProjectileTraitConfig.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_3_8FDF110BA93DB06A_CLASS_1_14B7B2697967A666_METHOD_1_E933CD957E3CB205_OFFSET UNITYSDK_OFFSET(0x1792BE50)
#define CLASS_3_8FDF110BA93DB06A_CLASS_1_14B7B2697967A666__CTOR_OFFSET UNITYSDK_OFFSET(0x1792BE40)

inline static constexpr unsigned int Class_3_8FDF110BA93DB06A_Class_1_14B7B2697967A666_TypeDefinitionIndex = 60986;

class Class_3_8FDF110BA93DB06A_Class_1_14B7B2697967A666 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_CLASS_1_14B7B2697967A666__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E933CD957E3CB205(::MoleMole::Config::ProjectileTraitConfig a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ProjectileTraitConfig))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_CLASS_1_14B7B2697967A666_METHOD_1_E933CD957E3CB205_OFFSET))(this, a1);
	}
};
