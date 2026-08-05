#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_41373B0AE65CE02E_18_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_41373B0AE65CE02E_18_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x77E310)
#define STRUCT_2_41373B0AE65CE02E_18_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x17C9DCA0)
#define STRUCT_2_41373B0AE65CE02E_18_METHOD_2_574A0EFDE858A687_OFFSET UNITYSDK_OFFSET(0x77D950)
#define STRUCT_2_41373B0AE65CE02E_18_METHOD_2_6C957C84B1F40239_OFFSET UNITYSDK_OFFSET(0x77D9B0)
#define STRUCT_2_41373B0AE65CE02E_18_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x17C9DD30)
#define STRUCT_2_41373B0AE65CE02E_18_METHOD_2_D05D69B91E914191_OFFSET UNITYSDK_OFFSET(0x8743F0)
#define STRUCT_2_41373B0AE65CE02E_18___INIT_OFFSET UNITYSDK_OFFSET(0x77DC50)

inline static constexpr unsigned int Struct_2_41373B0AE65CE02E_18_TypeDefinitionIndex = 15678;

struct alignas(8) Struct_2_41373B0AE65CE02E_18
{
	::FlatBuffers::Table Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_7; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_18_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_18___INIT_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_574A0EFDE858A687()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_18_METHOD_2_574A0EFDE858A687_OFFSET))(this);
	}

	/*
	::System::Nullable_1<::Struct_2_0190A9212AD9E688_3> Method_2_6C957C84B1F40239(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::Struct_2_0190A9212AD9E688_3>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_18_METHOD_2_6C957C84B1F40239_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Nullable_1<::Struct_2_0190A9212AD9E688_3> Method_2_D05D69B91E914191(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Nullable_1<::Struct_2_0190A9212AD9E688_3>(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_18_METHOD_2_D05D69B91E914191_OFFSET))(this, a1, a2);
	}
	*/

	static ::Struct_2_41373B0AE65CE02E_18 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_41373B0AE65CE02E_18 a2)
	{
		return ((::Struct_2_41373B0AE65CE02E_18(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_41373B0AE65CE02E_18))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_18_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}

	::Struct_2_41373B0AE65CE02E_18 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_41373B0AE65CE02E_18(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_18_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	static ::Struct_2_41373B0AE65CE02E_18 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_41373B0AE65CE02E_18(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_18_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}
};
