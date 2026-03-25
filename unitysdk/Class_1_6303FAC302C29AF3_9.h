#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_50;
class Class_1_35B19D34B208E77E_22;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6303FAC302C29AF3_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E958B0)
#define CLASS_1_6303FAC302C29AF3_9_CLONE_OFFSET UNITYSDK_OFFSET(0x17E95410)
#define CLASS_1_6303FAC302C29AF3_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E954B0)
#define CLASS_1_6303FAC302C29AF3_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E95480)
#define CLASS_1_6303FAC302C29AF3_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E955A0)
#define CLASS_1_6303FAC302C29AF3_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E95AF0)
#define CLASS_1_6303FAC302C29AF3_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E959F0)
#define CLASS_1_6303FAC302C29AF3_9_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E95440)
#define CLASS_1_6303FAC302C29AF3_9_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17E95470)
#define CLASS_1_6303FAC302C29AF3_9_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17E95460)
#define CLASS_1_6303FAC302C29AF3_9_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E95450)
#define CLASS_1_6303FAC302C29AF3_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E952C0)
#define CLASS_1_6303FAC302C29AF3_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E95740)
#define CLASS_1_6303FAC302C29AF3_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E957A0)
#define CLASS_1_6303FAC302C29AF3_9__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E95C00)
#define CLASS_1_6303FAC302C29AF3_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E95330)
#define CLASS_1_6303FAC302C29AF3_9__CTOR_OFFSET UNITYSDK_OFFSET(0x17E952D0)

inline static constexpr unsigned int Class_1_6303FAC302C29AF3_9_TypeDefinitionIndex = 26716;

class Class_1_6303FAC302C29AF3_9 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_35B19D34B208E77E_22*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_35B19D34B208E77E_22*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6303FAC302C29AF3_9_TypeDefinitionIndex)->GetStaticField(0x28220);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_50*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_50*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6303FAC302C29AF3_9_TypeDefinitionIndex)->GetStaticField(0x28228);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_50*>* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35B19D34B208E77E_22*>* Field_1_5; // 0x20
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6303FAC302C29AF3_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6303FAC302C29AF3_9*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_9__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6303FAC302C29AF3_9* Clone()
	{
		return ((::Class_1_6303FAC302C29AF3_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_9_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_9_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_9_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35B19D34B208E77E_22*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_35B19D34B208E77E_22*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_9_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_50*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_50*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_9_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6303FAC302C29AF3_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6303FAC302C29AF3_9*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6303FAC302C29AF3_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6303FAC302C29AF3_9*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
