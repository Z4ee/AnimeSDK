#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_F31DCDFDEBE1730D_CLASS_1_F7FCCA88D470E450___C_METHOD_1_3F6675527A53D9AC_OFFSET UNITYSDK_OFFSET(0x10C3C850)
#define CLASS_2_F31DCDFDEBE1730D_CLASS_1_F7FCCA88D470E450___C_METHOD_1_A32D89B92F5C9955_1_OFFSET UNITYSDK_OFFSET(0x10C3C8D0)
#define CLASS_2_F31DCDFDEBE1730D_CLASS_1_F7FCCA88D470E450___C_METHOD_1_A32D89B92F5C9955_OFFSET UNITYSDK_OFFSET(0x10C3C7B0)
#define CLASS_2_F31DCDFDEBE1730D_CLASS_1_F7FCCA88D470E450___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C3C760)
#define CLASS_2_F31DCDFDEBE1730D_CLASS_1_F7FCCA88D470E450___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10C3C7A0)

inline static constexpr unsigned int Class_2_F31DCDFDEBE1730D_Class_1_F7FCCA88D470E450___c_TypeDefinitionIndex = 70764;

class Class_2_F31DCDFDEBE1730D_Class_1_F7FCCA88D470E450___c : public ::System::Object
{
public:
	static ::Class_2_F31DCDFDEBE1730D_Class_1_F7FCCA88D470E450___c** StaticGet___9()
	{
		return (::Class_2_F31DCDFDEBE1730D_Class_1_F7FCCA88D470E450___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F31DCDFDEBE1730D_Class_1_F7FCCA88D470E450___c_TypeDefinitionIndex)->GetStaticField(0x2D800);
	}
	static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::String*>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F31DCDFDEBE1730D_Class_1_F7FCCA88D470E450___c_TypeDefinitionIndex)->GetStaticField(0x2D808);
	}
	static ::System::Comparison_1<::System::String*>** StaticGet___9__6_0()
	{
		return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F31DCDFDEBE1730D_Class_1_F7FCCA88D470E450___c_TypeDefinitionIndex)->GetStaticField(0x2D810);
	}
	static ::System::Func_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::String*>** StaticGet___9__5_1()
	{
		return (::System::Func_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F31DCDFDEBE1730D_Class_1_F7FCCA88D470E450___c_TypeDefinitionIndex)->GetStaticField(0x2D818);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F31DCDFDEBE1730D_CLASS_1_F7FCCA88D470E450___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F31DCDFDEBE1730D_CLASS_1_F7FCCA88D470E450___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_A32D89B92F5C9955(::System::ValueTuple_2<::System::Int32, ::System::Int32> a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_F31DCDFDEBE1730D_CLASS_1_F7FCCA88D470E450___C_METHOD_1_A32D89B92F5C9955_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_3F6675527A53D9AC(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F31DCDFDEBE1730D_CLASS_1_F7FCCA88D470E450___C_METHOD_1_3F6675527A53D9AC_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_A32D89B92F5C9955_1(::System::ValueTuple_2<::System::Int32, ::System::Int32> a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_F31DCDFDEBE1730D_CLASS_1_F7FCCA88D470E450___C_METHOD_1_A32D89B92F5C9955_1_OFFSET))(this, a1);
	}
};
