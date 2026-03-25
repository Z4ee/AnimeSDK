#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0CF1228B0978AEEF.h"

#define CLASS_2_2F8A62C4E6B4ACBA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE468ED0)
#define CLASS_2_2F8A62C4E6B4ACBA_METHOD_2_D7C20B01999BA144_OFFSET UNITYSDK_OFFSET(0xE468DE0)
#define CLASS_2_2F8A62C4E6B4ACBA__CTOR_OFFSET UNITYSDK_OFFSET(0xE468F20)

inline static constexpr unsigned int Class_2_2F8A62C4E6B4ACBA_TypeDefinitionIndex = 62489;

class Class_2_2F8A62C4E6B4ACBA : public ::Class_1_0CF1228B0978AEEF
{
public:
	::System::Single Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F8A62C4E6B4ACBA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D7C20B01999BA144(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2F8A62C4E6B4ACBA_METHOD_2_D7C20B01999BA144_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F8A62C4E6B4ACBA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
