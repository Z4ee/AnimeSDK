#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8AEFAF34E978A01A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BFEAB0)
#define CLASS_1_8AEFAF34E978A01A_CLONE_OFFSET UNITYSDK_OFFSET(0x17BFE560)
#define CLASS_1_8AEFAF34E978A01A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BFE790)
#define CLASS_1_8AEFAF34E978A01A_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BFE6C0)
#define CLASS_1_8AEFAF34E978A01A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BFE860)
#define CLASS_1_8AEFAF34E978A01A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BFEC10)
#define CLASS_1_8AEFAF34E978A01A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BFEB80)
#define CLASS_1_8AEFAF34E978A01A_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x17BFE5F0)
#define CLASS_1_8AEFAF34E978A01A_METHOD_1_C271468BB9D81456_OFFSET UNITYSDK_OFFSET(0x17BFE600)
#define CLASS_1_8AEFAF34E978A01A_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17BFE6B0)
#define CLASS_1_8AEFAF34E978A01A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17BFE6A0)
#define CLASS_1_8AEFAF34E978A01A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BFE480)
#define CLASS_1_8AEFAF34E978A01A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BFE9A0)
#define CLASS_1_8AEFAF34E978A01A_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BFEA00)
#define CLASS_1_8AEFAF34E978A01A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BFE4E0)
#define CLASS_1_8AEFAF34E978A01A__CTOR_OFFSET UNITYSDK_OFFSET(0x17BFE490)

inline static constexpr unsigned int Class_1_8AEFAF34E978A01A_TypeDefinitionIndex = 27014;

class Class_1_8AEFAF34E978A01A : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	::Google::Protobuf::ByteString* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::Boolean Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AEFAF34E978A01A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8AEFAF34E978A01A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8AEFAF34E978A01A*))((::PBYTE)hIl2Cpp + CLASS_1_8AEFAF34E978A01A__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AEFAF34E978A01A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8AEFAF34E978A01A* Clone()
	{
		return ((::Class_1_8AEFAF34E978A01A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AEFAF34E978A01A_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AEFAF34E978A01A_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_C271468BB9D81456(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_8AEFAF34E978A01A_METHOD_1_C271468BB9D81456_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AEFAF34E978A01A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8AEFAF34E978A01A_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8AEFAF34E978A01A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8AEFAF34E978A01A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8AEFAF34E978A01A*))((::PBYTE)hIl2Cpp + CLASS_1_8AEFAF34E978A01A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AEFAF34E978A01A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AEFAF34E978A01A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8AEFAF34E978A01A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AEFAF34E978A01A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8AEFAF34E978A01A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8AEFAF34E978A01A*))((::PBYTE)hIl2Cpp + CLASS_1_8AEFAF34E978A01A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8AEFAF34E978A01A_MERGEFROM_1_OFFSET))(this, a1);
	}
};
