#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_7AC8164CC7B8672E___C_METHOD_1_82ECC72D992D12DD_OFFSET UNITYSDK_OFFSET(0x1150AD10)
#define CLASS_1_7AC8164CC7B8672E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1150ACC0)
#define CLASS_1_7AC8164CC7B8672E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1150AD00)

inline static constexpr unsigned int Class_1_7AC8164CC7B8672E___c_TypeDefinitionIndex = 59296;

class Class_1_7AC8164CC7B8672E___c : public ::System::Object
{
public:
	static ::Class_1_7AC8164CC7B8672E___c** StaticGet___9()
	{
		return (::Class_1_7AC8164CC7B8672E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7AC8164CC7B8672E___c_TypeDefinitionIndex)->GetStaticField(0x3B7F0);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7AC8164CC7B8672E___c_TypeDefinitionIndex)->GetStaticField(0x3B7F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7AC8164CC7B8672E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AC8164CC7B8672E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_82ECC72D992D12DD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7AC8164CC7B8672E___C_METHOD_1_82ECC72D992D12DD_OFFSET))(this, a1, a2);
	}
};
