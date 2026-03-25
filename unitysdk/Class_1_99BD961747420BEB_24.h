#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3A7B270FE0BE90AE;
class Class_1_3AD2528CD53B1639_9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_99BD961747420BEB_24_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B7F570)
#define CLASS_1_99BD961747420BEB_24_CLONE_OFFSET UNITYSDK_OFFSET(0x17B7F130)
#define CLASS_1_99BD961747420BEB_24_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B7F1E0)
#define CLASS_1_99BD961747420BEB_24_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B7F1B0)
#define CLASS_1_99BD961747420BEB_24_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B7F2E0)
#define CLASS_1_99BD961747420BEB_24_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B7F810)
#define CLASS_1_99BD961747420BEB_24_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B7F6E0)
#define CLASS_1_99BD961747420BEB_24_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17B7F190)
#define CLASS_1_99BD961747420BEB_24_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17B7F160)
#define CLASS_1_99BD961747420BEB_24_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17B7F180)
#define CLASS_1_99BD961747420BEB_24_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17B7F1A0)
#define CLASS_1_99BD961747420BEB_24_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17B7F170)
#define CLASS_1_99BD961747420BEB_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B7EFA0)
#define CLASS_1_99BD961747420BEB_24_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B7F400)
#define CLASS_1_99BD961747420BEB_24_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B7F460)
#define CLASS_1_99BD961747420BEB_24__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B7F960)
#define CLASS_1_99BD961747420BEB_24__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B7F000)
#define CLASS_1_99BD961747420BEB_24__CTOR_OFFSET UNITYSDK_OFFSET(0x17B7EFB0)

inline static constexpr unsigned int Class_1_99BD961747420BEB_24_TypeDefinitionIndex = 24546;

class Class_1_99BD961747420BEB_24 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_3A7B270FE0BE90AE*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_3A7B270FE0BE90AE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99BD961747420BEB_24_TypeDefinitionIndex)->GetStaticField(0x2FEE0);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xB; // 0x0
	::Class_1_3AD2528CD53B1639_9* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3A7B270FE0BE90AE*>* Field_1_5; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_24__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_99BD961747420BEB_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_24*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_24__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_24__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_99BD961747420BEB_24* Clone()
	{
		return ((::Class_1_99BD961747420BEB_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_24_CLONE_OFFSET))(this);
	}

	::Class_1_3AD2528CD53B1639_9* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3AD2528CD53B1639_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_24_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3AD2528CD53B1639_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_9*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_24_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3A7B270FE0BE90AE*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3A7B270FE0BE90AE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_24_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_24_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_24_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_24_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_99BD961747420BEB_24* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99BD961747420BEB_24*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_24_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_24_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_24_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_24_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_24_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_99BD961747420BEB_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_24*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_24_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_24_MERGEFROM_1_OFFSET))(this, a1);
	}
};
