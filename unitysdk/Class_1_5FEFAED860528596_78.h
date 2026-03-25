#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_443A92A86A85B606_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_78_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1824DAF0)
#define CLASS_1_5FEFAED860528596_78_CLONE_OFFSET UNITYSDK_OFFSET(0x1824D600)
#define CLASS_1_5FEFAED860528596_78_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1824D7A0)
#define CLASS_1_5FEFAED860528596_78_EQUALS_OFFSET UNITYSDK_OFFSET(0x1824D6A0)
#define CLASS_1_5FEFAED860528596_78_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1824D870)
#define CLASS_1_5FEFAED860528596_78_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1824DDF0)
#define CLASS_1_5FEFAED860528596_78_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1824DC60)
#define CLASS_1_5FEFAED860528596_78_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1824D680)
#define CLASS_1_5FEFAED860528596_78_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1824D650)
#define CLASS_1_5FEFAED860528596_78_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1824D670)
#define CLASS_1_5FEFAED860528596_78_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1824D690)
#define CLASS_1_5FEFAED860528596_78_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1824D660)
#define CLASS_1_5FEFAED860528596_78_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1824D4B0)
#define CLASS_1_5FEFAED860528596_78_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1824D990)
#define CLASS_1_5FEFAED860528596_78_WRITETO_OFFSET UNITYSDK_OFFSET(0x1824D9F0)
#define CLASS_1_5FEFAED860528596_78__CCTOR_OFFSET UNITYSDK_OFFSET(0x1824DF80)
#define CLASS_1_5FEFAED860528596_78__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1824D510)
#define CLASS_1_5FEFAED860528596_78__CTOR_OFFSET UNITYSDK_OFFSET(0x1824D4C0)

inline static constexpr unsigned int Class_1_5FEFAED860528596_78_TypeDefinitionIndex = 26247;

class Class_1_5FEFAED860528596_78 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_78_TypeDefinitionIndex)->GetStaticField(0x172C0);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xA; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_443A92A86A85B606_4* Field_1_2; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_78__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_78* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_78*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_78__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_78__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_78_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_78* Clone()
	{
		return ((::Class_1_5FEFAED860528596_78*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_78_CLONE_OFFSET))(this);
	}

	::Class_1_443A92A86A85B606_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_443A92A86A85B606_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_78_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_443A92A86A85B606_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_443A92A86A85B606_4*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_78_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_78_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_78_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_78_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_78_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_78* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_78*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_78_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_78_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_78_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_78_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_78_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_78* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_78*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_78_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_78_MERGEFROM_1_OFFSET))(this, a1);
	}
};
