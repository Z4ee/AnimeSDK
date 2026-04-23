#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C9E417278351157F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19B29B00)
#define CLASS_1_C9E417278351157F_CLONE_OFFSET UNITYSDK_OFFSET(0x19B297A0)
#define CLASS_1_C9E417278351157F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19B29900)
#define CLASS_1_C9E417278351157F_EQUALS_OFFSET UNITYSDK_OFFSET(0x19B29880)
#define CLASS_1_C9E417278351157F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19B29970)
#define CLASS_1_C9E417278351157F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19B29E10)
#define CLASS_1_C9E417278351157F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19B29DB0)
#define CLASS_1_C9E417278351157F_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19B29860)
#define CLASS_1_C9E417278351157F_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19B29840)
#define CLASS_1_C9E417278351157F_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x19B29830)
#define CLASS_1_C9E417278351157F_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x19B29810)
#define CLASS_1_C9E417278351157F_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19B29710)
#define CLASS_1_C9E417278351157F_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19B29870)
#define CLASS_1_C9E417278351157F_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19B29850)
#define CLASS_1_C9E417278351157F_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x19B29820)
#define CLASS_1_C9E417278351157F_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x19B29800)
#define CLASS_1_C9E417278351157F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19B29740)
#define CLASS_1_C9E417278351157F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19B299D0)
#define CLASS_1_C9E417278351157F_WRITETO_OFFSET UNITYSDK_OFFSET(0x19B29A30)
#define CLASS_1_C9E417278351157F__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B29EB0)
#define CLASS_1_C9E417278351157F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19B29760)
#define CLASS_1_C9E417278351157F__CTOR_OFFSET UNITYSDK_OFFSET(0x19B29750)

inline static constexpr unsigned int Class_1_C9E417278351157F_TypeDefinitionIndex = 24033;

class Class_1_C9E417278351157F : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C9E417278351157F*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C9E417278351157F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9E417278351157F_TypeDefinitionIndex)->GetStaticField(0x616F0);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Int64 Field_1_3; // 0x18
	::System::UInt32 Field_1_7; // 0x20
	::System::UInt32 Field_1_9; // 0x24
	::System::Int64 Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9E417278351157F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9E417278351157F*))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C9E417278351157F*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C9E417278351157F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C9E417278351157F* Clone()
	{
		return ((::Class_1_C9E417278351157F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C9E417278351157F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C9E417278351157F*))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C9E417278351157F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9E417278351157F*))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C9E417278351157F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
