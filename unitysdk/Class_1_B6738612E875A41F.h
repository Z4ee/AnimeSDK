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

#define CLASS_1_B6738612E875A41F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19719120)
#define CLASS_1_B6738612E875A41F_CLONE_OFFSET UNITYSDK_OFFSET(0x19718C70)
#define CLASS_1_B6738612E875A41F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19718DC0)
#define CLASS_1_B6738612E875A41F_EQUALS_OFFSET UNITYSDK_OFFSET(0x19718D10)
#define CLASS_1_B6738612E875A41F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19718E70)
#define CLASS_1_B6738612E875A41F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19719430)
#define CLASS_1_B6738612E875A41F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x197193C0)
#define CLASS_1_B6738612E875A41F_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19718CA0)
#define CLASS_1_B6738612E875A41F_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x19718D00)
#define CLASS_1_B6738612E875A41F_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x19718CE0)
#define CLASS_1_B6738612E875A41F_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19718CC0)
#define CLASS_1_B6738612E875A41F_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19718B40)
#define CLASS_1_B6738612E875A41F_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19718CB0)
#define CLASS_1_B6738612E875A41F_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x19718CF0)
#define CLASS_1_B6738612E875A41F_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x19718CD0)
#define CLASS_1_B6738612E875A41F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19718B70)
#define CLASS_1_B6738612E875A41F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19718FC0)
#define CLASS_1_B6738612E875A41F_WRITETO_OFFSET UNITYSDK_OFFSET(0x19719020)
#define CLASS_1_B6738612E875A41F__CCTOR_OFFSET UNITYSDK_OFFSET(0x19719520)
#define CLASS_1_B6738612E875A41F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19718BD0)
#define CLASS_1_B6738612E875A41F__CTOR_OFFSET UNITYSDK_OFFSET(0x19718B80)

inline static constexpr unsigned int Class_1_B6738612E875A41F_TypeDefinitionIndex = 29071;

class Class_1_B6738612E875A41F : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_B6738612E875A41F*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_B6738612E875A41F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6738612E875A41F_TypeDefinitionIndex)->GetStaticField(0x51AB0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6738612E875A41F_TypeDefinitionIndex)->GetStaticField(0x51AB8);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::System::UInt32 Field_1_3; // 0x20
	::System::Int64 Field_1_8; // 0x28
	::System::Int64 Field_1_10; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B6738612E875A41F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B6738612E875A41F*))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_B6738612E875A41F*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_B6738612E875A41F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B6738612E875A41F* Clone()
	{
		return ((::Class_1_B6738612E875A41F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B6738612E875A41F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B6738612E875A41F*))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B6738612E875A41F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B6738612E875A41F*))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B6738612E875A41F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
