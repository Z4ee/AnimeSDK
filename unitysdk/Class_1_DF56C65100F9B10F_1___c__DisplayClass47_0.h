#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_DF56C65100F9B10F_1___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x155B41D0)
#define CLASS_1_DF56C65100F9B10F_1___C__DISPLAYCLASS47_0__GETEFFECTPARAMS_B__0_OFFSET UNITYSDK_OFFSET(0x155B41E0)

inline static constexpr unsigned int Class_1_DF56C65100F9B10F_1___c__DisplayClass47_0_TypeDefinitionIndex = 80118;

class Class_1_DF56C65100F9B10F_1___c__DisplayClass47_0 : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* names; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetEffectParams_b__0(::Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401))((::PBYTE)hIl2Cpp + CLASS_1_DF56C65100F9B10F_1___C__DISPLAYCLASS47_0__GETEFFECTPARAMS_B__0_OFFSET))(this, a1);
	}
};
