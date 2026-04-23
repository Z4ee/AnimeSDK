#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C9E417278351157F_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A4E670)
#define CLASS_1_C9E417278351157F_3_CLONE_OFFSET UNITYSDK_OFFSET(0x19A4E3F0)
#define CLASS_1_C9E417278351157F_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A4E4F0)
#define CLASS_1_C9E417278351157F_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A4E480)
#define CLASS_1_C9E417278351157F_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A4E550)
#define CLASS_1_C9E417278351157F_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A4E810)
#define CLASS_1_C9E417278351157F_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A4E7D0)
#define CLASS_1_C9E417278351157F_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19A4E460)
#define CLASS_1_C9E417278351157F_3_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x19A4E450)
#define CLASS_1_C9E417278351157F_3_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19A4E360)
#define CLASS_1_C9E417278351157F_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19A4E470)
#define CLASS_1_C9E417278351157F_3_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x19A4E440)
#define CLASS_1_C9E417278351157F_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A4E390)
#define CLASS_1_C9E417278351157F_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A4E590)
#define CLASS_1_C9E417278351157F_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A4E5F0)
#define CLASS_1_C9E417278351157F_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A4E890)
#define CLASS_1_C9E417278351157F_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A4E3B0)
#define CLASS_1_C9E417278351157F_3__CTOR_OFFSET UNITYSDK_OFFSET(0x19A4E3A0)

inline static constexpr unsigned int Class_1_C9E417278351157F_3_TypeDefinitionIndex = 25444;

class Class_1_C9E417278351157F_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C9E417278351157F_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C9E417278351157F_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9E417278351157F_3_TypeDefinitionIndex)->GetStaticField(0x4D7F0);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::Int64 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9E417278351157F_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9E417278351157F_3*))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C9E417278351157F_3*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C9E417278351157F_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_3_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9E417278351157F_3* Clone()
	{
		return ((::Class_1_C9E417278351157F_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_3_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_3_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_3_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9E417278351157F_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9E417278351157F_3*))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9E417278351157F_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9E417278351157F_3*))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
