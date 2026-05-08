#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EffectLODType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_0BBC25D57865EECE_METHOD_1_018C8AE90F200126_OFFSET UNITYSDK_OFFSET(0x13F68570)
#define CLASS_1_0BBC25D57865EECE_METHOD_1_83CF6E3B6C10C78D_OFFSET UNITYSDK_OFFSET(0x13F685B0)

inline static constexpr unsigned int Class_1_0BBC25D57865EECE_TypeDefinitionIndex = 61594;

class Class_1_0BBC25D57865EECE : public ::System::Object
{
public:
	static ::MoleMole::Config::EffectLODType Method_1_018C8AE90F200126()
	{
		return ((::MoleMole::Config::EffectLODType(*)())((::PBYTE)hIl2Cpp + CLASS_1_0BBC25D57865EECE_METHOD_1_018C8AE90F200126_OFFSET))();
	}

	static ::System::String* Method_1_83CF6E3B6C10C78D(::MoleMole::Config::EffectLODType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::EffectLODType))((::PBYTE)hIl2Cpp + CLASS_1_0BBC25D57865EECE_METHOD_1_83CF6E3B6C10C78D_OFFSET))(a1);
	}
};
