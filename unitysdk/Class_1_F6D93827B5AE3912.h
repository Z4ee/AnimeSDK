#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_181A7F9409C60DBC;
class Class_2_E9C9AAD7C711B3E3;
class Class_3_543326C044264182;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_F6D93827B5AE3912_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0754D0)
#define CLASS_1_F6D93827B5AE3912_METHOD_1_3ED8F7471B260C75_OFFSET UNITYSDK_OFFSET(0xA075B90)
#define CLASS_1_F6D93827B5AE3912_METHOD_1_915AD43F6095E620_OFFSET UNITYSDK_OFFSET(0xA076210)
#define CLASS_1_F6D93827B5AE3912__CTOR_OFFSET UNITYSDK_OFFSET(0xA0753F0)

inline static constexpr unsigned int Class_1_F6D93827B5AE3912_TypeDefinitionIndex = 71435;

class Class_1_F6D93827B5AE3912 : public ::System::Object
{
public:
	::Class_3_543326C044264182* Field_1_1; // 0x10
	::Class_2_E9C9AAD7C711B3E3* Field_1_0; // 0x18
	::System::Collections::Generic::HashSet_1<::Class_2_181A7F9409C60DBC*>* Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_E9C9AAD7C711B3E3* a1, ::Class_3_543326C044264182* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E9C9AAD7C711B3E3*, ::Class_3_543326C044264182*))((::PBYTE)hIl2Cpp + CLASS_1_F6D93827B5AE3912__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6D93827B5AE3912_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_3ED8F7471B260C75(::Class_2_181A7F9409C60DBC* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F6D93827B5AE3912_METHOD_1_3ED8F7471B260C75_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_915AD43F6095E620(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_F6D93827B5AE3912_METHOD_1_915AD43F6095E620_OFFSET))(this, a1);
	}
};
