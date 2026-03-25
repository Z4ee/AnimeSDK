#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2827A08E633A7795_4;
class Class_1_74BB263EAAA71EF1_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E577B5580A99D425_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C0C990)
#define CLASS_1_E577B5580A99D425_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17C0C310)
#define CLASS_1_E577B5580A99D425_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C0C460)
#define CLASS_1_E577B5580A99D425_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C0C400)
#define CLASS_1_E577B5580A99D425_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C0C570)
#define CLASS_1_E577B5580A99D425_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C0CEA0)
#define CLASS_1_E577B5580A99D425_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C0CD70)
#define CLASS_1_E577B5580A99D425_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C0C3D0)
#define CLASS_1_E577B5580A99D425_1_METHOD_1_3163C288F3AE2966_1_OFFSET UNITYSDK_OFFSET(0x17C0C3A0)
#define CLASS_1_E577B5580A99D425_1_METHOD_1_3163C288F3AE2966_2_OFFSET UNITYSDK_OFFSET(0x17C0C3C0)
#define CLASS_1_E577B5580A99D425_1_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17C0C370)
#define CLASS_1_E577B5580A99D425_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17C0C3F0)
#define CLASS_1_E577B5580A99D425_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17C0C380)
#define CLASS_1_E577B5580A99D425_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C0C3E0)
#define CLASS_1_E577B5580A99D425_1_METHOD_1_CE81D059476B1F49_1_OFFSET UNITYSDK_OFFSET(0x17C0C390)
#define CLASS_1_E577B5580A99D425_1_METHOD_1_CE81D059476B1F49_2_OFFSET UNITYSDK_OFFSET(0x17C0C3B0)
#define CLASS_1_E577B5580A99D425_1_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17C0C360)
#define CLASS_1_E577B5580A99D425_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C0C160)
#define CLASS_1_E577B5580A99D425_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C0C770)
#define CLASS_1_E577B5580A99D425_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C0C7D0)
#define CLASS_1_E577B5580A99D425_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C0D020)
#define CLASS_1_E577B5580A99D425_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C0C1E0)
#define CLASS_1_E577B5580A99D425_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17C0C170)

inline static constexpr unsigned int Class_1_E577B5580A99D425_1_TypeDefinitionIndex = 23519;

class Class_1_E577B5580A99D425_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_74BB263EAAA71EF1_3*>** StaticGet_Field_1_13()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_74BB263EAAA71EF1_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E577B5580A99D425_1_TypeDefinitionIndex)->GetStaticField(0x368B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_2827A08E633A7795_4*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_2827A08E633A7795_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E577B5580A99D425_1_TypeDefinitionIndex)->GetStaticField(0x368B8);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_74BB263EAAA71EF1_3*>* Field_1_14; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2827A08E633A7795_4*>* Field_1_5; // 0x20
	::System::UInt64 Field_1_9; // 0x28
	::System::UInt32 Field_1_11; // 0x30
	::System::UInt64 Field_1_7; // 0x38
	::System::UInt64 Field_1_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E577B5580A99D425_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E577B5580A99D425_1*))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E577B5580A99D425_1* Clone()
	{
		return ((::Class_1_E577B5580A99D425_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2827A08E633A7795_4*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2827A08E633A7795_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49_1()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_METHOD_1_CE81D059476B1F49_1_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966_1(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_METHOD_1_3163C288F3AE2966_1_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49_2()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_METHOD_1_CE81D059476B1F49_2_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966_2(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_METHOD_1_3163C288F3AE2966_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_74BB263EAAA71EF1_3*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_74BB263EAAA71EF1_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E577B5580A99D425_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E577B5580A99D425_1*))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E577B5580A99D425_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E577B5580A99D425_1*))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E577B5580A99D425_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
