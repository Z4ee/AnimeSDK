#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_64B9FF0AE47AFE89__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185C81F0)
#define CLASS_2_64B9FF0AE47AFE89__CTOR_OFFSET UNITYSDK_OFFSET(0x185C81E0)

inline static constexpr unsigned int Class_2_64B9FF0AE47AFE89_TypeDefinitionIndex = 66234;

class Class_2_64B9FF0AE47AFE89 : public ::System::Attribute
{
public:
	::System::UInt16 Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64B9FF0AE47AFE89__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_2_64B9FF0AE47AFE89__CTOR_1_OFFSET))(this, a1);
	}
};
