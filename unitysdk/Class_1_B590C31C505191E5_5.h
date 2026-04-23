#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B590C31C505191E5_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1959CB90)
#define CLASS_1_B590C31C505191E5_5_CLONE_OFFSET UNITYSDK_OFFSET(0x1959C760)
#define CLASS_1_B590C31C505191E5_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1959C8B0)
#define CLASS_1_B590C31C505191E5_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x1959C7E0)
#define CLASS_1_B590C31C505191E5_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1959C950)
#define CLASS_1_B590C31C505191E5_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1959CC70)
#define CLASS_1_B590C31C505191E5_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1959CC20)
#define CLASS_1_B590C31C505191E5_5_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1959C610)
#define CLASS_1_B590C31C505191E5_5_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1959C7D0)
#define CLASS_1_B590C31C505191E5_5_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1959C7C0)
#define CLASS_1_B590C31C505191E5_5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1959C7B0)
#define CLASS_1_B590C31C505191E5_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1959C670)
#define CLASS_1_B590C31C505191E5_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1959CA60)
#define CLASS_1_B590C31C505191E5_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x1959CAC0)
#define CLASS_1_B590C31C505191E5_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1959CD40)
#define CLASS_1_B590C31C505191E5_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1959C6D0)
#define CLASS_1_B590C31C505191E5_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1959C680)

inline static constexpr unsigned int Class_1_B590C31C505191E5_5_TypeDefinitionIndex = 28363;

class Class_1_B590C31C505191E5_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B590C31C505191E5_5_TypeDefinitionIndex)->GetStaticField(0x4FDF0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_B590C31C505191E5_5*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_B590C31C505191E5_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B590C31C505191E5_5_TypeDefinitionIndex)->GetStaticField(0x4FDF8);
	}
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::System::Boolean Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B590C31C505191E5_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B590C31C505191E5_5*))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_B590C31C505191E5_5*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_B590C31C505191E5_5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_5_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B590C31C505191E5_5* Clone()
	{
		return ((::Class_1_B590C31C505191E5_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_5_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_5_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_5_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B590C31C505191E5_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B590C31C505191E5_5*))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B590C31C505191E5_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B590C31C505191E5_5*))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
