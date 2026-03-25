#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_49;
class Class_1_FA4F4A67B1C04320_475;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9BD0A56EE5752C91_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E6A3E0)
#define CLASS_1_9BD0A56EE5752C91_CLONE_OFFSET UNITYSDK_OFFSET(0x17E69F70)
#define CLASS_1_9BD0A56EE5752C91_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E6A020)
#define CLASS_1_9BD0A56EE5752C91_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E69FF0)
#define CLASS_1_9BD0A56EE5752C91_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E6A130)
#define CLASS_1_9BD0A56EE5752C91_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E6A5C0)
#define CLASS_1_9BD0A56EE5752C91_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E6A4B0)
#define CLASS_1_9BD0A56EE5752C91_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17E69FA0)
#define CLASS_1_9BD0A56EE5752C91_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17E69FE0)
#define CLASS_1_9BD0A56EE5752C91_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17E69FB0)
#define CLASS_1_9BD0A56EE5752C91_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17E69FD0)
#define CLASS_1_9BD0A56EE5752C91_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17E69FC0)
#define CLASS_1_9BD0A56EE5752C91_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E69E40)
#define CLASS_1_9BD0A56EE5752C91_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E6A270)
#define CLASS_1_9BD0A56EE5752C91_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E6A2D0)
#define CLASS_1_9BD0A56EE5752C91__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E6A6B0)
#define CLASS_1_9BD0A56EE5752C91__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E69E90)
#define CLASS_1_9BD0A56EE5752C91__CTOR_OFFSET UNITYSDK_OFFSET(0x17E69E50)

inline static constexpr unsigned int Class_1_9BD0A56EE5752C91_TypeDefinitionIndex = 25168;

class Class_1_9BD0A56EE5752C91 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_475*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_475*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BD0A56EE5752C91_TypeDefinitionIndex)->GetStaticField(0x25530);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	::Class_1_4CF8088A158DCE25_49* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_475*>* Field_1_7; // 0x20
	::System::Boolean Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BD0A56EE5752C91__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9BD0A56EE5752C91* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BD0A56EE5752C91*))((::PBYTE)hIl2Cpp + CLASS_1_9BD0A56EE5752C91__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BD0A56EE5752C91__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BD0A56EE5752C91_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9BD0A56EE5752C91* Clone()
	{
		return ((::Class_1_9BD0A56EE5752C91*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BD0A56EE5752C91_CLONE_OFFSET))(this);
	}

	::Class_1_4CF8088A158DCE25_49* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4CF8088A158DCE25_49*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BD0A56EE5752C91_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4CF8088A158DCE25_49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_49*))((::PBYTE)hIl2Cpp + CLASS_1_9BD0A56EE5752C91_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BD0A56EE5752C91_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9BD0A56EE5752C91_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_475*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_475*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BD0A56EE5752C91_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9BD0A56EE5752C91_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9BD0A56EE5752C91* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9BD0A56EE5752C91*))((::PBYTE)hIl2Cpp + CLASS_1_9BD0A56EE5752C91_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BD0A56EE5752C91_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BD0A56EE5752C91_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BD0A56EE5752C91_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BD0A56EE5752C91_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9BD0A56EE5752C91* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BD0A56EE5752C91*))((::PBYTE)hIl2Cpp + CLASS_1_9BD0A56EE5752C91_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BD0A56EE5752C91_MERGEFROM_1_OFFSET))(this, a1);
	}
};
