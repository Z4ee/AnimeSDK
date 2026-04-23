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

#define CLASS_1_B590C31C505191E5_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x195EF9D0)
#define CLASS_1_B590C31C505191E5_7_CLONE_OFFSET UNITYSDK_OFFSET(0x195EF610)
#define CLASS_1_B590C31C505191E5_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x195EF720)
#define CLASS_1_B590C31C505191E5_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x195EF670)
#define CLASS_1_B590C31C505191E5_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x195EF7C0)
#define CLASS_1_B590C31C505191E5_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x195EFA90)
#define CLASS_1_B590C31C505191E5_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x195EFA40)
#define CLASS_1_B590C31C505191E5_7_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x195EF660)
#define CLASS_1_B590C31C505191E5_7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x195EF4F0)
#define CLASS_1_B590C31C505191E5_7_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x195EF650)
#define CLASS_1_B590C31C505191E5_7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x195EF640)
#define CLASS_1_B590C31C505191E5_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x195EF520)
#define CLASS_1_B590C31C505191E5_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x195EF8D0)
#define CLASS_1_B590C31C505191E5_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x195EF930)
#define CLASS_1_B590C31C505191E5_7__CCTOR_OFFSET UNITYSDK_OFFSET(0x195EFB50)
#define CLASS_1_B590C31C505191E5_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x195EF580)
#define CLASS_1_B590C31C505191E5_7__CTOR_OFFSET UNITYSDK_OFFSET(0x195EF530)

inline static constexpr unsigned int Class_1_B590C31C505191E5_7_TypeDefinitionIndex = 32734;

class Class_1_B590C31C505191E5_7 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B590C31C505191E5_7_TypeDefinitionIndex)->GetStaticField(0x570B0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_B590C31C505191E5_7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_B590C31C505191E5_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B590C31C505191E5_7_TypeDefinitionIndex)->GetStaticField(0x570B8);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::Boolean Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B590C31C505191E5_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B590C31C505191E5_7*))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_B590C31C505191E5_7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_B590C31C505191E5_7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B590C31C505191E5_7* Clone()
	{
		return ((::Class_1_B590C31C505191E5_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_7_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_7_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_7_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_7_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B590C31C505191E5_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B590C31C505191E5_7*))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B590C31C505191E5_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B590C31C505191E5_7*))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B590C31C505191E5_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
