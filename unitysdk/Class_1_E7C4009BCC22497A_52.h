#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_587;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E7C4009BCC22497A_52_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CCC720)
#define CLASS_1_E7C4009BCC22497A_52_CLONE_OFFSET UNITYSDK_OFFSET(0x17CCC350)
#define CLASS_1_E7C4009BCC22497A_52_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CCC470)
#define CLASS_1_E7C4009BCC22497A_52_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CCC390)
#define CLASS_1_E7C4009BCC22497A_52_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CCC520)
#define CLASS_1_E7C4009BCC22497A_52_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CCC860)
#define CLASS_1_E7C4009BCC22497A_52_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CCC7C0)
#define CLASS_1_E7C4009BCC22497A_52_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17CCC380)
#define CLASS_1_E7C4009BCC22497A_52_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CCC240)
#define CLASS_1_E7C4009BCC22497A_52_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CCC610)
#define CLASS_1_E7C4009BCC22497A_52_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CCC670)
#define CLASS_1_E7C4009BCC22497A_52__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CCC940)
#define CLASS_1_E7C4009BCC22497A_52__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CCC2A0)
#define CLASS_1_E7C4009BCC22497A_52__CTOR_OFFSET UNITYSDK_OFFSET(0x17CCC250)

inline static constexpr unsigned int Class_1_E7C4009BCC22497A_52_TypeDefinitionIndex = 25624;

class Class_1_E7C4009BCC22497A_52 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_587*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_587*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7C4009BCC22497A_52_TypeDefinitionIndex)->GetStaticField(0xC1F0);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_587*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_52__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E7C4009BCC22497A_52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_52*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_52__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_52__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_52_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E7C4009BCC22497A_52* Clone()
	{
		return ((::Class_1_E7C4009BCC22497A_52*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_52_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_587*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_587*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_52_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_52_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E7C4009BCC22497A_52* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E7C4009BCC22497A_52*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_52_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_52_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_52_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_52_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_52_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E7C4009BCC22497A_52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_52*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_52_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E7C4009BCC22497A_52_MERGEFROM_1_OFFSET))(this, a1);
	}
};
