#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1_ValueReaderFunc; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1_ValueWriterAction; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_FIELDCODEC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E3DED0)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3DF00)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORBOOL_B__2_0_OFFSET UNITYSDK_OFFSET(0x17E3DF50)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORBOOL_B__2_1_OFFSET UNITYSDK_OFFSET(0x17E3DF80)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORDOUBLE_B__14_0_OFFSET UNITYSDK_OFFSET(0x17E3E0C0)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORDOUBLE_B__14_1_OFFSET UNITYSDK_OFFSET(0x17E3E0F0)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORFLOAT_B__13_0_OFFSET UNITYSDK_OFFSET(0x17E3E080)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORFLOAT_B__13_1_OFFSET UNITYSDK_OFFSET(0x17E3E0A0)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORINT32_B__3_0_OFFSET UNITYSDK_OFFSET(0x17E3DFA0)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORINT32_B__3_1_OFFSET UNITYSDK_OFFSET(0x17E3DFC0)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORSTRING_B__0_0_OFFSET UNITYSDK_OFFSET(0x17E3DF10)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORSTRING_B__0_1_OFFSET UNITYSDK_OFFSET(0x17E3DF30)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORUINT32_B__7_0_OFFSET UNITYSDK_OFFSET(0x17E3E000)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORUINT32_B__7_1_OFFSET UNITYSDK_OFFSET(0x17E3E020)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORUINT64_B__12_0_OFFSET UNITYSDK_OFFSET(0x17E3E040)
#define GOOGLE_PROTOBUF_FIELDCODEC___C__FORUINT64_B__12_1_OFFSET UNITYSDK_OFFSET(0x17E3E060)

namespace Google::Protobuf
{
	inline static constexpr unsigned int FieldCodec___c_TypeDefinitionIndex = 5379;

	class FieldCodec___c : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::String*>** StaticGet___9__0_0()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x3CCB0);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::String*>** StaticGet___9__0_1()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x3CCB8);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::Boolean>** StaticGet___9__2_0()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x3CCC0);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::Boolean>** StaticGet___9__2_1()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x3CCC8);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::Double>** StaticGet___9__14_1()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x3CCD0);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::UInt32>** StaticGet___9__7_1()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x3CCD8);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::Int32>** StaticGet___9__3_0()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x3CCE0);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::Double>** StaticGet___9__14_0()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x3CCE8);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::UInt64>** StaticGet___9__12_0()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x3CCF0);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::UInt64>** StaticGet___9__12_1()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x3CCF8);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::Single>** StaticGet___9__13_1()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x3CD00);
		}
		static ::Google::Protobuf::FieldCodec___c** StaticGet___9()
		{
			return (::Google::Protobuf::FieldCodec___c**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x3CD08);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::Single>** StaticGet___9__13_0()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x3CD10);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::UInt32>** StaticGet___9__7_0()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueReaderFunc<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x3CD18);
		}
		static ::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::Int32>** StaticGet___9__3_1()
		{
			return (::Google::Protobuf::FieldCodec_1_ValueWriterAction<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec___c_TypeDefinitionIndex)->GetStaticField(0x3CD20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__CTOR_OFFSET))(this);
		}

		::System::String* _ForString_b__0_0(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORSTRING_B__0_0_OFFSET))(this, a1);
		}

		::System::Void _ForString_b__0_1(::Google::Protobuf::CodedOutputStream* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORSTRING_B__0_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean _ForBool_b__2_0(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORBOOL_B__2_0_OFFSET))(this, a1);
		}

		::System::Void _ForBool_b__2_1(::Google::Protobuf::CodedOutputStream* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORBOOL_B__2_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 _ForInt32_b__3_0(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORINT32_B__3_0_OFFSET))(this, a1);
		}

		::System::Void _ForInt32_b__3_1(::Google::Protobuf::CodedOutputStream* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORINT32_B__3_1_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _ForUInt32_b__7_0(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORUINT32_B__7_0_OFFSET))(this, a1);
		}

		::System::Void _ForUInt32_b__7_1(::Google::Protobuf::CodedOutputStream* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORUINT32_B__7_1_OFFSET))(this, a1, a2);
		}

		::System::UInt64 _ForUInt64_b__12_0(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORUINT64_B__12_0_OFFSET))(this, a1);
		}

		::System::Void _ForUInt64_b__12_1(::Google::Protobuf::CodedOutputStream* a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*, ::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORUINT64_B__12_1_OFFSET))(this, a1, a2);
		}

		::System::Single _ForFloat_b__13_0(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Single(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORFLOAT_B__13_0_OFFSET))(this, a1);
		}

		::System::Void _ForFloat_b__13_1(::Google::Protobuf::CodedOutputStream* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*, ::System::Single))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORFLOAT_B__13_1_OFFSET))(this, a1, a2);
		}

		::System::Double _ForDouble_b__14_0(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Double(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORDOUBLE_B__14_0_OFFSET))(this, a1);
		}

		::System::Void _ForDouble_b__14_1(::Google::Protobuf::CodedOutputStream* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*, ::System::Double))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_FIELDCODEC___C__FORDOUBLE_B__14_1_OFFSET))(this, a1, a2);
		}
	};
}
