#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_41E4860029D43D9E;
class Class_3_DFD5D1FDB9D2A4AC;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_6D05AEDEBD75F85C___C_METHOD_1_282E14BC821E3845_OFFSET UNITYSDK_OFFSET(0x175A5E10)
#define CLASS_3_6D05AEDEBD75F85C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x175A5DC0)
#define CLASS_3_6D05AEDEBD75F85C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x175A5E00)

inline static constexpr unsigned int Class_3_6D05AEDEBD75F85C___c_TypeDefinitionIndex = 62687;

class Class_3_6D05AEDEBD75F85C___c : public ::System::Object
{
public:
	static ::Class_3_6D05AEDEBD75F85C___c** StaticGet___9()
	{
		return (::Class_3_6D05AEDEBD75F85C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6D05AEDEBD75F85C___c_TypeDefinitionIndex)->GetStaticField(0x3F880);
	}
	static ::System::Action_2<::Class_3_41E4860029D43D9E*, ::Class_3_DFD5D1FDB9D2A4AC*>** StaticGet___9__2_0()
	{
		return (::System::Action_2<::Class_3_41E4860029D43D9E*, ::Class_3_DFD5D1FDB9D2A4AC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6D05AEDEBD75F85C___c_TypeDefinitionIndex)->GetStaticField(0x3F888);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_282E14BC821E3845(::Class_3_41E4860029D43D9E* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_41E4860029D43D9E*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_6D05AEDEBD75F85C___C_METHOD_1_282E14BC821E3845_OFFSET))(this, a1, a2);
	}
};
