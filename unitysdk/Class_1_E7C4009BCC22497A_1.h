#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_961FA5C09972E05C;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E7C4009BCC22497A_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17EC7940)
#define CLASS_1_E7C4009BCC22497A_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17EC7520)
#define CLASS_1_E7C4009BCC22497A_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17EC7690)
#define CLASS_1_E7C4009BCC22497A_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17EC7580)
#define CLASS_1_E7C4009BCC22497A_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17EC7740)
#define CLASS_1_E7C4009BCC22497A_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17EC7A80)
#define CLASS_1_E7C4009BCC22497A_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17EC79E0)
#define CLASS_1_E7C4009BCC22497A_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17EC7570)
#define CLASS_1_E7C4009BCC22497A_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17EC7410)
#define CLASS_1_E7C4009BCC22497A_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EC7830)
#define CLASS_1_E7C4009BCC22497A_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17EC7890)
#define CLASS_1_E7C4009BCC22497A_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EC7B60)
#define CLASS_1_E7C4009BCC22497A_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17EC7470)
#define CLASS_1_E7C4009BCC22497A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC7420)

inline static constexpr unsigned int Class_1_E7C4009BCC22497A_1_TypeDefinitionIndex = 23000;

class Class_1_E7C4009BCC22497A_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_961FA5C09972E05C*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_961FA5C09972E05C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7C4009BCC22497A_1_TypeDefinitionIndex)->GetStaticField(0x2B5B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_961FA5C09972E05C*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E7C4009BCC22497A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_1*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E7C4009BCC22497A_1* Clone()
	{
		return ((::Class_1_E7C4009BCC22497A_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_961FA5C09972E05C*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_961FA5C09972E05C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E7C4009BCC22497A_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E7C4009BCC22497A_1*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E7C4009BCC22497A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_1*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
