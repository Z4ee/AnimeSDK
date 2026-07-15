#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B019EAD7E127C874_2;
class Class_1_EBB10EC01CCC4716_8;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1CB713CB61EC5443_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C8EE180)
#define CLASS_1_1CB713CB61EC5443_CLONE_OFFSET UNITYSDK_OFFSET(0x1C8EDB80)
#define CLASS_1_1CB713CB61EC5443_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C8EDCB0)
#define CLASS_1_1CB713CB61EC5443_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C8EDC50)
#define CLASS_1_1CB713CB61EC5443_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C8EDE30)
#define CLASS_1_1CB713CB61EC5443_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C8EE530)
#define CLASS_1_1CB713CB61EC5443_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C8EE390)
#define CLASS_1_1CB713CB61EC5443_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C8EDC00)
#define CLASS_1_1CB713CB61EC5443_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C8EDBD0)
#define CLASS_1_1CB713CB61EC5443_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C8EDC20)
#define CLASS_1_1CB713CB61EC5443_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C8ED920)
#define CLASS_1_1CB713CB61EC5443_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1C8EDC40)
#define CLASS_1_1CB713CB61EC5443_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C8EDBF0)
#define CLASS_1_1CB713CB61EC5443_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C8EDC10)
#define CLASS_1_1CB713CB61EC5443_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C8EDBE0)
#define CLASS_1_1CB713CB61EC5443_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C8EDC30)
#define CLASS_1_1CB713CB61EC5443_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C8ED980)
#define CLASS_1_1CB713CB61EC5443_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C8EDF00)
#define CLASS_1_1CB713CB61EC5443_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C8EDF60)
#define CLASS_1_1CB713CB61EC5443__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8EE6C0)
#define CLASS_1_1CB713CB61EC5443__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8EDA00)
#define CLASS_1_1CB713CB61EC5443__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8ED990)

inline static constexpr unsigned int Class_1_1CB713CB61EC5443_TypeDefinitionIndex = 26444;

class Class_1_1CB713CB61EC5443 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_EBB10EC01CCC4716_8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_EBB10EC01CCC4716_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CB713CB61EC5443_TypeDefinitionIndex)->GetStaticField(0x2F1E0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_1CB713CB61EC5443*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1CB713CB61EC5443*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CB713CB61EC5443_TypeDefinitionIndex)->GetStaticField(0x2F1E8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_EBB10EC01CCC4716_8*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_EBB10EC01CCC4716_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CB713CB61EC5443_TypeDefinitionIndex)->GetStaticField(0x2F1F0);
	}
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_8*>* Field_1_8; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_8*>* Field_1_9; // 0x18
	::Class_1_B019EAD7E127C874_2* Field_1_10; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x30
	::System::UInt32 Field_1_13; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1CB713CB61EC5443* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CB713CB61EC5443*))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1CB713CB61EC5443*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1CB713CB61EC5443*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1CB713CB61EC5443* Clone()
	{
		return ((::Class_1_1CB713CB61EC5443*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_8*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Class_1_B019EAD7E127C874_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_B019EAD7E127C874_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_B019EAD7E127C874_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B019EAD7E127C874_2*))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_8*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EBB10EC01CCC4716_8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1CB713CB61EC5443* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1CB713CB61EC5443*))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1CB713CB61EC5443* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CB713CB61EC5443*))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CB713CB61EC5443_MERGEFROM_1_OFFSET))(this, a1);
	}
};
