#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_1862835F8661A21F_1302_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_1862835F8661A21F_1302_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x153BD440)
#define STRUCT_2_1862835F8661A21F_1302_METHOD_2_574A0EFDE858A687_OFFSET UNITYSDK_OFFSET(0x77D950)
#define STRUCT_2_1862835F8661A21F_1302_METHOD_2_663CC3D0C92D0439_OFFSET UNITYSDK_OFFSET(0x81B400)
#define STRUCT_2_1862835F8661A21F_1302_METHOD_2_6C957C84B1F40239_OFFSET UNITYSDK_OFFSET(0x77D9B0)
#define STRUCT_2_1862835F8661A21F_1302_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x153BD4E0)
#define STRUCT_2_1862835F8661A21F_1302_METHOD_2_E687B8530C04E50A_OFFSET UNITYSDK_OFFSET(0x81B410)
#define STRUCT_2_1862835F8661A21F_1302___INIT_OFFSET UNITYSDK_OFFSET(0x81B3E0)

inline static constexpr unsigned int Struct_2_1862835F8661A21F_1302_TypeDefinitionIndex = 17096;

struct alignas(8) Struct_2_1862835F8661A21F_1302
{
	::FlatBuffers::Table Field_2_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_0; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1302_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1302___INIT_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::Int32>* Method_2_663CC3D0C92D0439()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1302_METHOD_2_663CC3D0C92D0439_OFFSET))(this);
	}

	static ::Struct_2_1862835F8661A21F_1302 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_1862835F8661A21F_1302 a2)
	{
		return ((::Struct_2_1862835F8661A21F_1302(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_1862835F8661A21F_1302))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1302_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}

	static ::Struct_2_1862835F8661A21F_1302 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_1862835F8661A21F_1302(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1302_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}

	::Struct_2_1862835F8661A21F_1302 Method_2_E687B8530C04E50A(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_1862835F8661A21F_1302(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1302_METHOD_2_E687B8530C04E50A_OFFSET))(this, a1, a2);
	}

	/*
	::System::Nullable_1<::Struct_2_58DF5669875F2C66_287> Method_2_6C957C84B1F40239(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::Struct_2_58DF5669875F2C66_287>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1302_METHOD_2_6C957C84B1F40239_OFFSET))(this, a1);
	}
	*/

	::System::Int32 Method_2_574A0EFDE858A687()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1302_METHOD_2_574A0EFDE858A687_OFFSET))(this);
	}
};
