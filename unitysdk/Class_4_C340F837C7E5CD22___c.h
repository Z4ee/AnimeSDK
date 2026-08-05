#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

template <typename T> class Class_1_115B2C5617F6BFB9_Class_3_6E9F6A81FCCA311A;

#define CLASS_4_C340F837C7E5CD22___C_METHOD_1_74276F1253011A3F_OFFSET UNITYSDK_OFFSET(0x12A834D0)
#define CLASS_4_C340F837C7E5CD22___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A83480)
#define CLASS_4_C340F837C7E5CD22___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12A834C0)

inline static constexpr unsigned int Class_4_C340F837C7E5CD22___c_TypeDefinitionIndex = 52928;

class Class_4_C340F837C7E5CD22___c : public ::System::Object
{
public:
	static ::Class_4_C340F837C7E5CD22___c** StaticGet___9()
	{
		return (::Class_4_C340F837C7E5CD22___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_C340F837C7E5CD22___c_TypeDefinitionIndex)->GetStaticField(0x4B560);
	}
	static ::Class_1_115B2C5617F6BFB9_Class_3_6E9F6A81FCCA311A<::System::ValueTuple_2<::System::Int32, ::System::Int32>>** StaticGet___9__94_0()
	{
		return (::Class_1_115B2C5617F6BFB9_Class_3_6E9F6A81FCCA311A<::System::ValueTuple_2<::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_C340F837C7E5CD22___c_TypeDefinitionIndex)->GetStaticField(0x4B568);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_74276F1253011A3F(::System::ValueTuple_2<::System::Int32, ::System::Int32> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_4_C340F837C7E5CD22___C_METHOD_1_74276F1253011A3F_OFFSET))(this, a1);
	}
};
