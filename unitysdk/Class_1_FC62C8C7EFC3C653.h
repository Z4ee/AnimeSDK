#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6AE08EF87FF0FFCC;
class Class_1_B6D928C52930105E;
namespace System { class Type; }

#define CLASS_1_FC62C8C7EFC3C653_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x875E950)
#define CLASS_1_FC62C8C7EFC3C653_METHOD_1_BC9F83DBB4E359FE_OFFSET UNITYSDK_OFFSET(0x875E9C0)
#define CLASS_1_FC62C8C7EFC3C653_METHOD_1_DC388DC6F82177FE_OFFSET UNITYSDK_OFFSET(0x875EB10)
#define CLASS_1_FC62C8C7EFC3C653__CTOR_OFFSET UNITYSDK_OFFSET(0x875EAC0)

inline static constexpr unsigned int Class_1_FC62C8C7EFC3C653_TypeDefinitionIndex = 50874;

class Class_1_FC62C8C7EFC3C653 : public ::System::Object
{
public:
	::Class_1_B6D928C52930105E* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_B6D928C52930105E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B6D928C52930105E*))((::PBYTE)hIl2Cpp + CLASS_1_FC62C8C7EFC3C653__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC62C8C7EFC3C653_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_BC9F83DBB4E359FE()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC62C8C7EFC3C653_METHOD_1_BC9F83DBB4E359FE_OFFSET))(this);
	}

	::System::Void Method_1_DC388DC6F82177FE(::Class_1_6AE08EF87FF0FFCC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6AE08EF87FF0FFCC*))((::PBYTE)hIl2Cpp + CLASS_1_FC62C8C7EFC3C653_METHOD_1_DC388DC6F82177FE_OFFSET))(this, a1);
	}
};
