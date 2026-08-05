#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_D30DDCBCBCDAF55A___C_METHOD_1_82ECC72D992D12DD_OFFSET UNITYSDK_OFFSET(0x15FE4900)
#define CLASS_1_D30DDCBCBCDAF55A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FE48B0)
#define CLASS_1_D30DDCBCBCDAF55A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE48F0)

inline static constexpr unsigned int Class_1_D30DDCBCBCDAF55A___c_TypeDefinitionIndex = 71147;

class Class_1_D30DDCBCBCDAF55A___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__100_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D30DDCBCBCDAF55A___c_TypeDefinitionIndex)->GetStaticField(0x38FE0);
	}
	static ::Class_1_D30DDCBCBCDAF55A___c** StaticGet___9()
	{
		return (::Class_1_D30DDCBCBCDAF55A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D30DDCBCBCDAF55A___c_TypeDefinitionIndex)->GetStaticField(0x38FE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D30DDCBCBCDAF55A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D30DDCBCBCDAF55A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_82ECC72D992D12DD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D30DDCBCBCDAF55A___C_METHOD_1_82ECC72D992D12DD_OFFSET))(this, a1, a2);
	}
};
