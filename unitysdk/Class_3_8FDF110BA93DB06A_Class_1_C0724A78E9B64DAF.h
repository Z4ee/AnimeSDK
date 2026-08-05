#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ProjectileTraitConfig.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_3_8FDF110BA93DB06A_CLASS_1_C0724A78E9B64DAF_METHOD_1_D345D7B4819FC3DB_OFFSET UNITYSDK_OFFSET(0x119793D0)
#define CLASS_3_8FDF110BA93DB06A_CLASS_1_C0724A78E9B64DAF__CTOR_OFFSET UNITYSDK_OFFSET(0x119793C0)

inline static constexpr unsigned int Class_3_8FDF110BA93DB06A_Class_1_C0724A78E9B64DAF_TypeDefinitionIndex = 91233;

class Class_3_8FDF110BA93DB06A_Class_1_C0724A78E9B64DAF : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_CLASS_1_C0724A78E9B64DAF__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D345D7B4819FC3DB(::MoleMole::Config::ProjectileTraitConfig a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ProjectileTraitConfig))((::PBYTE)hIl2Cpp + CLASS_3_8FDF110BA93DB06A_CLASS_1_C0724A78E9B64DAF_METHOD_1_D345D7B4819FC3DB_OFFSET))(this, a1);
	}
};
