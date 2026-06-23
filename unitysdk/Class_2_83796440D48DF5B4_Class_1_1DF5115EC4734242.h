#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_2_83796440D48DF5B4_CLASS_1_1DF5115EC4734242_COMPARE_OFFSET UNITYSDK_OFFSET(0x1AAB7A80)
#define CLASS_2_83796440D48DF5B4_CLASS_1_1DF5115EC4734242__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAB7AE0)

inline static constexpr unsigned int Class_2_83796440D48DF5B4_Class_1_1DF5115EC4734242_TypeDefinitionIndex = 46855;

class Class_2_83796440D48DF5B4_Class_1_1DF5115EC4734242 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_CLASS_1_1DF5115EC4734242__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_83796440D48DF5B4_CLASS_1_1DF5115EC4734242_COMPARE_OFFSET))(this, a1, a2);
	}
};
