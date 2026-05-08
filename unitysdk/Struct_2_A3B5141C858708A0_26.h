#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_A3B5141C858708A0_26_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x28B580)
#define STRUCT_2_A3B5141C858708A0_26_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x164D7C10)
#define STRUCT_2_A3B5141C858708A0_26_METHOD_2_574A0EFDE858A687_OFFSET UNITYSDK_OFFSET(0x7269B0)
#define STRUCT_2_A3B5141C858708A0_26_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x164D7C70)
#define STRUCT_2_A3B5141C858708A0_26_METHOD_2_E243B4F73EA9A980_OFFSET UNITYSDK_OFFSET(0x7AF970)
#define STRUCT_2_A3B5141C858708A0_26_METHOD_2_E687B8530C04E50A_OFFSET UNITYSDK_OFFSET(0x7AF980)
#define STRUCT_2_A3B5141C858708A0_26___INIT_OFFSET UNITYSDK_OFFSET(0x7AF950)

inline static constexpr unsigned int Struct_2_A3B5141C858708A0_26_TypeDefinitionIndex = 18382;

struct alignas(8) Struct_2_A3B5141C858708A0_26
{
	::FlatBuffers::Table Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* Field_2_1; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A3B5141C858708A0_26_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_A3B5141C858708A0_26___INIT_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Method_2_E243B4F73EA9A980()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A3B5141C858708A0_26_METHOD_2_E243B4F73EA9A980_OFFSET))(this);
	}

	::System::Int32 Method_2_574A0EFDE858A687()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A3B5141C858708A0_26_METHOD_2_574A0EFDE858A687_OFFSET))(this);
	}

	::Struct_2_A3B5141C858708A0_26 Method_2_E687B8530C04E50A(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_A3B5141C858708A0_26(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_A3B5141C858708A0_26_METHOD_2_E687B8530C04E50A_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_A3B5141C858708A0_26 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_A3B5141C858708A0_26 a2)
	{
		return ((::Struct_2_A3B5141C858708A0_26(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_A3B5141C858708A0_26))((::PBYTE)hIl2Cpp + STRUCT_2_A3B5141C858708A0_26_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}

	static ::Struct_2_A3B5141C858708A0_26 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_A3B5141C858708A0_26(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_A3B5141C858708A0_26_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}
};
