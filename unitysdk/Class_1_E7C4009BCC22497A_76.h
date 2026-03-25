#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_46C1A58655A3A52E;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E7C4009BCC22497A_76_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1809F140)
#define CLASS_1_E7C4009BCC22497A_76_CLONE_OFFSET UNITYSDK_OFFSET(0x1809ED20)
#define CLASS_1_E7C4009BCC22497A_76_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1809EE90)
#define CLASS_1_E7C4009BCC22497A_76_EQUALS_OFFSET UNITYSDK_OFFSET(0x1809ED80)
#define CLASS_1_E7C4009BCC22497A_76_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1809EF40)
#define CLASS_1_E7C4009BCC22497A_76_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1809F280)
#define CLASS_1_E7C4009BCC22497A_76_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1809F1E0)
#define CLASS_1_E7C4009BCC22497A_76_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1809ED70)
#define CLASS_1_E7C4009BCC22497A_76_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1809EC10)
#define CLASS_1_E7C4009BCC22497A_76_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1809F030)
#define CLASS_1_E7C4009BCC22497A_76_WRITETO_OFFSET UNITYSDK_OFFSET(0x1809F090)
#define CLASS_1_E7C4009BCC22497A_76__CCTOR_OFFSET UNITYSDK_OFFSET(0x1809F360)
#define CLASS_1_E7C4009BCC22497A_76__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1809EC70)
#define CLASS_1_E7C4009BCC22497A_76__CTOR_OFFSET UNITYSDK_OFFSET(0x1809EC20)

inline static constexpr unsigned int Class_1_E7C4009BCC22497A_76_TypeDefinitionIndex = 26686;

class Class_1_E7C4009BCC22497A_76 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_46C1A58655A3A52E*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_46C1A58655A3A52E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7C4009BCC22497A_76_TypeDefinitionIndex)->GetStaticField(0x2C030);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_46C1A58655A3A52E*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_76__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E7C4009BCC22497A_76* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_76*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_76__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_76__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_76_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E7C4009BCC22497A_76* Clone()
	{
		return ((::Class_1_E7C4009BCC22497A_76*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_76_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_46C1A58655A3A52E*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_46C1A58655A3A52E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_76_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_76_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E7C4009BCC22497A_76* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E7C4009BCC22497A_76*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_76_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_76_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_76_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_76_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_76_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E7C4009BCC22497A_76* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_76*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_76_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_76_MERGEFROM_1_OFFSET))(this, a1);
	}
};
