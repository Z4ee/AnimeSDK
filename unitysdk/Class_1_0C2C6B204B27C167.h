#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3C58D309C7A040F5_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0C2C6B204B27C167_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1809CA00)
#define CLASS_1_0C2C6B204B27C167_CLONE_OFFSET UNITYSDK_OFFSET(0x1809C570)
#define CLASS_1_0C2C6B204B27C167_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1809C710)
#define CLASS_1_0C2C6B204B27C167_EQUALS_OFFSET UNITYSDK_OFFSET(0x1809C5F0)
#define CLASS_1_0C2C6B204B27C167_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1809C7E0)
#define CLASS_1_0C2C6B204B27C167_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1809CB30)
#define CLASS_1_0C2C6B204B27C167_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1809CA90)
#define CLASS_1_0C2C6B204B27C167_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1809C5E0)
#define CLASS_1_0C2C6B204B27C167_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1809C5D0)
#define CLASS_1_0C2C6B204B27C167_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1809C5C0)
#define CLASS_1_0C2C6B204B27C167_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1809C490)
#define CLASS_1_0C2C6B204B27C167_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1809C8D0)
#define CLASS_1_0C2C6B204B27C167_WRITETO_OFFSET UNITYSDK_OFFSET(0x1809C930)
#define CLASS_1_0C2C6B204B27C167__CCTOR_OFFSET UNITYSDK_OFFSET(0x1809CC10)
#define CLASS_1_0C2C6B204B27C167__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1809C4E0)
#define CLASS_1_0C2C6B204B27C167__CTOR_OFFSET UNITYSDK_OFFSET(0x1809C4A0)

inline static constexpr unsigned int Class_1_0C2C6B204B27C167_TypeDefinitionIndex = 23385;

class Class_1_0C2C6B204B27C167 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_3C58D309C7A040F5_3*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_3C58D309C7A040F5_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C2C6B204B27C167_TypeDefinitionIndex)->GetStaticField(0x2BD60);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_3*>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C2C6B204B27C167__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0C2C6B204B27C167* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0C2C6B204B27C167*))((::PBYTE)hIl2Cpp + CLASS_1_0C2C6B204B27C167__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C2C6B204B27C167__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C2C6B204B27C167_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0C2C6B204B27C167* Clone()
	{
		return ((::Class_1_0C2C6B204B27C167*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C2C6B204B27C167_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C2C6B204B27C167_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0C2C6B204B27C167_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_3*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C2C6B204B27C167_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0C2C6B204B27C167_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0C2C6B204B27C167* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0C2C6B204B27C167*))((::PBYTE)hIl2Cpp + CLASS_1_0C2C6B204B27C167_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C2C6B204B27C167_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C2C6B204B27C167_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0C2C6B204B27C167_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C2C6B204B27C167_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0C2C6B204B27C167* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0C2C6B204B27C167*))((::PBYTE)hIl2Cpp + CLASS_1_0C2C6B204B27C167_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0C2C6B204B27C167_MERGEFROM_1_OFFSET))(this, a1);
	}
};
