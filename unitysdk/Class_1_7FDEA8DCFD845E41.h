#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7D892008D2DA2FB6;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FDEA8DCFD845E41_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CBB7E40)
#define CLASS_1_7FDEA8DCFD845E41_CLONE_OFFSET UNITYSDK_OFFSET(0x1CBB7990)
#define CLASS_1_7FDEA8DCFD845E41_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CBB7A40)
#define CLASS_1_7FDEA8DCFD845E41_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CBB7A10)
#define CLASS_1_7FDEA8DCFD845E41_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CBB7B90)
#define CLASS_1_7FDEA8DCFD845E41_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CBB7F90)
#define CLASS_1_7FDEA8DCFD845E41_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CBB7EE0)
#define CLASS_1_7FDEA8DCFD845E41_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CBB7870)
#define CLASS_1_7FDEA8DCFD845E41_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CBB7A00)
#define CLASS_1_7FDEA8DCFD845E41_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1CBB79F0)
#define CLASS_1_7FDEA8DCFD845E41_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1CBB79D0)
#define CLASS_1_7FDEA8DCFD845E41_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1CBB79E0)
#define CLASS_1_7FDEA8DCFD845E41_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1CBB79C0)
#define CLASS_1_7FDEA8DCFD845E41_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CBB78A0)
#define CLASS_1_7FDEA8DCFD845E41_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CBB7C10)
#define CLASS_1_7FDEA8DCFD845E41_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CBB7C70)
#define CLASS_1_7FDEA8DCFD845E41__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBB8170)
#define CLASS_1_7FDEA8DCFD845E41__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBB78F0)
#define CLASS_1_7FDEA8DCFD845E41__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB78B0)

inline static constexpr unsigned int Class_1_7FDEA8DCFD845E41_TypeDefinitionIndex = 32807;

class Class_1_7FDEA8DCFD845E41 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FDEA8DCFD845E41*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FDEA8DCFD845E41*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FDEA8DCFD845E41_TypeDefinitionIndex)->GetStaticField(0x53AA0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_7D892008D2DA2FB6*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_7D892008D2DA2FB6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FDEA8DCFD845E41_TypeDefinitionIndex)->GetStaticField(0x53AA8);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7D892008D2DA2FB6*>* Field_1_6; // 0x18
	::System::Boolean Field_1_7; // 0x20
	::System::Boolean Field_1_8; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FDEA8DCFD845E41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FDEA8DCFD845E41*))((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FDEA8DCFD845E41*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FDEA8DCFD845E41*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FDEA8DCFD845E41* Clone()
	{
		return ((::Class_1_7FDEA8DCFD845E41*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7D892008D2DA2FB6*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7D892008D2DA2FB6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FDEA8DCFD845E41* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FDEA8DCFD845E41*))((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FDEA8DCFD845E41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FDEA8DCFD845E41*))((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FDEA8DCFD845E41_MERGEFROM_1_OFFSET))(this, a1);
	}
};
