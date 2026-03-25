#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_44;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_41_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C4F260)
#define CLASS_1_5FEFAED860528596_41_CLONE_OFFSET UNITYSDK_OFFSET(0x17C4EDA0)
#define CLASS_1_5FEFAED860528596_41_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C4EE70)
#define CLASS_1_5FEFAED860528596_41_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C4EE10)
#define CLASS_1_5FEFAED860528596_41_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C4EF50)
#define CLASS_1_5FEFAED860528596_41_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C4F3F0)
#define CLASS_1_5FEFAED860528596_41_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C4F340)
#define CLASS_1_5FEFAED860528596_41_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17C4EE00)
#define CLASS_1_5FEFAED860528596_41_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17C4EDF0)
#define CLASS_1_5FEFAED860528596_41_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C4EBE0)
#define CLASS_1_5FEFAED860528596_41_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C4F120)
#define CLASS_1_5FEFAED860528596_41_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C4F180)
#define CLASS_1_5FEFAED860528596_41__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C4F510)
#define CLASS_1_5FEFAED860528596_41__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C4EC80)
#define CLASS_1_5FEFAED860528596_41__CTOR_OFFSET UNITYSDK_OFFSET(0x17C4EBF0)

inline static constexpr unsigned int Class_1_5FEFAED860528596_41_TypeDefinitionIndex = 25051;

class Class_1_5FEFAED860528596_41 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_44*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_44*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_41_TypeDefinitionIndex)->GetStaticField(0x3A060);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_41_TypeDefinitionIndex)->GetStaticField(0x3A068);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_44*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_41__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_41*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_41__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_41__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_41_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_41* Clone()
	{
		return ((::Class_1_5FEFAED860528596_41*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_41_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_44*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_44*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_41_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_41_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_41_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_41* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_41*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_41_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_41_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_41_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_41_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_41_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_41*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_41_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_41_MERGEFROM_1_OFFSET))(this, a1);
	}
};
