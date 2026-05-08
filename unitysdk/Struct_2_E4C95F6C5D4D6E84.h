#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_2E700FB2B007CDD3_OFFSET UNITYSDK_OFFSET(0x381830)
#define STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x749720)
#define STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_5476881E8721F7AD_OFFSET UNITYSDK_OFFSET(0x123E7720)
#define STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x2E5940)
#define STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_81D2FBB04F1B4526_OFFSET UNITYSDK_OFFSET(0x123E75D0)
#define STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_9492CE5249143740_OFFSET UNITYSDK_OFFSET(0x123E74A0)
#define STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_A6CA110A65AC2194_OFFSET UNITYSDK_OFFSET(0x123E7300)
#define STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_C8BA04CF72E4997A_OFFSET UNITYSDK_OFFSET(0x28B580)
#define STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_F877676CDE5E42C2_OFFSET UNITYSDK_OFFSET(0x123E7380)
#define STRUCT_2_E4C95F6C5D4D6E84_TOSTRING_OFFSET UNITYSDK_OFFSET(0x757350)
#define STRUCT_2_E4C95F6C5D4D6E84__CTOR_1_OFFSET UNITYSDK_OFFSET(0x757330)
#define STRUCT_2_E4C95F6C5D4D6E84__CTOR_OFFSET UNITYSDK_OFFSET(0x469CD0)

inline static constexpr unsigned int Struct_2_E4C95F6C5D4D6E84_TypeDefinitionIndex = 79988;

struct alignas(8) Struct_2_E4C95F6C5D4D6E84
{
	::System::String* Field_2_0; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* Field_2_1; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_E4C95F6C5D4D6E84__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_E4C95F6C5D4D6E84__CTOR_1_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E4C95F6C5D4D6E84_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}

	static ::Struct_2_E4C95F6C5D4D6E84 Method_2_A6CA110A65AC2194(::System::String* a1)
	{
		return ((::Struct_2_E4C95F6C5D4D6E84(*)(::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_A6CA110A65AC2194_OFFSET))(a1);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	/*
	static ::Struct_2_E4C95F6C5D4D6E84 Method_2_F877676CDE5E42C2(::System::ValueTuple_2<::System::String*, ::System::String*> a1)
	{
		return ((::Struct_2_E4C95F6C5D4D6E84(*)(::System::ValueTuple_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_F877676CDE5E42C2_OFFSET))(a1);
	}
	*/

	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* Method_2_C8BA04CF72E4997A()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_C8BA04CF72E4997A_OFFSET))(this);
	}

	::System::Void Method_2_2E700FB2B007CDD3(::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_2E700FB2B007CDD3_OFFSET))(this, a1);
	}

	/*
	static ::Struct_2_E4C95F6C5D4D6E84 Method_2_9492CE5249143740(::System::ValueTuple_3<::System::String*, ::System::String*, ::System::String*> a1)
	{
		return ((::Struct_2_E4C95F6C5D4D6E84(*)(::System::ValueTuple_3<::System::String*, ::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_9492CE5249143740_OFFSET))(a1);
	}
	*/

	/*
	static ::Struct_2_E4C95F6C5D4D6E84 Method_2_81D2FBB04F1B4526(::System::ValueTuple_4<::System::String*, ::System::String*, ::System::String*, ::System::String*> a1)
	{
		return ((::Struct_2_E4C95F6C5D4D6E84(*)(::System::ValueTuple_4<::System::String*, ::System::String*, ::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_81D2FBB04F1B4526_OFFSET))(a1);
	}
	*/

	static ::Struct_2_E4C95F6C5D4D6E84 Method_2_5476881E8721F7AD(::Il2CppArray<::System::String*>* a1)
	{
		return ((::Struct_2_E4C95F6C5D4D6E84(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_5476881E8721F7AD_OFFSET))(a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E4C95F6C5D4D6E84_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};
