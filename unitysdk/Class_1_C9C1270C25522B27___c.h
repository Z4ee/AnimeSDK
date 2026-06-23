#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_C9C1270C25522B27___C_METHOD_1_82ECC72D992D12DD_OFFSET UNITYSDK_OFFSET(0x1225B660)
#define CLASS_1_C9C1270C25522B27___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1225B610)
#define CLASS_1_C9C1270C25522B27___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1225B650)

inline static constexpr unsigned int Class_1_C9C1270C25522B27___c_TypeDefinitionIndex = 83544;

class Class_1_C9C1270C25522B27___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__8_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9C1270C25522B27___c_TypeDefinitionIndex)->GetStaticField(0x4A9D0);
	}
	static ::Class_1_C9C1270C25522B27___c** StaticGet___9()
	{
		return (::Class_1_C9C1270C25522B27___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9C1270C25522B27___c_TypeDefinitionIndex)->GetStaticField(0x4A9D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9C1270C25522B27___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9C1270C25522B27___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_82ECC72D992D12DD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C9C1270C25522B27___C_METHOD_1_82ECC72D992D12DD_OFFSET))(this, a1, a2);
	}
};
