#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B8D0D905DA513A78;

#define CLASS_2_B8D0D905DA513A78_CLASS_1_79F32BE0A1133024_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111B9B30)
#define CLASS_2_B8D0D905DA513A78_CLASS_1_79F32BE0A1133024__CTOR_OFFSET UNITYSDK_OFFSET(0x111B99E0)

inline static constexpr unsigned int Class_2_B8D0D905DA513A78_Class_1_79F32BE0A1133024_TypeDefinitionIndex = 50703;

class Class_2_B8D0D905DA513A78_Class_1_79F32BE0A1133024 : public ::System::Object
{
public:
	::Class_2_B8D0D905DA513A78* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_B8D0D905DA513A78* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8D0D905DA513A78*))((::PBYTE)hIl2Cpp + CLASS_2_B8D0D905DA513A78_CLASS_1_79F32BE0A1133024__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8D0D905DA513A78_CLASS_1_79F32BE0A1133024_DISPOSE_OFFSET))(this);
	}
};
