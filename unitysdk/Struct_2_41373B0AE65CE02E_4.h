#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_41373B0AE65CE02E_4_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x28B580)
#define STRUCT_2_41373B0AE65CE02E_4_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x738520)
#define STRUCT_2_41373B0AE65CE02E_4_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x145C20E0)
#define STRUCT_2_41373B0AE65CE02E_4_METHOD_2_574A0EFDE858A687_OFFSET UNITYSDK_OFFSET(0x7269B0)
#define STRUCT_2_41373B0AE65CE02E_4_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x145C2090)
#define STRUCT_2_41373B0AE65CE02E_4___INIT_OFFSET UNITYSDK_OFFSET(0x726A30)

inline static constexpr unsigned int Struct_2_41373B0AE65CE02E_4_TypeDefinitionIndex = 11701;

struct alignas(8) Struct_2_41373B0AE65CE02E_4
{
	::FlatBuffers::Table Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_1; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_4_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_4___INIT_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_41373B0AE65CE02E_4 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_41373B0AE65CE02E_4(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_4_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}

	::Struct_2_41373B0AE65CE02E_4 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_41373B0AE65CE02E_4(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_4_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_574A0EFDE858A687()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_4_METHOD_2_574A0EFDE858A687_OFFSET))(this);
	}

	static ::Struct_2_41373B0AE65CE02E_4 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_41373B0AE65CE02E_4 a2)
	{
		return ((::Struct_2_41373B0AE65CE02E_4(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_41373B0AE65CE02E_4))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_4_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}
};
