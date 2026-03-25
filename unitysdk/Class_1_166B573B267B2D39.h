#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F1F83A16E5B8B459_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_166B573B267B2D39_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DCC950)
#define CLASS_1_166B573B267B2D39_CLONE_OFFSET UNITYSDK_OFFSET(0x17DCC600)
#define CLASS_1_166B573B267B2D39_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DCC770)
#define CLASS_1_166B573B267B2D39_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DCC6C0)
#define CLASS_1_166B573B267B2D39_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DCC820)
#define CLASS_1_166B573B267B2D39_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DCCB50)
#define CLASS_1_166B573B267B2D39_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DCCA20)
#define CLASS_1_166B573B267B2D39_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17DCC6A0)
#define CLASS_1_166B573B267B2D39_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17DCC680)
#define CLASS_1_166B573B267B2D39_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17DCC6B0)
#define CLASS_1_166B573B267B2D39_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17DCC690)
#define CLASS_1_166B573B267B2D39_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DCC570)
#define CLASS_1_166B573B267B2D39_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DCC870)
#define CLASS_1_166B573B267B2D39_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DCC8D0)
#define CLASS_1_166B573B267B2D39__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DCC590)
#define CLASS_1_166B573B267B2D39__CTOR_OFFSET UNITYSDK_OFFSET(0x17DCC580)

inline static constexpr unsigned int Class_1_166B573B267B2D39_TypeDefinitionIndex = 26356;

class Class_1_166B573B267B2D39 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_F1F83A16E5B8B459_3* Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_166B573B267B2D39__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_166B573B267B2D39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_166B573B267B2D39*))((::PBYTE)hIl2Cpp + CLASS_1_166B573B267B2D39__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_166B573B267B2D39_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_166B573B267B2D39* Clone()
	{
		return ((::Class_1_166B573B267B2D39*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_166B573B267B2D39_CLONE_OFFSET))(this);
	}

	::Class_1_F1F83A16E5B8B459_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_F1F83A16E5B8B459_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_166B573B267B2D39_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_F1F83A16E5B8B459_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F1F83A16E5B8B459_3*))((::PBYTE)hIl2Cpp + CLASS_1_166B573B267B2D39_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_166B573B267B2D39_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_166B573B267B2D39_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_166B573B267B2D39_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_166B573B267B2D39* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_166B573B267B2D39*))((::PBYTE)hIl2Cpp + CLASS_1_166B573B267B2D39_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_166B573B267B2D39_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_166B573B267B2D39_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_166B573B267B2D39_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_166B573B267B2D39_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_166B573B267B2D39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_166B573B267B2D39*))((::PBYTE)hIl2Cpp + CLASS_1_166B573B267B2D39_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_166B573B267B2D39_MERGEFROM_1_OFFSET))(this, a1);
	}
};
