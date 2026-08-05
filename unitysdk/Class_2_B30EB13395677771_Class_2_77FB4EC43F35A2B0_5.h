#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_B30EB13395677771_CLASS_2_77FB4EC43F35A2B0_5_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x17ECD160)
#define CLASS_2_B30EB13395677771_CLASS_2_77FB4EC43F35A2B0_5__CTOR_OFFSET UNITYSDK_OFFSET(0x17ECD1E0)

inline static constexpr unsigned int Class_2_B30EB13395677771_Class_2_77FB4EC43F35A2B0_5_TypeDefinitionIndex = 80914;

class Class_2_B30EB13395677771_Class_2_77FB4EC43F35A2B0_5 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B30EB13395677771_CLASS_2_77FB4EC43F35A2B0_5__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B30EB13395677771_CLASS_2_77FB4EC43F35A2B0_5_ONCREATEPROPERTY_OFFSET))(this);
	}
};
