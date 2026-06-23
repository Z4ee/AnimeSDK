#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_1862835F8661A21F_1416_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define STRUCT_2_1862835F8661A21F_1416_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x18CDE360)
#define STRUCT_2_1862835F8661A21F_1416_METHOD_2_574A0EFDE858A687_OFFSET UNITYSDK_OFFSET(0x7A5A50)
#define STRUCT_2_1862835F8661A21F_1416_METHOD_2_663CC3D0C92D0439_OFFSET UNITYSDK_OFFSET(0x85C900)
#define STRUCT_2_1862835F8661A21F_1416_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x18CDE2F0)
#define STRUCT_2_1862835F8661A21F_1416_METHOD_2_E687B8530C04E50A_OFFSET UNITYSDK_OFFSET(0x85C8C0)
#define STRUCT_2_1862835F8661A21F_1416___INIT_OFFSET UNITYSDK_OFFSET(0x85C8A0)

inline static constexpr unsigned int Struct_2_1862835F8661A21F_1416_TypeDefinitionIndex = 16304;

struct alignas(8) Struct_2_1862835F8661A21F_1416
{
	::FlatBuffers::Table Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_1; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1416_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1416___INIT_OFFSET))(this, a1, a2);
	}

	::Struct_2_1862835F8661A21F_1416 Method_2_E687B8530C04E50A(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_1862835F8661A21F_1416(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1416_METHOD_2_E687B8530C04E50A_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_1862835F8661A21F_1416 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_1862835F8661A21F_1416(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1416_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}

	::Il2CppArray<::System::Int32>* Method_2_663CC3D0C92D0439()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1416_METHOD_2_663CC3D0C92D0439_OFFSET))(this);
	}

	::System::Int32 Method_2_574A0EFDE858A687()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1416_METHOD_2_574A0EFDE858A687_OFFSET))(this);
	}

	static ::Struct_2_1862835F8661A21F_1416 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_1862835F8661A21F_1416 a2)
	{
		return ((::Struct_2_1862835F8661A21F_1416(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_1862835F8661A21F_1416))((::PBYTE)hIl2Cpp + STRUCT_2_1862835F8661A21F_1416_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}
};
