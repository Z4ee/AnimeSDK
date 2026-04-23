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

#define CLASS_1_72C6D937BA5A992C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19B88790)
#define CLASS_1_72C6D937BA5A992C_CLONE_OFFSET UNITYSDK_OFFSET(0x19B88290)
#define CLASS_1_72C6D937BA5A992C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19B88410)
#define CLASS_1_72C6D937BA5A992C_EQUALS_OFFSET UNITYSDK_OFFSET(0x19B88350)
#define CLASS_1_72C6D937BA5A992C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19B884D0)
#define CLASS_1_72C6D937BA5A992C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19B88B10)
#define CLASS_1_72C6D937BA5A992C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19B88AA0)
#define CLASS_1_72C6D937BA5A992C_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19B88310)
#define CLASS_1_72C6D937BA5A992C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19B882F0)
#define CLASS_1_72C6D937BA5A992C_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x19B882D0)
#define CLASS_1_72C6D937BA5A992C_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x19B88340)
#define CLASS_1_72C6D937BA5A992C_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19B882E0)
#define CLASS_1_72C6D937BA5A992C_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19B88160)
#define CLASS_1_72C6D937BA5A992C_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19B88320)
#define CLASS_1_72C6D937BA5A992C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19B88300)
#define CLASS_1_72C6D937BA5A992C_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x19B88330)
#define CLASS_1_72C6D937BA5A992C_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x19B882C0)
#define CLASS_1_72C6D937BA5A992C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19B88190)
#define CLASS_1_72C6D937BA5A992C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19B88610)
#define CLASS_1_72C6D937BA5A992C_WRITETO_OFFSET UNITYSDK_OFFSET(0x19B88670)
#define CLASS_1_72C6D937BA5A992C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B88C20)
#define CLASS_1_72C6D937BA5A992C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19B881F0)
#define CLASS_1_72C6D937BA5A992C__CTOR_OFFSET UNITYSDK_OFFSET(0x19B881A0)

inline static constexpr unsigned int Class_1_72C6D937BA5A992C_TypeDefinitionIndex = 29979;

class Class_1_72C6D937BA5A992C : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72C6D937BA5A992C_TypeDefinitionIndex)->GetStaticField(0x4A1F0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_72C6D937BA5A992C*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_72C6D937BA5A992C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72C6D937BA5A992C_TypeDefinitionIndex)->GetStaticField(0x4A1F8);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::System::UInt64 Field_1_3; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::UInt32 Field_1_8; // 0x2C
	::System::Int64 Field_1_12; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_72C6D937BA5A992C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_72C6D937BA5A992C*))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_72C6D937BA5A992C*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_72C6D937BA5A992C*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_72C6D937BA5A992C* Clone()
	{
		return ((::Class_1_72C6D937BA5A992C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_72C6D937BA5A992C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_72C6D937BA5A992C*))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_72C6D937BA5A992C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_72C6D937BA5A992C*))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_72C6D937BA5A992C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
