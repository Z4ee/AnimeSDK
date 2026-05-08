#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_236FD73ABC492E3F_METHOD_1_0E37EDA63E251A06_OFFSET UNITYSDK_OFFSET(0x1AE46D10)
#define CLASS_1_236FD73ABC492E3F_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1AE473A0)
#define CLASS_1_236FD73ABC492E3F_METHOD_1_47A94975B0610A2C_OFFSET UNITYSDK_OFFSET(0x1AE47180)
#define CLASS_1_236FD73ABC492E3F_METHOD_1_6A64CBFD634AF3E4_OFFSET UNITYSDK_OFFSET(0x1AE46F90)
#define CLASS_1_236FD73ABC492E3F_METHOD_1_78B6B6C074FFBABA_OFFSET UNITYSDK_OFFSET(0x1AE46FA0)
#define CLASS_1_236FD73ABC492E3F_METHOD_1_9D9C4A963077584C_OFFSET UNITYSDK_OFFSET(0x1AE46EF0)
#define CLASS_1_236FD73ABC492E3F_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1AE474E0)
#define CLASS_1_236FD73ABC492E3F_METHOD_1_BCE33BAE272FFB64_OFFSET UNITYSDK_OFFSET(0x1AE47310)
#define CLASS_1_236FD73ABC492E3F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE46C40)
#define CLASS_1_236FD73ABC492E3F__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE46C30)

inline static constexpr unsigned int Class_1_236FD73ABC492E3F_TypeDefinitionIndex = 79387;

class Class_1_236FD73ABC492E3F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::Class_1_236FD73ABC492E3F*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Queue_1<::Class_1_236FD73ABC492E3F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_236FD73ABC492E3F_TypeDefinitionIndex)->GetStaticField(0x3B1B0);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_236FD73ABC492E3F_TypeDefinitionIndex)->GetStaticField(0x3B1B8);
	}
	::Il2CppArray<::System::Byte>* Field_1_1; // 0x10
	::System::Int32 Field_1_3; // 0x18
	::System::Boolean Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_236FD73ABC492E3F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_236FD73ABC492E3F__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_0E37EDA63E251A06(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_236FD73ABC492E3F_METHOD_1_0E37EDA63E251A06_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_6A64CBFD634AF3E4()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_236FD73ABC492E3F_METHOD_1_6A64CBFD634AF3E4_OFFSET))(this);
	}

	static ::Class_1_236FD73ABC492E3F* Method_1_78B6B6C074FFBABA()
	{
		return ((::Class_1_236FD73ABC492E3F*(*)())((::PBYTE)hIl2Cpp + CLASS_1_236FD73ABC492E3F_METHOD_1_78B6B6C074FFBABA_OFFSET))();
	}

	static ::System::Void Method_1_47A94975B0610A2C(::Class_1_236FD73ABC492E3F* a1)
	{
		return ((::System::Void(*)(::Class_1_236FD73ABC492E3F*))((::PBYTE)hIl2Cpp + CLASS_1_236FD73ABC492E3F_METHOD_1_47A94975B0610A2C_OFFSET))(a1);
	}

	::System::Void Method_1_9D9C4A963077584C(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_236FD73ABC492E3F_METHOD_1_9D9C4A963077584C_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_BCE33BAE272FFB64()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_236FD73ABC492E3F_METHOD_1_BCE33BAE272FFB64_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_236FD73ABC492E3F_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	static ::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_236FD73ABC492E3F_METHOD_1_B1936CE4DA97AA45_OFFSET))();
	}
};
