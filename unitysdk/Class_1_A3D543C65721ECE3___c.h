#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_A3D543C65721ECE3___C_METHOD_1_82ECC72D992D12DD_1_OFFSET UNITYSDK_OFFSET(0x1C35D600)
#define CLASS_1_A3D543C65721ECE3___C_METHOD_1_82ECC72D992D12DD_OFFSET UNITYSDK_OFFSET(0x1C35D5F0)
#define CLASS_1_A3D543C65721ECE3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C35D5A0)
#define CLASS_1_A3D543C65721ECE3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C35D5E0)

inline static constexpr unsigned int Class_1_A3D543C65721ECE3___c_TypeDefinitionIndex = 14184;

class Class_1_A3D543C65721ECE3___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__19_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A3D543C65721ECE3___c_TypeDefinitionIndex)->GetStaticField(0x78D0);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__19_1()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A3D543C65721ECE3___c_TypeDefinitionIndex)->GetStaticField(0x78D8);
	}
	static ::Class_1_A3D543C65721ECE3___c** StaticGet___9()
	{
		return (::Class_1_A3D543C65721ECE3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A3D543C65721ECE3___c_TypeDefinitionIndex)->GetStaticField(0x78E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A3D543C65721ECE3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3D543C65721ECE3___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_82ECC72D992D12DD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A3D543C65721ECE3___C_METHOD_1_82ECC72D992D12DD_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_82ECC72D992D12DD_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A3D543C65721ECE3___C_METHOD_1_82ECC72D992D12DD_1_OFFSET))(this, a1, a2);
	}
};
