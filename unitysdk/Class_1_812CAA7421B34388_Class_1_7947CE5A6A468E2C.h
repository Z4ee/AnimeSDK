#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_812CAA7421B34388_Enum_3_ADAF6870488AC4CA.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_812CAA7421B34388_CLASS_1_7947CE5A6A468E2C_METHOD_1_AAEF6B2431872ECD_OFFSET UNITYSDK_OFFSET(0x10ADBA90)
#define CLASS_1_812CAA7421B34388_CLASS_1_7947CE5A6A468E2C__CTOR_OFFSET UNITYSDK_OFFSET(0x10ADBA80)

inline static constexpr unsigned int Class_1_812CAA7421B34388_Class_1_7947CE5A6A468E2C_TypeDefinitionIndex = 38040;

class Class_1_812CAA7421B34388_Class_1_7947CE5A6A468E2C : public ::System::Object
{
public:
	::System::Func_2<::Class_1_812CAA7421B34388_Enum_3_ADAF6870488AC4CA, ::System::Boolean>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_812CAA7421B34388_CLASS_1_7947CE5A6A468E2C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_AAEF6B2431872ECD(::Class_1_812CAA7421B34388_Enum_3_ADAF6870488AC4CA a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_812CAA7421B34388_Enum_3_ADAF6870488AC4CA))((::PBYTE)hIl2Cpp + CLASS_1_812CAA7421B34388_CLASS_1_7947CE5A6A468E2C_METHOD_1_AAEF6B2431872ECD_OFFSET))(this, a1);
	}
};
