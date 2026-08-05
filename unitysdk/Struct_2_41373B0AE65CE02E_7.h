#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_41373B0AE65CE02E_7_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_41373B0AE65CE02E_7_METHOD_2_2AB22D41F7571C1C_OFFSET UNITYSDK_OFFSET(0x77E310)
#define STRUCT_2_41373B0AE65CE02E_7_METHOD_2_4A8ABA5914A06C34_OFFSET UNITYSDK_OFFSET(0x80E190)
#define STRUCT_2_41373B0AE65CE02E_7_METHOD_2_4CDE2E1382E8C4EB_OFFSET UNITYSDK_OFFSET(0x14C52ED0)
#define STRUCT_2_41373B0AE65CE02E_7_METHOD_2_574A0EFDE858A687_OFFSET UNITYSDK_OFFSET(0x77D950)
#define STRUCT_2_41373B0AE65CE02E_7_METHOD_2_6C957C84B1F40239_OFFSET UNITYSDK_OFFSET(0x77D9B0)
#define STRUCT_2_41373B0AE65CE02E_7_METHOD_2_8F54C68DC21A03C7_OFFSET UNITYSDK_OFFSET(0x14C52F30)
#define STRUCT_2_41373B0AE65CE02E_7_METHOD_2_91C01B1634697AD1_OFFSET UNITYSDK_OFFSET(0x80E1A0)
#define STRUCT_2_41373B0AE65CE02E_7___INIT_OFFSET UNITYSDK_OFFSET(0x77DC50)

inline static constexpr unsigned int Struct_2_41373B0AE65CE02E_7_TypeDefinitionIndex = 10799;

struct alignas(8) Struct_2_41373B0AE65CE02E_7
{
	::FlatBuffers::Table Field_2_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_7_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_7___INIT_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_574A0EFDE858A687()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_7_METHOD_2_574A0EFDE858A687_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* Method_2_4A8ABA5914A06C34()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_7_METHOD_2_4A8ABA5914A06C34_OFFSET))(this);
	}

	::Struct_2_41373B0AE65CE02E_7 Method_2_2AB22D41F7571C1C(::System::Int32 a1, ::FlatBuffers::ByteBuffer* a2)
	{
		return ((::Struct_2_41373B0AE65CE02E_7(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_7_METHOD_2_2AB22D41F7571C1C_OFFSET))(this, a1, a2);
	}

	/*
	::System::Nullable_1<::Struct_2_58DF5669875F2C66_183> Method_2_91C01B1634697AD1(::System::String* a1)
	{
		return ((::System::Nullable_1<::Struct_2_58DF5669875F2C66_183>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_7_METHOD_2_91C01B1634697AD1_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Nullable_1<::Struct_2_58DF5669875F2C66_183> Method_2_6C957C84B1F40239(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::Struct_2_58DF5669875F2C66_183>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_7_METHOD_2_6C957C84B1F40239_OFFSET))(this, a1);
	}
	*/

	static ::Struct_2_41373B0AE65CE02E_7 Method_2_4CDE2E1382E8C4EB(::FlatBuffers::ByteBuffer* a1, ::Struct_2_41373B0AE65CE02E_7 a2)
	{
		return ((::Struct_2_41373B0AE65CE02E_7(*)(::FlatBuffers::ByteBuffer*, ::Struct_2_41373B0AE65CE02E_7))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_7_METHOD_2_4CDE2E1382E8C4EB_OFFSET))(a1, a2);
	}

	static ::Struct_2_41373B0AE65CE02E_7 Method_2_8F54C68DC21A03C7(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::Struct_2_41373B0AE65CE02E_7(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + STRUCT_2_41373B0AE65CE02E_7_METHOD_2_8F54C68DC21A03C7_OFFSET))(a1);
	}
};
