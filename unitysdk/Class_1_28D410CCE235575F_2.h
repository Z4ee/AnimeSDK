#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B3697E288C342A7B;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_28D410CCE235575F_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x193CDCD0)
#define CLASS_1_28D410CCE235575F_2_CLONE_OFFSET UNITYSDK_OFFSET(0x193CD7F0)
#define CLASS_1_28D410CCE235575F_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x193CD9B0)
#define CLASS_1_28D410CCE235575F_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x193CD890)
#define CLASS_1_28D410CCE235575F_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193CDA70)
#define CLASS_1_28D410CCE235575F_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193CDF10)
#define CLASS_1_28D410CCE235575F_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193CDE60)
#define CLASS_1_28D410CCE235575F_2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x193CD870)
#define CLASS_1_28D410CCE235575F_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x193CD840)
#define CLASS_1_28D410CCE235575F_2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x193CD670)
#define CLASS_1_28D410CCE235575F_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x193CD860)
#define CLASS_1_28D410CCE235575F_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x193CD880)
#define CLASS_1_28D410CCE235575F_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x193CD850)
#define CLASS_1_28D410CCE235575F_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193CD6D0)
#define CLASS_1_28D410CCE235575F_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193CDB70)
#define CLASS_1_28D410CCE235575F_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x193CDBD0)
#define CLASS_1_28D410CCE235575F_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x193CDFF0)
#define CLASS_1_28D410CCE235575F_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193CD730)
#define CLASS_1_28D410CCE235575F_2__CTOR_OFFSET UNITYSDK_OFFSET(0x193CD6E0)

inline static constexpr unsigned int Class_1_28D410CCE235575F_2_TypeDefinitionIndex = 27483;

class Class_1_28D410CCE235575F_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_B3697E288C342A7B*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_B3697E288C342A7B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28D410CCE235575F_2_TypeDefinitionIndex)->GetStaticField(0x3E170);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_28D410CCE235575F_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_28D410CCE235575F_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_28D410CCE235575F_2_TypeDefinitionIndex)->GetStaticField(0x3E178);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B3697E288C342A7B*>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_28D410CCE235575F_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28D410CCE235575F_2*))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_28D410CCE235575F_2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_28D410CCE235575F_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_28D410CCE235575F_2* Clone()
	{
		return ((::Class_1_28D410CCE235575F_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B3697E288C342A7B*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B3697E288C342A7B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_28D410CCE235575F_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_28D410CCE235575F_2*))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_28D410CCE235575F_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28D410CCE235575F_2*))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_28D410CCE235575F_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
