#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3A662D7AB244306C_Class_1_04A718CFB2B0DB18_12;
class Class_2_78783A73BC2E7725;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3A662D7AB244306C_METHOD_1_475A672F5C8AC14D_OFFSET UNITYSDK_OFFSET(0x16096730)
#define CLASS_1_3A662D7AB244306C_METHOD_1_817ADB949107EF96_OFFSET UNITYSDK_OFFSET(0x16097110)
#define CLASS_1_3A662D7AB244306C_METHOD_1_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x16096D30)
#define CLASS_1_3A662D7AB244306C__CCTOR_OFFSET UNITYSDK_OFFSET(0x160966A0)

inline static constexpr unsigned int Class_1_3A662D7AB244306C_TypeDefinitionIndex = 50245;

class Class_1_3A662D7AB244306C : public ::System::Object
{
public:
	static ::Class_2_78783A73BC2E7725** StaticGet_Field_1_2()
	{
		return (::Class_2_78783A73BC2E7725**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A662D7AB244306C_TypeDefinitionIndex)->GetStaticField(0x2FF90);
	}
	static ::System::Collections::Generic::List_1<::Class_1_3A662D7AB244306C_Class_1_04A718CFB2B0DB18_12*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_1_3A662D7AB244306C_Class_1_04A718CFB2B0DB18_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A662D7AB244306C_TypeDefinitionIndex)->GetStaticField(0x2FF98);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A662D7AB244306C_TypeDefinitionIndex)->GetStaticField(0xADF0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3A662D7AB244306C_TypeDefinitionIndex)->GetStaticField(0xADF1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3A662D7AB244306C__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_475A672F5C8AC14D(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3A662D7AB244306C_METHOD_1_475A672F5C8AC14D_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_8DC652D916C182B2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3A662D7AB244306C_METHOD_1_8DC652D916C182B2_OFFSET))();
	}

	static ::System::Void Method_1_817ADB949107EF96(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_3A662D7AB244306C_METHOD_1_817ADB949107EF96_OFFSET))(a1);
	}
};
