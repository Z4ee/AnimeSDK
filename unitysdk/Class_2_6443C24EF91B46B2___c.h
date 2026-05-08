#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_6443C24EF91B46B2___C_METHOD_1_DD4F016BB5B32AD3_OFFSET UNITYSDK_OFFSET(0x13648810)
#define CLASS_2_6443C24EF91B46B2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x136487C0)
#define CLASS_2_6443C24EF91B46B2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13648800)

inline static constexpr unsigned int Class_2_6443C24EF91B46B2___c_TypeDefinitionIndex = 50382;

class Class_2_6443C24EF91B46B2___c : public ::System::Object
{
public:
	static ::Class_2_6443C24EF91B46B2___c** StaticGet___9()
	{
		return (::Class_2_6443C24EF91B46B2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6443C24EF91B46B2___c_TypeDefinitionIndex)->GetStaticField(0x39BA0);
	}
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__12_3()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6443C24EF91B46B2___c_TypeDefinitionIndex)->GetStaticField(0x39BA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6443C24EF91B46B2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6443C24EF91B46B2___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_DD4F016BB5B32AD3(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6443C24EF91B46B2___C_METHOD_1_DD4F016BB5B32AD3_OFFSET))(this, a1);
	}
};
