#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_41373B0AE65CE02E_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x28B580)
#define STRUCT_2_41373B0AE65CE02E_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x738520)
#define STRUCT_2_41373B0AE65CE02E_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x190549F0)
#define STRUCT_2_41373B0AE65CE02E_METHOD_2_574A0EFDE858A687_OFFSET UNITYSDK_OFFSET(0x7269B0)
#define STRUCT_2_41373B0AE65CE02E_METHOD_2_6C957C84B1F40239_OFFSET UNITYSDK_OFFSET(0x7268B0)
#define STRUCT_2_41373B0AE65CE02E_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x19054D20)
#define STRUCT_2_41373B0AE65CE02E_METHOD_2_D05D69B91E914191_OFFSET UNITYSDK_OFFSET(0x820B50)
#define STRUCT_2_41373B0AE65CE02E___INIT_OFFSET UNITYSDK_OFFSET(0x726A30)

inline static constexpr unsigned int Struct_2_41373B0AE65CE02E_TypeDefinitionIndex = 9885;

struct alignas(8) Struct_2_41373B0AE65CE02E
{
	::FlatBuffers::Table Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_1; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E___INIT_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_574A0EFDE858A687()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_METHOD_2_574A0EFDE858A687_OFFSET))(this);
	}

	static ::Struct_2_41373B0AE65CE02E Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_41373B0AE65CE02E a2)
	{
		return ((::Struct_2_41373B0AE65CE02E(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_41373B0AE65CE02E))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}

	/*
	::System::Nullable_1<::Struct_2_0190A9212AD9E688> Method_2_6C957C84B1F40239(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::Struct_2_0190A9212AD9E688>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_METHOD_2_6C957C84B1F40239_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Nullable_1<::Struct_2_0190A9212AD9E688> Method_2_D05D69B91E914191(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Nullable_1<::Struct_2_0190A9212AD9E688>(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_METHOD_2_D05D69B91E914191_OFFSET))(this, a1, a2);
	}
	*/

	static ::Struct_2_41373B0AE65CE02E Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_41373B0AE65CE02E(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}

	::Struct_2_41373B0AE65CE02E Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_41373B0AE65CE02E(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}
};
