#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_41BA3D4F4FF43007_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17EF9D30)
#define CLASS_1_41BA3D4F4FF43007_CLONE_OFFSET UNITYSDK_OFFSET(0x17EF98F0)
#define CLASS_1_41BA3D4F4FF43007_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17EF9980)
#define CLASS_1_41BA3D4F4FF43007_EQUALS_OFFSET UNITYSDK_OFFSET(0x17EF9950)
#define CLASS_1_41BA3D4F4FF43007_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17EF9A90)
#define CLASS_1_41BA3D4F4FF43007_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17EF9E20)
#define CLASS_1_41BA3D4F4FF43007_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17EF9DC0)
#define CLASS_1_41BA3D4F4FF43007_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17EF9940)
#define CLASS_1_41BA3D4F4FF43007_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x17EF9930)
#define CLASS_1_41BA3D4F4FF43007_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x17EF9920)
#define CLASS_1_41BA3D4F4FF43007_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17EF9800)
#define CLASS_1_41BA3D4F4FF43007_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EF9C20)
#define CLASS_1_41BA3D4F4FF43007_WRITETO_OFFSET UNITYSDK_OFFSET(0x17EF9C80)
#define CLASS_1_41BA3D4F4FF43007__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EF9F30)
#define CLASS_1_41BA3D4F4FF43007__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17EF9860)
#define CLASS_1_41BA3D4F4FF43007__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF9810)

inline static constexpr unsigned int Class_1_41BA3D4F4FF43007_TypeDefinitionIndex = 23056;

class Class_1_41BA3D4F4FF43007 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41BA3D4F4FF43007_TypeDefinitionIndex)->GetStaticField(0x2F9D0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x18
	::System::Double Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41BA3D4F4FF43007__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_41BA3D4F4FF43007* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_41BA3D4F4FF43007*))((::PBYTE)hIl2Cpp + CLASS_1_41BA3D4F4FF43007__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_41BA3D4F4FF43007__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41BA3D4F4FF43007_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_41BA3D4F4FF43007* Clone()
	{
		return ((::Class_1_41BA3D4F4FF43007*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41BA3D4F4FF43007_CLONE_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41BA3D4F4FF43007_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_41BA3D4F4FF43007_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41BA3D4F4FF43007_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_41BA3D4F4FF43007_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_41BA3D4F4FF43007* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_41BA3D4F4FF43007*))((::PBYTE)hIl2Cpp + CLASS_1_41BA3D4F4FF43007_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41BA3D4F4FF43007_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41BA3D4F4FF43007_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_41BA3D4F4FF43007_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41BA3D4F4FF43007_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_41BA3D4F4FF43007* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_41BA3D4F4FF43007*))((::PBYTE)hIl2Cpp + CLASS_1_41BA3D4F4FF43007_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_41BA3D4F4FF43007_MERGEFROM_1_OFFSET))(this, a1);
	}
};
