#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"

class Class_2_07A2E3D9266E9604;
namespace System { template <typename T> class Func_1; }

#define CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_2B5077F1F7E1182E_OFFSET UNITYSDK_OFFSET(0x13B07D00)
#define CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_8DA2C45C7019FA48_OFFSET UNITYSDK_OFFSET(0x13B07F70)
#define CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13B08090)
#define CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_E06ECA39EB16C571_OFFSET UNITYSDK_OFFSET(0x13B07E70)
#define CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x13B07B60)
#define CLASS_1_8AE7A2C15AA5D5A0__CTOR_OFFSET UNITYSDK_OFFSET(0x13B07B50)

inline static constexpr unsigned int Class_1_8AE7A2C15AA5D5A0_TypeDefinitionIndex = 55959;

class Class_1_8AE7A2C15AA5D5A0 : public ::System::Object
{
public:
	static ::Class_2_07A2E3D9266E9604** StaticGet_Field_1_0()
	{
		return (::Class_2_07A2E3D9266E9604**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8AE7A2C15AA5D5A0_TypeDefinitionIndex)->GetStaticField(0x36640);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AE7A2C15AA5D5A0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Int32 Method_1_E06ECA39EB16C571()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_E06ECA39EB16C571_OFFSET))(this);
	}

	::System::Int32 Method_1_8DA2C45C7019FA48()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_8DA2C45C7019FA48_OFFSET))(this);
	}

	::System::Void Method_1_2B5077F1F7E1182E(::Share::ENotificationBadgeType a1, ::System::Func_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_2B5077F1F7E1182E_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AE7A2C15AA5D5A0_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
