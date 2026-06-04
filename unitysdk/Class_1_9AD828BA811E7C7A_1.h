#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9AD828BA811E7C7A_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A9A8570)
#define CLASS_1_9AD828BA811E7C7A_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1A9A8070)
#define CLASS_1_9AD828BA811E7C7A_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A9A8280)
#define CLASS_1_9AD828BA811E7C7A_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A9A81A0)
#define CLASS_1_9AD828BA811E7C7A_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A9A8330)
#define CLASS_1_9AD828BA811E7C7A_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A9A8710)
#define CLASS_1_9AD828BA811E7C7A_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A9A86C0)
#define CLASS_1_9AD828BA811E7C7A_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A9A8180)
#define CLASS_1_9AD828BA811E7C7A_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A9A7F30)
#define CLASS_1_9AD828BA811E7C7A_1_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x1A9A8120)
#define CLASS_1_9AD828BA811E7C7A_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A9A8190)
#define CLASS_1_9AD828BA811E7C7A_1_METHOD_1_8380E7BF9C2E481D_OFFSET UNITYSDK_OFFSET(0x1A9A8130)
#define CLASS_1_9AD828BA811E7C7A_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A9A7F90)
#define CLASS_1_9AD828BA811E7C7A_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A9A8460)
#define CLASS_1_9AD828BA811E7C7A_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A9A84C0)
#define CLASS_1_9AD828BA811E7C7A_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9A88C0)
#define CLASS_1_9AD828BA811E7C7A_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A9A7FF0)
#define CLASS_1_9AD828BA811E7C7A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9A7FA0)

inline static constexpr unsigned int Class_1_9AD828BA811E7C7A_1_TypeDefinitionIndex = 26788;

class Class_1_9AD828BA811E7C7A_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AD828BA811E7C7A_1_TypeDefinitionIndex)->GetStaticField(0x66B90);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::ByteString* Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9AD828BA811E7C7A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_1*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9AD828BA811E7C7A_1* Clone()
	{
		return ((::Class_1_9AD828BA811E7C7A_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_1_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_8380E7BF9C2E481D(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_1_METHOD_1_8380E7BF9C2E481D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9AD828BA811E7C7A_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_1*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9AD828BA811E7C7A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_1*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
