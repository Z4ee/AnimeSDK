#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_31D08DC027B35B8F_CLASS_2_77FB4EC43F35A2B0_7_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x12372000)
#define CLASS_2_31D08DC027B35B8F_CLASS_2_77FB4EC43F35A2B0_7__CTOR_OFFSET UNITYSDK_OFFSET(0x12372080)

inline static constexpr unsigned int Class_2_31D08DC027B35B8F_Class_2_77FB4EC43F35A2B0_7_TypeDefinitionIndex = 91397;

class Class_2_31D08DC027B35B8F_Class_2_77FB4EC43F35A2B0_7 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D08DC027B35B8F_CLASS_2_77FB4EC43F35A2B0_7__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D08DC027B35B8F_CLASS_2_77FB4EC43F35A2B0_7_ONCREATEPROPERTY_OFFSET))(this);
	}
};
