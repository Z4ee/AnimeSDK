#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_6E17E1A182C73032___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC021380)
#define CLASS_1_6E17E1A182C73032___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC0213C0)
#define CLASS_1_6E17E1A182C73032___C___CTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0xC0213D0)

inline static constexpr unsigned int Class_1_6E17E1A182C73032___c_TypeDefinitionIndex = 79577;

class Class_1_6E17E1A182C73032___c : public ::System::Object
{
public:
	static ::Class_1_6E17E1A182C73032___c** StaticGet___9()
	{
		return (::Class_1_6E17E1A182C73032___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E17E1A182C73032___c_TypeDefinitionIndex)->GetStaticField(0x65D00);
	}
	static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__23_0()
	{
		return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6E17E1A182C73032___c_TypeDefinitionIndex)->GetStaticField(0x65D08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __ctor_b__23_0(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6E17E1A182C73032___C___CTOR_B__23_0_OFFSET))(this, a1);
	}
};
