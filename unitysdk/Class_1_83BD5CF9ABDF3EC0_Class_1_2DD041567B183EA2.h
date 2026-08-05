#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_83BD5CF9ABDF3EC0;

#define CLASS_1_83BD5CF9ABDF3EC0_CLASS_1_2DD041567B183EA2_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D580EC0)
#define CLASS_1_83BD5CF9ABDF3EC0_CLASS_1_2DD041567B183EA2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D580F40)

inline static constexpr unsigned int Class_1_83BD5CF9ABDF3EC0_Class_1_2DD041567B183EA2_TypeDefinitionIndex = 7873;

class Class_1_83BD5CF9ABDF3EC0_Class_1_2DD041567B183EA2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83BD5CF9ABDF3EC0_CLASS_1_2DD041567B183EA2__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Class_1_83BD5CF9ABDF3EC0* a1, ::Class_1_83BD5CF9ABDF3EC0* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_83BD5CF9ABDF3EC0*, ::Class_1_83BD5CF9ABDF3EC0*))((::PBYTE)hIl2Cpp + CLASS_1_83BD5CF9ABDF3EC0_CLASS_1_2DD041567B183EA2_COMPARE_OFFSET))(this, a1, a2);
	}
};
