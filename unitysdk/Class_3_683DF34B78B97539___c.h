#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_6A6ED67B92DC299D;
class Class_3_DFD5D1FDB9D2A4AC;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_683DF34B78B97539___C_METHOD_1_C26318A7D299125C_OFFSET UNITYSDK_OFFSET(0x13BCA1E0)
#define CLASS_3_683DF34B78B97539___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13BCA190)
#define CLASS_3_683DF34B78B97539___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13BCA1D0)

inline static constexpr unsigned int Class_3_683DF34B78B97539___c_TypeDefinitionIndex = 87225;

class Class_3_683DF34B78B97539___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_6A6ED67B92DC299D*>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_6A6ED67B92DC299D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_683DF34B78B97539___c_TypeDefinitionIndex)->GetStaticField(0x3B160);
	}
	static ::Class_3_683DF34B78B97539___c** StaticGet___9()
	{
		return (::Class_3_683DF34B78B97539___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_683DF34B78B97539___c_TypeDefinitionIndex)->GetStaticField(0x3B168);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_683DF34B78B97539___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_683DF34B78B97539___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C26318A7D299125C(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_6A6ED67B92DC299D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_6A6ED67B92DC299D*))((::PBYTE)hIl2Cpp + CLASS_3_683DF34B78B97539___C_METHOD_1_C26318A7D299125C_OFFSET))(this, a1, a2);
	}
};
