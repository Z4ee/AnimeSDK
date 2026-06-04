#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3BFB14B0511B64BC.h"
#include "unitysdk/System/Object.h"

class Class_1_F4428E4EEF88CB9C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_31F7AA61A6C51B11_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0xABA6720)
#define CLASS_1_31F7AA61A6C51B11_METHOD_1_3456633D994FB6C5_OFFSET UNITYSDK_OFFSET(0xABA63C0)
#define CLASS_1_31F7AA61A6C51B11_METHOD_1_806CCDA5EF53FA01_OFFSET UNITYSDK_OFFSET(0xABA70F0)
#define CLASS_1_31F7AA61A6C51B11_METHOD_1_8D0A2531C88B32B1_OFFSET UNITYSDK_OFFSET(0xABA6ED0)
#define CLASS_1_31F7AA61A6C51B11_METHOD_1_FAE2DB201C7A04D9_OFFSET UNITYSDK_OFFSET(0xABA7460)
#define CLASS_1_31F7AA61A6C51B11__CCTOR_OFFSET UNITYSDK_OFFSET(0xABA7800)
#define CLASS_1_31F7AA61A6C51B11__CTOR_OFFSET UNITYSDK_OFFSET(0xABA6300)

inline static constexpr unsigned int Class_1_31F7AA61A6C51B11_TypeDefinitionIndex = 65675;

class Class_1_31F7AA61A6C51B11 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_31F7AA61A6C51B11_TypeDefinitionIndex)->GetStaticField(0x4B30);
	}
	::Il2CppArray<::Class_1_31F7AA61A6C51B11*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_F4428E4EEF88CB9C*>* Field_1_2; // 0x18
	::Struct_2_3BFB14B0511B64BC Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x34

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_31F7AA61A6C51B11__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_31F7AA61A6C51B11__CCTOR_OFFSET))();
	}

	::System::Void Method_1_3456633D994FB6C5(::Class_1_F4428E4EEF88CB9C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F4428E4EEF88CB9C*))((::PBYTE)hIl2Cpp + CLASS_1_31F7AA61A6C51B11_METHOD_1_3456633D994FB6C5_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D0A2531C88B32B1(::Class_1_F4428E4EEF88CB9C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F4428E4EEF88CB9C*))((::PBYTE)hIl2Cpp + CLASS_1_31F7AA61A6C51B11_METHOD_1_8D0A2531C88B32B1_OFFSET))(this, a1);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31F7AA61A6C51B11_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_1_806CCDA5EF53FA01(::Struct_2_3BFB14B0511B64BC a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3BFB14B0511B64BC, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_31F7AA61A6C51B11_METHOD_1_806CCDA5EF53FA01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FAE2DB201C7A04D9(::Struct_2_3BFB14B0511B64BC a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3BFB14B0511B64BC, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_31F7AA61A6C51B11_METHOD_1_FAE2DB201C7A04D9_OFFSET))(this, a1, a2);
	}
};
