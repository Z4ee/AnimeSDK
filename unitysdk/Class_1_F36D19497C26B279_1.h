#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C03D623E9F32FBCB_9;
class Class_1_FA4F4A67B1C04320_178;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F36D19497C26B279_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B61910)
#define CLASS_1_F36D19497C26B279_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17B61400)
#define CLASS_1_F36D19497C26B279_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B61580)
#define CLASS_1_F36D19497C26B279_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B61460)
#define CLASS_1_F36D19497C26B279_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B61670)
#define CLASS_1_F36D19497C26B279_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B61B50)
#define CLASS_1_F36D19497C26B279_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B61A00)
#define CLASS_1_F36D19497C26B279_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17B61430)
#define CLASS_1_F36D19497C26B279_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17B61450)
#define CLASS_1_F36D19497C26B279_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17B61440)
#define CLASS_1_F36D19497C26B279_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B61220)
#define CLASS_1_F36D19497C26B279_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B617D0)
#define CLASS_1_F36D19497C26B279_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B61830)
#define CLASS_1_F36D19497C26B279_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B61C30)
#define CLASS_1_F36D19497C26B279_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B61270)
#define CLASS_1_F36D19497C26B279_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17B61230)

inline static constexpr unsigned int Class_1_F36D19497C26B279_1_TypeDefinitionIndex = 23821;

class Class_1_F36D19497C26B279_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_178*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_178*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F36D19497C26B279_1_TypeDefinitionIndex)->GetStaticField(0x2D560);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Class_1_C03D623E9F32FBCB_9* Field_1_2; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_178*>* Field_1_5; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F36D19497C26B279_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F36D19497C26B279_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F36D19497C26B279_1*))((::PBYTE)hIl2Cpp + CLASS_1_F36D19497C26B279_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F36D19497C26B279_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F36D19497C26B279_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F36D19497C26B279_1* Clone()
	{
		return ((::Class_1_F36D19497C26B279_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F36D19497C26B279_1_CLONE_OFFSET))(this);
	}

	::Class_1_C03D623E9F32FBCB_9* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C03D623E9F32FBCB_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F36D19497C26B279_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C03D623E9F32FBCB_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_9*))((::PBYTE)hIl2Cpp + CLASS_1_F36D19497C26B279_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_178*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_178*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F36D19497C26B279_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F36D19497C26B279_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F36D19497C26B279_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F36D19497C26B279_1*))((::PBYTE)hIl2Cpp + CLASS_1_F36D19497C26B279_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F36D19497C26B279_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F36D19497C26B279_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F36D19497C26B279_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F36D19497C26B279_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F36D19497C26B279_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F36D19497C26B279_1*))((::PBYTE)hIl2Cpp + CLASS_1_F36D19497C26B279_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F36D19497C26B279_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
