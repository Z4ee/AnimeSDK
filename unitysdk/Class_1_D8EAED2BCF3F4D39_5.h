#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_23;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D8EAED2BCF3F4D39_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E1E930)
#define CLASS_1_D8EAED2BCF3F4D39_5_CLONE_OFFSET UNITYSDK_OFFSET(0x17E1E480)
#define CLASS_1_D8EAED2BCF3F4D39_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E1E520)
#define CLASS_1_D8EAED2BCF3F4D39_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E1E4F0)
#define CLASS_1_D8EAED2BCF3F4D39_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E1E610)
#define CLASS_1_D8EAED2BCF3F4D39_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E1EB70)
#define CLASS_1_D8EAED2BCF3F4D39_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E1EAB0)
#define CLASS_1_D8EAED2BCF3F4D39_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E1E4C0)
#define CLASS_1_D8EAED2BCF3F4D39_5_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17E1E4B0)
#define CLASS_1_D8EAED2BCF3F4D39_5_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17E1E4E0)
#define CLASS_1_D8EAED2BCF3F4D39_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E1E4D0)
#define CLASS_1_D8EAED2BCF3F4D39_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E1E300)
#define CLASS_1_D8EAED2BCF3F4D39_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E1E7D0)
#define CLASS_1_D8EAED2BCF3F4D39_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E1E830)
#define CLASS_1_D8EAED2BCF3F4D39_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E1ECA0)
#define CLASS_1_D8EAED2BCF3F4D39_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E1E380)
#define CLASS_1_D8EAED2BCF3F4D39_5__CTOR_OFFSET UNITYSDK_OFFSET(0x17E1E310)

inline static constexpr unsigned int Class_1_D8EAED2BCF3F4D39_5_TypeDefinitionIndex = 24110;

class Class_1_D8EAED2BCF3F4D39_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8EAED2BCF3F4D39_5_TypeDefinitionIndex)->GetStaticField(0x21E40);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_23*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_23*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8EAED2BCF3F4D39_5_TypeDefinitionIndex)->GetStaticField(0x21E48);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_23*>* Field_1_8; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D8EAED2BCF3F4D39_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39_5*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_5__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D8EAED2BCF3F4D39_5* Clone()
	{
		return ((::Class_1_D8EAED2BCF3F4D39_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_5_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_5_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_23*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_23*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_5_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D8EAED2BCF3F4D39_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39_5*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D8EAED2BCF3F4D39_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39_5*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
