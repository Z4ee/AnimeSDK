#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_97E659ED8D5D259C_1;
class Class_2_F5737224A0253470;
class Class_5_A6F8D19602712D95;
class Class_5_AF65C3A968E836D2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0E6C11203E2530DA_METHOD_1_7813B04986E9626D_OFFSET UNITYSDK_OFFSET(0xCD69F20)
#define CLASS_1_0E6C11203E2530DA_METHOD_1_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0xCD69BD0)
#define CLASS_1_0E6C11203E2530DA_METHOD_1_90A7B89FB4A53D7F_OFFSET UNITYSDK_OFFSET(0xCD69C40)
#define CLASS_1_0E6C11203E2530DA_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xCD69F70)
#define CLASS_1_0E6C11203E2530DA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCD69B90)
#define CLASS_1_0E6C11203E2530DA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD69A40)

inline static constexpr unsigned int Class_1_0E6C11203E2530DA_TypeDefinitionIndex = 52475;

class Class_1_0E6C11203E2530DA : public ::System::Object
{
public:
	::Class_2_F5737224A0253470* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_97E659ED8D5D259C_1*>* Field_1_1; // 0x18
	::Class_5_AF65C3A968E836D2* Field_1_2; // 0x20

	::System::Void _ctor(::Class_5_AF65C3A968E836D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_1_0E6C11203E2530DA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E6C11203E2530DA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0E6C11203E2530DA_METHOD_1_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_90A7B89FB4A53D7F(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0E6C11203E2530DA_METHOD_1_90A7B89FB4A53D7F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7813B04986E9626D(::Class_5_A6F8D19602712D95* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_A6F8D19602712D95*))((::PBYTE)hIl2Cpp + CLASS_1_0E6C11203E2530DA_METHOD_1_7813B04986E9626D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E6C11203E2530DA_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
