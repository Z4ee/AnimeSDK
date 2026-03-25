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

#define CLASS_1_FD8F060E713FA426_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17AF4680)
#define CLASS_1_FD8F060E713FA426_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17AF4130)
#define CLASS_1_FD8F060E713FA426_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17AF42E0)
#define CLASS_1_FD8F060E713FA426_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17AF4210)
#define CLASS_1_FD8F060E713FA426_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17AF43A0)
#define CLASS_1_FD8F060E713FA426_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17AF48E0)
#define CLASS_1_FD8F060E713FA426_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17AF4860)
#define CLASS_1_FD8F060E713FA426_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17AF41E0)
#define CLASS_1_FD8F060E713FA426_1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17AF4160)
#define CLASS_1_FD8F060E713FA426_1_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17AF4170)
#define CLASS_1_FD8F060E713FA426_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17AF4200)
#define CLASS_1_FD8F060E713FA426_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17AF41F0)
#define CLASS_1_FD8F060E713FA426_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17AF4020)
#define CLASS_1_FD8F060E713FA426_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AF4540)
#define CLASS_1_FD8F060E713FA426_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17AF45A0)
#define CLASS_1_FD8F060E713FA426_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17AF4A20)
#define CLASS_1_FD8F060E713FA426_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AF4090)
#define CLASS_1_FD8F060E713FA426_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF4030)

inline static constexpr unsigned int Class_1_FD8F060E713FA426_1_TypeDefinitionIndex = 27127;

class Class_1_FD8F060E713FA426_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FD8F060E713FA426_1_TypeDefinitionIndex)->GetStaticField(0x32000);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::UInt32 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD8F060E713FA426_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FD8F060E713FA426_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD8F060E713FA426_1*))((::PBYTE)hIl2Cpp + CLASS_1_FD8F060E713FA426_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FD8F060E713FA426_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD8F060E713FA426_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FD8F060E713FA426_1* Clone()
	{
		return ((::Class_1_FD8F060E713FA426_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD8F060E713FA426_1_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD8F060E713FA426_1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FD8F060E713FA426_1_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD8F060E713FA426_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FD8F060E713FA426_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD8F060E713FA426_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FD8F060E713FA426_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FD8F060E713FA426_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FD8F060E713FA426_1*))((::PBYTE)hIl2Cpp + CLASS_1_FD8F060E713FA426_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD8F060E713FA426_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD8F060E713FA426_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FD8F060E713FA426_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD8F060E713FA426_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FD8F060E713FA426_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD8F060E713FA426_1*))((::PBYTE)hIl2Cpp + CLASS_1_FD8F060E713FA426_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FD8F060E713FA426_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
