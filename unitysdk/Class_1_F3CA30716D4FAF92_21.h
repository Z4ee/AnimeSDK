#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F3CA30716D4FAF92_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x196250B0)
#define CLASS_1_F3CA30716D4FAF92_21_CLONE_OFFSET UNITYSDK_OFFSET(0x19624B90)
#define CLASS_1_F3CA30716D4FAF92_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19624CA0)
#define CLASS_1_F3CA30716D4FAF92_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x19624C70)
#define CLASS_1_F3CA30716D4FAF92_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19624D90)
#define CLASS_1_F3CA30716D4FAF92_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19625520)
#define CLASS_1_F3CA30716D4FAF92_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19625440)
#define CLASS_1_F3CA30716D4FAF92_21_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19624BF0)
#define CLASS_1_F3CA30716D4FAF92_21_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x19624C10)
#define CLASS_1_F3CA30716D4FAF92_21_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19624BD0)
#define CLASS_1_F3CA30716D4FAF92_21_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x19624C40)
#define CLASS_1_F3CA30716D4FAF92_21_METHOD_1_3F08C697E838D55A_OFFSET UNITYSDK_OFFSET(0x19624BC0)
#define CLASS_1_F3CA30716D4FAF92_21_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19624A40)
#define CLASS_1_F3CA30716D4FAF92_21_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19624C00)
#define CLASS_1_F3CA30716D4FAF92_21_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x19624C20)
#define CLASS_1_F3CA30716D4FAF92_21_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19624BE0)
#define CLASS_1_F3CA30716D4FAF92_21_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x19624C60)
#define CLASS_1_F3CA30716D4FAF92_21_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x19624C50)
#define CLASS_1_F3CA30716D4FAF92_21_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x19624C30)
#define CLASS_1_F3CA30716D4FAF92_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19624A70)
#define CLASS_1_F3CA30716D4FAF92_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19624EB0)
#define CLASS_1_F3CA30716D4FAF92_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x19624F10)
#define CLASS_1_F3CA30716D4FAF92_21__CCTOR_OFFSET UNITYSDK_OFFSET(0x19625650)
#define CLASS_1_F3CA30716D4FAF92_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19624AD0)
#define CLASS_1_F3CA30716D4FAF92_21__CTOR_OFFSET UNITYSDK_OFFSET(0x19624A80)

inline static constexpr unsigned int Class_1_F3CA30716D4FAF92_21_TypeDefinitionIndex = 32025;

class Class_1_F3CA30716D4FAF92_21 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CA30716D4FAF92_21_TypeDefinitionIndex)->GetStaticField(0x5EB40);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_F3CA30716D4FAF92_21*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F3CA30716D4FAF92_21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CA30716D4FAF92_21_TypeDefinitionIndex)->GetStaticField(0x5EB48);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_10; // 0x20
	::System::Int32 Field_1_14; // 0x24
	::System::UInt32 Field_1_6; // 0x28
	::System::UInt32 Field_1_8; // 0x2C
	::System::UInt64 Field_1_12; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F3CA30716D4FAF92_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_21*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F3CA30716D4FAF92_21*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F3CA30716D4FAF92_21*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F3CA30716D4FAF92_21* Clone()
	{
		return ((::Class_1_F3CA30716D4FAF92_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Method_1_3F08C697E838D55A()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_METHOD_1_3F08C697E838D55A_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F3CA30716D4FAF92_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_21*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F3CA30716D4FAF92_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_21*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F3CA30716D4FAF92_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
