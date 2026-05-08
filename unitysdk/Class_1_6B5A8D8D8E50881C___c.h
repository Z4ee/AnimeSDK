#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_6B5A8D8D8E50881C___C_METHOD_1_D43DFE5A450D9F0E_OFFSET UNITYSDK_OFFSET(0x140490D0)
#define CLASS_1_6B5A8D8D8E50881C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14049080)
#define CLASS_1_6B5A8D8D8E50881C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x140490C0)

inline static constexpr unsigned int Class_1_6B5A8D8D8E50881C___c_TypeDefinitionIndex = 46837;

class Class_1_6B5A8D8D8E50881C___c : public ::System::Object
{
public:
	static ::Class_1_6B5A8D8D8E50881C___c** StaticGet___9()
	{
		return (::Class_1_6B5A8D8D8E50881C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B5A8D8D8E50881C___c_TypeDefinitionIndex)->GetStaticField(0x3E040);
	}
	static ::System::Comparison_1<::Foundation::Tuple_2<::System::Int32, ::System::Int32>>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::Foundation::Tuple_2<::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B5A8D8D8E50881C___c_TypeDefinitionIndex)->GetStaticField(0x3E048);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B5A8D8D8E50881C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B5A8D8D8E50881C___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_D43DFE5A450D9F0E(::Foundation::Tuple_2<::System::Int32, ::System::Int32> a1, ::Foundation::Tuple_2<::System::Int32, ::System::Int32> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Foundation::Tuple_2<::System::Int32, ::System::Int32>, ::Foundation::Tuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_6B5A8D8D8E50881C___C_METHOD_1_D43DFE5A450D9F0E_OFFSET))(this, a1, a2);
	}
};
