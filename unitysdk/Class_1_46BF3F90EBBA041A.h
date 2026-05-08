#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/StatusEffectType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_46BF3F90EBBA041A_METHOD_1_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0x130B3170)
#define CLASS_1_46BF3F90EBBA041A__CTOR_OFFSET UNITYSDK_OFFSET(0x130B31E0)

inline static constexpr unsigned int Class_1_46BF3F90EBBA041A_TypeDefinitionIndex = 49927;

class Class_1_46BF3F90EBBA041A : public ::System::Object
{
public:
	::MoleMole::StatusEffectType Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46BF3F90EBBA041A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4E140453C4B32F06(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_46BF3F90EBBA041A_METHOD_1_4E140453C4B32F06_OFFSET))(this, a1);
	}
};
