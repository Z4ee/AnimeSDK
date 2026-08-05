#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_AB2EF02AB0EB9012_1_CLASS_2_77FB4EC43F35A2B0_1_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x16449BB0)
#define CLASS_2_AB2EF02AB0EB9012_1_CLASS_2_77FB4EC43F35A2B0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16449C50)

inline static constexpr unsigned int Class_2_AB2EF02AB0EB9012_1_Class_2_77FB4EC43F35A2B0_1_TypeDefinitionIndex = 67549;

class Class_2_AB2EF02AB0EB9012_1_Class_2_77FB4EC43F35A2B0_1 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_0; // 0x80
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_1; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB2EF02AB0EB9012_1_CLASS_2_77FB4EC43F35A2B0_1__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB2EF02AB0EB9012_1_CLASS_2_77FB4EC43F35A2B0_1_ONCREATEPROPERTY_OFFSET))(this);
	}
};
