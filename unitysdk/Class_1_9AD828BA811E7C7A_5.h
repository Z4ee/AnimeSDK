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

#define CLASS_1_9AD828BA811E7C7A_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19FF60C0)
#define CLASS_1_9AD828BA811E7C7A_5_CLONE_OFFSET UNITYSDK_OFFSET(0x19FF5C10)
#define CLASS_1_9AD828BA811E7C7A_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19FF5DD0)
#define CLASS_1_9AD828BA811E7C7A_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x19FF5D20)
#define CLASS_1_9AD828BA811E7C7A_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19FF5E80)
#define CLASS_1_9AD828BA811E7C7A_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19FF6260)
#define CLASS_1_9AD828BA811E7C7A_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19FF6210)
#define CLASS_1_9AD828BA811E7C7A_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19FF5CA0)
#define CLASS_1_9AD828BA811E7C7A_5_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x19FF5CC0)
#define CLASS_1_9AD828BA811E7C7A_5_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19FF5B00)
#define CLASS_1_9AD828BA811E7C7A_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19FF5CB0)
#define CLASS_1_9AD828BA811E7C7A_5_METHOD_1_8380E7BF9C2E481D_OFFSET UNITYSDK_OFFSET(0x19FF5CD0)
#define CLASS_1_9AD828BA811E7C7A_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19FF5B30)
#define CLASS_1_9AD828BA811E7C7A_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19FF5FB0)
#define CLASS_1_9AD828BA811E7C7A_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x19FF6010)
#define CLASS_1_9AD828BA811E7C7A_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FF6410)
#define CLASS_1_9AD828BA811E7C7A_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19FF5B90)
#define CLASS_1_9AD828BA811E7C7A_5__CTOR_OFFSET UNITYSDK_OFFSET(0x19FF5B40)

inline static constexpr unsigned int Class_1_9AD828BA811E7C7A_5_TypeDefinitionIndex = 32373;

class Class_1_9AD828BA811E7C7A_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_5*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9AD828BA811E7C7A_5_TypeDefinitionIndex)->GetStaticField(0x16360);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	::Google::Protobuf::ByteString* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9AD828BA811E7C7A_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_5*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_5*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9AD828BA811E7C7A_5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_5_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9AD828BA811E7C7A_5* Clone()
	{
		return ((::Class_1_9AD828BA811E7C7A_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_5_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_5_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_8380E7BF9C2E481D(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_5_METHOD_1_8380E7BF9C2E481D_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9AD828BA811E7C7A_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_5*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9AD828BA811E7C7A_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_5*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9AD828BA811E7C7A_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
