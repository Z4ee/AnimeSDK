#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D2924896099E0408;
class Class_1_E7C4009BCC22497A_33;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7A26D3FC0FA90BCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C0EB50)
#define CLASS_1_7A26D3FC0FA90BCA_CLONE_OFFSET UNITYSDK_OFFSET(0x17C0E620)
#define CLASS_1_7A26D3FC0FA90BCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C0E760)
#define CLASS_1_7A26D3FC0FA90BCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C0E700)
#define CLASS_1_7A26D3FC0FA90BCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C0E880)
#define CLASS_1_7A26D3FC0FA90BCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C0EE50)
#define CLASS_1_7A26D3FC0FA90BCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C0ED10)
#define CLASS_1_7A26D3FC0FA90BCA_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17C0E6B0)
#define CLASS_1_7A26D3FC0FA90BCA_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C0E670)
#define CLASS_1_7A26D3FC0FA90BCA_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17C0E6D0)
#define CLASS_1_7A26D3FC0FA90BCA_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17C0E6F0)
#define CLASS_1_7A26D3FC0FA90BCA_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17C0E6C0)
#define CLASS_1_7A26D3FC0FA90BCA_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C0E680)
#define CLASS_1_7A26D3FC0FA90BCA_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17C0E6E0)
#define CLASS_1_7A26D3FC0FA90BCA_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17C0E6A0)
#define CLASS_1_7A26D3FC0FA90BCA_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17C0E690)
#define CLASS_1_7A26D3FC0FA90BCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C0E490)
#define CLASS_1_7A26D3FC0FA90BCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C0E9A0)
#define CLASS_1_7A26D3FC0FA90BCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C0EA00)
#define CLASS_1_7A26D3FC0FA90BCA__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C0EFE0)
#define CLASS_1_7A26D3FC0FA90BCA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C0E4F0)
#define CLASS_1_7A26D3FC0FA90BCA__CTOR_OFFSET UNITYSDK_OFFSET(0x17C0E4A0)

inline static constexpr unsigned int Class_1_7A26D3FC0FA90BCA_TypeDefinitionIndex = 24752;

class Class_1_7A26D3FC0FA90BCA : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D2924896099E0408*>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D2924896099E0408*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A26D3FC0FA90BCA_TypeDefinitionIndex)->GetStaticField(0x369A0);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D2924896099E0408*>* Field_1_11; // 0x10
	::Class_1_E7C4009BCC22497A_33* Field_1_8; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::Boolean Field_1_4; // 0x28
	::System::UInt32 Field_1_2; // 0x2C
	::System::UInt32 Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7A26D3FC0FA90BCA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7A26D3FC0FA90BCA*))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7A26D3FC0FA90BCA* Clone()
	{
		return ((::Class_1_7A26D3FC0FA90BCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Class_1_E7C4009BCC22497A_33* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E7C4009BCC22497A_33*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E7C4009BCC22497A_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_33*))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D2924896099E0408*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D2924896099E0408*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7A26D3FC0FA90BCA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7A26D3FC0FA90BCA*))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7A26D3FC0FA90BCA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7A26D3FC0FA90BCA*))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7A26D3FC0FA90BCA_MERGEFROM_1_OFFSET))(this, a1);
	}
};
