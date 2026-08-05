#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"

template <typename T> class Class_0_16E4307DCC419505_159;

#define CLASS_2_183E70DB1BBBCA90_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x135EFD00)
#define CLASS_2_183E70DB1BBBCA90_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x135EFCB0)
#define CLASS_2_183E70DB1BBBCA90__CTOR_OFFSET UNITYSDK_OFFSET(0x135EFDA0)

inline static constexpr unsigned int Class_2_183E70DB1BBBCA90_TypeDefinitionIndex = 50383;

class Class_2_183E70DB1BBBCA90 : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_1; // 0x80
	::Class_0_16E4307DCC419505_159<::System::Boolean>* Field_2_0; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_183E70DB1BBBCA90__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_183E70DB1BBBCA90_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_183E70DB1BBBCA90_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
