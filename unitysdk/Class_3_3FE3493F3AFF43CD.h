#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_250DE1D032671F25.h"

#define CLASS_3_3FE3493F3AFF43CD_METHOD_3_EE7C807F0EB7EDA2_OFFSET UNITYSDK_OFFSET(0x186E8500)
#define CLASS_3_3FE3493F3AFF43CD__CTOR_OFFSET UNITYSDK_OFFSET(0x186E8560)

inline static constexpr unsigned int Class_3_3FE3493F3AFF43CD_TypeDefinitionIndex = 70445;

class Class_3_3FE3493F3AFF43CD : public ::Class_2_250DE1D032671F25
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FE3493F3AFF43CD__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_EE7C807F0EB7EDA2(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3FE3493F3AFF43CD_METHOD_3_EE7C807F0EB7EDA2_OFFSET))(this, a1, a2);
	}
};
