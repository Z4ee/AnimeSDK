#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A191518F735366A8;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_AED8C0851950A397___C_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18613BE0)
#define CLASS_1_AED8C0851950A397___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18613B90)
#define CLASS_1_AED8C0851950A397___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18613BD0)

inline static constexpr unsigned int Class_1_AED8C0851950A397___c_TypeDefinitionIndex = 70149;

class Class_1_AED8C0851950A397___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_A191518F735366A8*>** StaticGet___9__12_0()
	{
		return (::System::Action_1<::Class_1_A191518F735366A8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AED8C0851950A397___c_TypeDefinitionIndex)->GetStaticField(0x2EE20);
	}
	static ::Class_1_AED8C0851950A397___c** StaticGet___9()
	{
		return (::Class_1_AED8C0851950A397___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AED8C0851950A397___c_TypeDefinitionIndex)->GetStaticField(0x2EE28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_A191518F735366A8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A191518F735366A8*))((::PBYTE)hIl2Cpp + CLASS_1_AED8C0851950A397___C_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}
};
