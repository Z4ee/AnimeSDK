#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F591FD2BDE985BAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18235320)
#define CLASS_1_F591FD2BDE985BAF_CLONE_OFFSET UNITYSDK_OFFSET(0x18234FD0)
#define CLASS_1_F591FD2BDE985BAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18235170)
#define CLASS_1_F591FD2BDE985BAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x182350A0)
#define CLASS_1_F591FD2BDE985BAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18235210)
#define CLASS_1_F591FD2BDE985BAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18235460)
#define CLASS_1_F591FD2BDE985BAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18235380)
#define CLASS_1_F591FD2BDE985BAF_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18235080)
#define CLASS_1_F591FD2BDE985BAF_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18235090)
#define CLASS_1_F591FD2BDE985BAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18234F40)
#define CLASS_1_F591FD2BDE985BAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18235260)
#define CLASS_1_F591FD2BDE985BAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x182352C0)
#define CLASS_1_F591FD2BDE985BAF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18234F60)
#define CLASS_1_F591FD2BDE985BAF__CTOR_OFFSET UNITYSDK_OFFSET(0x18234F50)

inline static constexpr unsigned int Class_1_F591FD2BDE985BAF_TypeDefinitionIndex = 23318;

class Class_1_F591FD2BDE985BAF : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Class_1_735612C94F558EAE_5* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F591FD2BDE985BAF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F591FD2BDE985BAF*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F591FD2BDE985BAF* Clone()
	{
		return ((::Class_1_F591FD2BDE985BAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_CLONE_OFFSET))(this);
	}

	::Class_1_735612C94F558EAE_5* Method_1_24748FC20F375725()
	{
		return ((::Class_1_735612C94F558EAE_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_735612C94F558EAE_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_5*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F591FD2BDE985BAF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F591FD2BDE985BAF*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F591FD2BDE985BAF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F591FD2BDE985BAF*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F591FD2BDE985BAF_MERGEFROM_1_OFFSET))(this, a1);
	}
};
