#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5E67EEC526D46438;
class Class_1_EF0E638FDA49C9A1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D8EAED2BCF3F4D39_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1822B6C0)
#define CLASS_1_D8EAED2BCF3F4D39_CLONE_OFFSET UNITYSDK_OFFSET(0x1822B1D0)
#define CLASS_1_D8EAED2BCF3F4D39_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1822B2C0)
#define CLASS_1_D8EAED2BCF3F4D39_EQUALS_OFFSET UNITYSDK_OFFSET(0x1822B260)
#define CLASS_1_D8EAED2BCF3F4D39_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1822B3B0)
#define CLASS_1_D8EAED2BCF3F4D39_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1822B930)
#define CLASS_1_D8EAED2BCF3F4D39_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1822B820)
#define CLASS_1_D8EAED2BCF3F4D39_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1822B240)
#define CLASS_1_D8EAED2BCF3F4D39_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1822B230)
#define CLASS_1_D8EAED2BCF3F4D39_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1822B220)
#define CLASS_1_D8EAED2BCF3F4D39_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1822B250)
#define CLASS_1_D8EAED2BCF3F4D39_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1822B040)
#define CLASS_1_D8EAED2BCF3F4D39_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1822B550)
#define CLASS_1_D8EAED2BCF3F4D39_WRITETO_OFFSET UNITYSDK_OFFSET(0x1822B5B0)
#define CLASS_1_D8EAED2BCF3F4D39__CCTOR_OFFSET UNITYSDK_OFFSET(0x1822BAC0)
#define CLASS_1_D8EAED2BCF3F4D39__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1822B0C0)
#define CLASS_1_D8EAED2BCF3F4D39__CTOR_OFFSET UNITYSDK_OFFSET(0x1822B050)

inline static constexpr unsigned int Class_1_D8EAED2BCF3F4D39_TypeDefinitionIndex = 22929;

class Class_1_D8EAED2BCF3F4D39 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_5E67EEC526D46438*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_5E67EEC526D46438*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8EAED2BCF3F4D39_TypeDefinitionIndex)->GetStaticField(0x14B20);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_EF0E638FDA49C9A1*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_EF0E638FDA49C9A1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8EAED2BCF3F4D39_TypeDefinitionIndex)->GetStaticField(0x14B28);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5E67EEC526D46438*>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EF0E638FDA49C9A1*>* Field_1_3; // 0x20
	::System::UInt32 Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D8EAED2BCF3F4D39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D8EAED2BCF3F4D39* Clone()
	{
		return ((::Class_1_D8EAED2BCF3F4D39*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EF0E638FDA49C9A1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EF0E638FDA49C9A1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5E67EEC526D46438*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5E67EEC526D46438*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D8EAED2BCF3F4D39* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D8EAED2BCF3F4D39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D8EAED2BCF3F4D39_MERGEFROM_1_OFFSET))(this, a1);
	}
};
