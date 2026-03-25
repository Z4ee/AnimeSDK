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

#define CLASS_1_D8EAED2BCF3F4D39_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1808BC30)
#define CLASS_1_D8EAED2BCF3F4D39_14_CLONE_OFFSET UNITYSDK_OFFSET(0x1808B6E0)
#define CLASS_1_D8EAED2BCF3F4D39_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1808B7F0)
#define CLASS_1_D8EAED2BCF3F4D39_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x1808B790)
#define CLASS_1_D8EAED2BCF3F4D39_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1808B8C0)
#define CLASS_1_D8EAED2BCF3F4D39_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1808BE90)
#define CLASS_1_D8EAED2BCF3F4D39_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1808BE20)
#define CLASS_1_D8EAED2BCF3F4D39_14_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1808B770)
#define CLASS_1_D8EAED2BCF3F4D39_14_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1808B740)
#define CLASS_1_D8EAED2BCF3F4D39_14_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1808B760)
#define CLASS_1_D8EAED2BCF3F4D39_14_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1808B730)
#define CLASS_1_D8EAED2BCF3F4D39_14_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1808B780)
#define CLASS_1_D8EAED2BCF3F4D39_14_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1808B750)
#define CLASS_1_D8EAED2BCF3F4D39_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1808B550)
#define CLASS_1_D8EAED2BCF3F4D39_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1808BAA0)
#define CLASS_1_D8EAED2BCF3F4D39_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x1808BB00)
#define CLASS_1_D8EAED2BCF3F4D39_14__CCTOR_OFFSET UNITYSDK_OFFSET(0x1808BFE0)
#define CLASS_1_D8EAED2BCF3F4D39_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1808B5F0)
#define CLASS_1_D8EAED2BCF3F4D39_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1808B560)

inline static constexpr unsigned int Class_1_D8EAED2BCF3F4D39_14_TypeDefinitionIndex = 26187;

class Class_1_D8EAED2BCF3F4D39_14 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8EAED2BCF3F4D39_14_TypeDefinitionIndex)->GetStaticField(0x2A840);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8EAED2BCF3F4D39_14_TypeDefinitionIndex)->GetStaticField(0x2A848);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::UInt32 Field_1_5; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D8EAED2BCF3F4D39_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39_14*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D8EAED2BCF3F4D39_14* Clone()
	{
		return ((::Class_1_D8EAED2BCF3F4D39_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D8EAED2BCF3F4D39_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39_14*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D8EAED2BCF3F4D39_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39_14*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
