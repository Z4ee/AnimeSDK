#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2B30F71EDD41C80E_Enum_3_2E741879C8CDBAFC_22.h"
#include "unitysdk/System/Object.h"

class Class_1_8932205D2C1DE97F;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2B30F71EDD41C80E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C9B5D0)
#define CLASS_1_2B30F71EDD41C80E_CLONE_OFFSET UNITYSDK_OFFSET(0x17C9B2A0)
#define CLASS_1_2B30F71EDD41C80E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C9B320)
#define CLASS_1_2B30F71EDD41C80E_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C9B2F0)
#define CLASS_1_2B30F71EDD41C80E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C9B450)
#define CLASS_1_2B30F71EDD41C80E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C9B770)
#define CLASS_1_2B30F71EDD41C80E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C9B640)
#define CLASS_1_2B30F71EDD41C80E_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x17C9B2D0)
#define CLASS_1_2B30F71EDD41C80E_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17C9B2E0)
#define CLASS_1_2B30F71EDD41C80E_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17C9B280)
#define CLASS_1_2B30F71EDD41C80E_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x17C9B240)
#define CLASS_1_2B30F71EDD41C80E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C9B180)
#define CLASS_1_2B30F71EDD41C80E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C9B4F0)
#define CLASS_1_2B30F71EDD41C80E_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C9B550)
#define CLASS_1_2B30F71EDD41C80E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C9B1A0)
#define CLASS_1_2B30F71EDD41C80E__CTOR_OFFSET UNITYSDK_OFFSET(0x17C9B190)

inline static constexpr unsigned int Class_1_2B30F71EDD41C80E_TypeDefinitionIndex = 26994;

class Class_1_2B30F71EDD41C80E : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Object* Field_1_2; // 0x18
	::Class_1_2B30F71EDD41C80E_Enum_3_2E741879C8CDBAFC_22 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B30F71EDD41C80E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2B30F71EDD41C80E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B30F71EDD41C80E*))((::PBYTE)hIl2Cpp + CLASS_1_2B30F71EDD41C80E__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B30F71EDD41C80E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2B30F71EDD41C80E* Clone()
	{
		return ((::Class_1_2B30F71EDD41C80E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B30F71EDD41C80E_CLONE_OFFSET))(this);
	}

	::Class_1_8932205D2C1DE97F* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_8932205D2C1DE97F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B30F71EDD41C80E_METHOD_1_C4BFBB1BE6C0430A_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_8932205D2C1DE97F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8932205D2C1DE97F*))((::PBYTE)hIl2Cpp + CLASS_1_2B30F71EDD41C80E_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_2B30F71EDD41C80E_Enum_3_2E741879C8CDBAFC_22 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_2B30F71EDD41C80E_Enum_3_2E741879C8CDBAFC_22(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B30F71EDD41C80E_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B30F71EDD41C80E_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2B30F71EDD41C80E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2B30F71EDD41C80E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2B30F71EDD41C80E*))((::PBYTE)hIl2Cpp + CLASS_1_2B30F71EDD41C80E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B30F71EDD41C80E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B30F71EDD41C80E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2B30F71EDD41C80E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B30F71EDD41C80E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2B30F71EDD41C80E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B30F71EDD41C80E*))((::PBYTE)hIl2Cpp + CLASS_1_2B30F71EDD41C80E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2B30F71EDD41C80E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
