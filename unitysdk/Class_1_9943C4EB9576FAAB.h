#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerAssistInfo; }
namespace System { class String; }

#define CLASS_1_9943C4EB9576FAAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B9A6A0)
#define CLASS_1_9943C4EB9576FAAB_CLONE_OFFSET UNITYSDK_OFFSET(0x17B9A280)
#define CLASS_1_9943C4EB9576FAAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B9A3D0)
#define CLASS_1_9943C4EB9576FAAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B9A2E0)
#define CLASS_1_9943C4EB9576FAAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B9A480)
#define CLASS_1_9943C4EB9576FAAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B9A870)
#define CLASS_1_9943C4EB9576FAAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B9A7D0)
#define CLASS_1_9943C4EB9576FAAB_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17B9A2C0)
#define CLASS_1_9943C4EB9576FAAB_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17B9A2D0)
#define CLASS_1_9943C4EB9576FAAB_METHOD_1_AD515D31D5C81878_OFFSET UNITYSDK_OFFSET(0x17B9A2B0)
#define CLASS_1_9943C4EB9576FAAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B9A160)
#define CLASS_1_9943C4EB9576FAAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B9A570)
#define CLASS_1_9943C4EB9576FAAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B9A5D0)
#define CLASS_1_9943C4EB9576FAAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B9A950)
#define CLASS_1_9943C4EB9576FAAB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B9A1C0)
#define CLASS_1_9943C4EB9576FAAB__CTOR_OFFSET UNITYSDK_OFFSET(0x17B9A170)

inline static constexpr unsigned int Class_1_9943C4EB9576FAAB_TypeDefinitionIndex = 24654;

class Class_1_9943C4EB9576FAAB : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::PlayerAssistInfo*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PlayerAssistInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9943C4EB9576FAAB_TypeDefinitionIndex)->GetStaticField(0x31A30);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerAssistInfo*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9943C4EB9576FAAB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9943C4EB9576FAAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9943C4EB9576FAAB*))((::PBYTE)hIl2Cpp + CLASS_1_9943C4EB9576FAAB__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9943C4EB9576FAAB__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9943C4EB9576FAAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9943C4EB9576FAAB* Clone()
	{
		return ((::Class_1_9943C4EB9576FAAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9943C4EB9576FAAB_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerAssistInfo*>* Method_1_AD515D31D5C81878()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PlayerAssistInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9943C4EB9576FAAB_METHOD_1_AD515D31D5C81878_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9943C4EB9576FAAB_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9943C4EB9576FAAB_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9943C4EB9576FAAB_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9943C4EB9576FAAB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9943C4EB9576FAAB*))((::PBYTE)hIl2Cpp + CLASS_1_9943C4EB9576FAAB_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9943C4EB9576FAAB_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9943C4EB9576FAAB_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9943C4EB9576FAAB_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9943C4EB9576FAAB_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9943C4EB9576FAAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9943C4EB9576FAAB*))((::PBYTE)hIl2Cpp + CLASS_1_9943C4EB9576FAAB_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9943C4EB9576FAAB_MERGEFROM_1_OFFSET))(this, a1);
	}
};
