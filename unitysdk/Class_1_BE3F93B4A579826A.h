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

#define CLASS_1_BE3F93B4A579826A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C72C1A0)
#define CLASS_1_BE3F93B4A579826A_CLONE_OFFSET UNITYSDK_OFFSET(0x1C72BB20)
#define CLASS_1_BE3F93B4A579826A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C72BD10)
#define CLASS_1_BE3F93B4A579826A_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C72BC70)
#define CLASS_1_BE3F93B4A579826A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C72BE30)
#define CLASS_1_BE3F93B4A579826A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C72C4A0)
#define CLASS_1_BE3F93B4A579826A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C72C440)
#define CLASS_1_BE3F93B4A579826A_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C72BC50)
#define CLASS_1_BE3F93B4A579826A_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C72BBB0)
#define CLASS_1_BE3F93B4A579826A_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x1C72BBF0)
#define CLASS_1_BE3F93B4A579826A_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1C72BBE0)
#define CLASS_1_BE3F93B4A579826A_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C72BA00)
#define CLASS_1_BE3F93B4A579826A_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C72BC60)
#define CLASS_1_BE3F93B4A579826A_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C72BBC0)
#define CLASS_1_BE3F93B4A579826A_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1C72BBD0)
#define CLASS_1_BE3F93B4A579826A_METHOD_1_8380E7BF9C2E481D_OFFSET UNITYSDK_OFFSET(0x1C72BC00)
#define CLASS_1_BE3F93B4A579826A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C72BA30)
#define CLASS_1_BE3F93B4A579826A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C72BF70)
#define CLASS_1_BE3F93B4A579826A_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C72BFD0)
#define CLASS_1_BE3F93B4A579826A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C72C580)
#define CLASS_1_BE3F93B4A579826A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C72BA90)
#define CLASS_1_BE3F93B4A579826A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C72BA40)

inline static constexpr unsigned int Class_1_BE3F93B4A579826A_TypeDefinitionIndex = 24393;

class Class_1_BE3F93B4A579826A : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_BE3F93B4A579826A*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_BE3F93B4A579826A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE3F93B4A579826A_TypeDefinitionIndex)->GetStaticField(0x2B740);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Google::Protobuf::ByteString* Field_1_6; // 0x18
	::System::Int64 Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x28
	::System::UInt32 Field_1_9; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BE3F93B4A579826A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE3F93B4A579826A*))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_BE3F93B4A579826A*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_BE3F93B4A579826A*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BE3F93B4A579826A* Clone()
	{
		return ((::Class_1_BE3F93B4A579826A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_8380E7BF9C2E481D(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_METHOD_1_8380E7BF9C2E481D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BE3F93B4A579826A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BE3F93B4A579826A*))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BE3F93B4A579826A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE3F93B4A579826A*))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BE3F93B4A579826A_MERGEFROM_1_OFFSET))(this, a1);
	}
};
