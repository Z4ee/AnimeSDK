#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_F0E4E2848B1D52CE___C_METHOD_1_DD4F016BB5B32AD3_OFFSET UNITYSDK_OFFSET(0x15BF5A20)
#define CLASS_1_F0E4E2848B1D52CE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15BF59D0)
#define CLASS_1_F0E4E2848B1D52CE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF5A10)

inline static constexpr unsigned int Class_1_F0E4E2848B1D52CE___c_TypeDefinitionIndex = 75972;

class Class_1_F0E4E2848B1D52CE___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__29_1()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0E4E2848B1D52CE___c_TypeDefinitionIndex)->GetStaticField(0x3C1F0);
	}
	static ::Class_1_F0E4E2848B1D52CE___c** StaticGet___9()
	{
		return (::Class_1_F0E4E2848B1D52CE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0E4E2848B1D52CE___c_TypeDefinitionIndex)->GetStaticField(0x3C1F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0E4E2848B1D52CE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E4E2848B1D52CE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_DD4F016BB5B32AD3(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F0E4E2848B1D52CE___C_METHOD_1_DD4F016BB5B32AD3_OFFSET))(this, a1);
	}
};
