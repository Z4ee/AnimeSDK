#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

#define CLASS_2_F7831B32701D2DCC_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x109F1330)
#define CLASS_2_F7831B32701D2DCC__CTOR_OFFSET UNITYSDK_OFFSET(0x109F1370)

inline static constexpr unsigned int Class_2_F7831B32701D2DCC_TypeDefinitionIndex = 55488;

class Class_2_F7831B32701D2DCC : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7831B32701D2DCC__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7831B32701D2DCC_ONCREATEPROPERTY_OFFSET))(this);
	}
};
