#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_CA182B9B6890D069;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_D240CE8B333D0462___C_METHOD_1_611A54F187C56107_OFFSET UNITYSDK_OFFSET(0x112643F0)
#define CLASS_2_D240CE8B333D0462___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x112643A0)
#define CLASS_2_D240CE8B333D0462___C__CTOR_OFFSET UNITYSDK_OFFSET(0x112643E0)

inline static constexpr unsigned int Class_2_D240CE8B333D0462___c_TypeDefinitionIndex = 47709;

class Class_2_D240CE8B333D0462___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_2_CA182B9B6890D069*, ::System::Int32>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_2_CA182B9B6890D069*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D240CE8B333D0462___c_TypeDefinitionIndex)->GetStaticField(0x33D80);
	}
	static ::Class_2_D240CE8B333D0462___c** StaticGet___9()
	{
		return (::Class_2_D240CE8B333D0462___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D240CE8B333D0462___c_TypeDefinitionIndex)->GetStaticField(0x33D88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D240CE8B333D0462___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D240CE8B333D0462___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_611A54F187C56107(::Class_2_CA182B9B6890D069* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA182B9B6890D069*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D240CE8B333D0462___C_METHOD_1_611A54F187C56107_OFFSET))(this, a1, a2);
	}
};
