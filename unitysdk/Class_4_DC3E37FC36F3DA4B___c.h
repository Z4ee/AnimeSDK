#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_1_115B2C5617F6BFB9_Class_3_6E9F6A81FCCA311A;

#define CLASS_4_DC3E37FC36F3DA4B___C_METHOD_1_1095A5533BBBB755_OFFSET UNITYSDK_OFFSET(0x159CCB60)
#define CLASS_4_DC3E37FC36F3DA4B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x159CCB10)
#define CLASS_4_DC3E37FC36F3DA4B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x159CCB50)

inline static constexpr unsigned int Class_4_DC3E37FC36F3DA4B___c_TypeDefinitionIndex = 49607;

class Class_4_DC3E37FC36F3DA4B___c : public ::System::Object
{
public:
	static ::Class_4_DC3E37FC36F3DA4B___c** StaticGet___9()
	{
		return (::Class_4_DC3E37FC36F3DA4B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_DC3E37FC36F3DA4B___c_TypeDefinitionIndex)->GetStaticField(0x4A150);
	}
	static ::Class_1_115B2C5617F6BFB9_Class_3_6E9F6A81FCCA311A<::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32>>** StaticGet___9__9_1()
	{
		return (::Class_1_115B2C5617F6BFB9_Class_3_6E9F6A81FCCA311A<::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_DC3E37FC36F3DA4B___c_TypeDefinitionIndex)->GetStaticField(0x4A158);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_DC3E37FC36F3DA4B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DC3E37FC36F3DA4B___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_1095A5533BBBB755(::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_4_DC3E37FC36F3DA4B___C_METHOD_1_1095A5533BBBB755_OFFSET))(this, a1);
	}
};
