#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_1862835F8661A21F_399_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x28B580)
#define STRUCT_2_1862835F8661A21F_399_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x11F7B270)
#define STRUCT_2_1862835F8661A21F_399_METHOD_2_574A0EFDE858A687_OFFSET UNITYSDK_OFFSET(0x7269B0)
#define STRUCT_2_1862835F8661A21F_399_METHOD_2_663CC3D0C92D0439_OFFSET UNITYSDK_OFFSET(0x741A90)
#define STRUCT_2_1862835F8661A21F_399_METHOD_2_6C957C84B1F40239_OFFSET UNITYSDK_OFFSET(0x7268B0)
#define STRUCT_2_1862835F8661A21F_399_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x11F7B310)
#define STRUCT_2_1862835F8661A21F_399_METHOD_2_C54EE7C400F446B0_OFFSET UNITYSDK_OFFSET(0x741AE0)
#define STRUCT_2_1862835F8661A21F_399_METHOD_2_E687B8530C04E50A_OFFSET UNITYSDK_OFFSET(0x741AA0)
#define STRUCT_2_1862835F8661A21F_399___INIT_OFFSET UNITYSDK_OFFSET(0x741A70)

inline static constexpr unsigned int Struct_2_1862835F8661A21F_399_TypeDefinitionIndex = 11052;

struct alignas(8) Struct_2_1862835F8661A21F_399
{
	::FlatBuffers::Table Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_1; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_399_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_399___INIT_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::Int32>* Method_2_663CC3D0C92D0439()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_399_METHOD_2_663CC3D0C92D0439_OFFSET))(this);
	}

	static ::Struct_2_1862835F8661A21F_399 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_1862835F8661A21F_399 a2)
	{
		return ((::Struct_2_1862835F8661A21F_399(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_1862835F8661A21F_399))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_399_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}

	::System::Int32 Method_2_574A0EFDE858A687()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_399_METHOD_2_574A0EFDE858A687_OFFSET))(this);
	}

	static ::Struct_2_1862835F8661A21F_399 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_1862835F8661A21F_399(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_399_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}

	::Struct_2_1862835F8661A21F_399 Method_2_E687B8530C04E50A(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_1862835F8661A21F_399(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_399_METHOD_2_E687B8530C04E50A_OFFSET))(this, a1, a2);
	}

	/*
	::System::Nullable_1<::Struct_2_3E75877A2888D88A_446> Method_2_C54EE7C400F446B0(::System::Int32 a1, ::System::Int32& a2)
	{
		return ((::System::Nullable_1<::Struct_2_3E75877A2888D88A_446>(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_399_METHOD_2_C54EE7C400F446B0_OFFSET))(this, a1, a2);
	}
	*/

	/*
	::System::Nullable_1<::Struct_2_3E75877A2888D88A_446> Method_2_6C957C84B1F40239(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::Struct_2_3E75877A2888D88A_446>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_399_METHOD_2_6C957C84B1F40239_OFFSET))(this, a1);
	}
	*/
};
