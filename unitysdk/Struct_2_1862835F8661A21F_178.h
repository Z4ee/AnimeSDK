#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_1862835F8661A21F_178_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_1862835F8661A21F_178_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x19D36710)
#define STRUCT_2_1862835F8661A21F_178_METHOD_2_574A0EFDE858A687_OFFSET UNITYSDK_OFFSET(0x77D950)
#define STRUCT_2_1862835F8661A21F_178_METHOD_2_663CC3D0C92D0439_OFFSET UNITYSDK_OFFSET(0x8AA910)
#define STRUCT_2_1862835F8661A21F_178_METHOD_2_6C957C84B1F40239_OFFSET UNITYSDK_OFFSET(0x77D9B0)
#define STRUCT_2_1862835F8661A21F_178_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x19D366A0)
#define STRUCT_2_1862835F8661A21F_178_METHOD_2_E687B8530C04E50A_OFFSET UNITYSDK_OFFSET(0x8AA8D0)
#define STRUCT_2_1862835F8661A21F_178___INIT_OFFSET UNITYSDK_OFFSET(0x8AA8B0)

inline static constexpr unsigned int Struct_2_1862835F8661A21F_178_TypeDefinitionIndex = 9562;

struct alignas(8) Struct_2_1862835F8661A21F_178
{
	::FlatBuffers::Table Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_7; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_178_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_178___INIT_OFFSET))(this, a1, a2);
	}

	/*
	::System::Nullable_1<::Struct_2_58DF5669875F2C66_84> Method_2_6C957C84B1F40239(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::Struct_2_58DF5669875F2C66_84>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_178_METHOD_2_6C957C84B1F40239_OFFSET))(this, a1);
	}
	*/

	::Struct_2_1862835F8661A21F_178 Method_2_E687B8530C04E50A(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_1862835F8661A21F_178(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_178_METHOD_2_E687B8530C04E50A_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_1862835F8661A21F_178 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_1862835F8661A21F_178(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_178_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}

	::System::Int32 Method_2_574A0EFDE858A687()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_178_METHOD_2_574A0EFDE858A687_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* Method_2_663CC3D0C92D0439()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_178_METHOD_2_663CC3D0C92D0439_OFFSET))(this);
	}

	static ::Struct_2_1862835F8661A21F_178 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_1862835F8661A21F_178 a2)
	{
		return ((::Struct_2_1862835F8661A21F_178(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_1862835F8661A21F_178))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_178_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}
};
