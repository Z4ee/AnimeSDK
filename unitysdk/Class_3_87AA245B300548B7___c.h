#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_8026BF886B2570E0;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_87AA245B300548B7___C_METHOD_1_331A2272D8C0851A_OFFSET UNITYSDK_OFFSET(0x17F26F30)
#define CLASS_3_87AA245B300548B7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F26EE0)
#define CLASS_3_87AA245B300548B7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F26F20)

inline static constexpr unsigned int Class_3_87AA245B300548B7___c_TypeDefinitionIndex = 83535;

class Class_3_87AA245B300548B7___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_2_8026BF886B2570E0*>** StaticGet___9__30_0()
	{
		return (::System::Action_1<::Class_2_8026BF886B2570E0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_87AA245B300548B7___c_TypeDefinitionIndex)->GetStaticField(0x38E00);
	}
	static ::Class_3_87AA245B300548B7___c** StaticGet___9()
	{
		return (::Class_3_87AA245B300548B7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_87AA245B300548B7___c_TypeDefinitionIndex)->GetStaticField(0x38E08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_331A2272D8C0851A(::Class_2_8026BF886B2570E0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8026BF886B2570E0*))((::PBYTE)hIl2Cpp + CLASS_3_87AA245B300548B7___C_METHOD_1_331A2272D8C0851A_OFFSET))(this, a1);
	}
};
