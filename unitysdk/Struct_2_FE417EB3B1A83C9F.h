#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_3_D3046EEB81152505;
namespace System { class Object; }
template <typename T1, typename T2> class Class_3_34849C4AB5143A64;

inline static constexpr unsigned int Struct_2_FE417EB3B1A83C9F_TypeDefinitionIndex = 78191;

template <typename TPose, typename TIntrinsics>
struct Struct_2_FE417EB3B1A83C9F
{
	::System::Single Field_2_0; // 0x0
	::Class_3_D3046EEB81152505* Field_2_7; // 0x0
	::Class_3_34849C4AB5143A64<TPose, TIntrinsics>* Field_2_6; // 0x0
	static ::Struct_2_FE417EB3B1A83C9F<TPose, TIntrinsics>* StaticGet_Field_2_5()
	{
		return (::Struct_2_FE417EB3B1A83C9F<TPose, TIntrinsics>*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_FE417EB3B1A83C9F_TypeDefinitionIndex)->GetStaticField(0x0);
	}
};
