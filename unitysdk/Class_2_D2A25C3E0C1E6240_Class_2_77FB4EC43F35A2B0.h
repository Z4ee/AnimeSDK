#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_D2A25C3E0C1E6240_CLASS_2_77FB4EC43F35A2B0_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1AF2B3F0)
#define CLASS_2_D2A25C3E0C1E6240_CLASS_2_77FB4EC43F35A2B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF2B470)

inline static constexpr unsigned int Class_2_D2A25C3E0C1E6240_Class_2_77FB4EC43F35A2B0_TypeDefinitionIndex = 58604;

class Class_2_D2A25C3E0C1E6240_Class_2_77FB4EC43F35A2B0 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2A25C3E0C1E6240_CLASS_2_77FB4EC43F35A2B0__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2A25C3E0C1E6240_CLASS_2_77FB4EC43F35A2B0_ONCREATEPROPERTY_OFFSET))(this);
	}
};
