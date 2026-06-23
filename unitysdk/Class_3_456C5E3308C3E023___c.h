#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_D2084E0C2DD39509;
class Class_3_DFD5D1FDB9D2A4AC;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_456C5E3308C3E023___C_METHOD_1_D25406433BDF03C7_OFFSET UNITYSDK_OFFSET(0x15577150)
#define CLASS_3_456C5E3308C3E023___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15577100)
#define CLASS_3_456C5E3308C3E023___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15577140)

inline static constexpr unsigned int Class_3_456C5E3308C3E023___c_TypeDefinitionIndex = 78636;

class Class_3_456C5E3308C3E023___c : public ::System::Object
{
public:
	static ::Class_3_456C5E3308C3E023___c** StaticGet___9()
	{
		return (::Class_3_456C5E3308C3E023___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_456C5E3308C3E023___c_TypeDefinitionIndex)->GetStaticField(0x363D0);
	}
	static ::System::Action_2<::Class_3_D2084E0C2DD39509*, ::Class_3_DFD5D1FDB9D2A4AC*>** StaticGet___9__7_0()
	{
		return (::System::Action_2<::Class_3_D2084E0C2DD39509*, ::Class_3_DFD5D1FDB9D2A4AC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_456C5E3308C3E023___c_TypeDefinitionIndex)->GetStaticField(0x363D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D25406433BDF03C7(::Class_3_D2084E0C2DD39509* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D2084E0C2DD39509*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_456C5E3308C3E023___C_METHOD_1_D25406433BDF03C7_OFFSET))(this, a1, a2);
	}
};
