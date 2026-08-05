#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E06DF87808F0190;

#define CLASS_1_002A7D4FC3EDA565_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE972F80)
#define CLASS_1_002A7D4FC3EDA565_METHOD_1_F75BAAE53F339ACA_OFFSET UNITYSDK_OFFSET(0xE972EF0)
#define CLASS_1_002A7D4FC3EDA565__CTOR_OFFSET UNITYSDK_OFFSET(0xE972FD0)

inline static constexpr unsigned int Class_1_002A7D4FC3EDA565_TypeDefinitionIndex = 44753;

class Class_1_002A7D4FC3EDA565 : public ::System::Object
{
public:
	::Class_1_6E06DF87808F0190* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_002A7D4FC3EDA565__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F75BAAE53F339ACA(::Class_1_6E06DF87808F0190* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E06DF87808F0190*))((::PBYTE)hIl2Cpp + CLASS_1_002A7D4FC3EDA565_METHOD_1_F75BAAE53F339ACA_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_002A7D4FC3EDA565_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
