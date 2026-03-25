#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_98648721E1B1456D_Enum_3_2E741879C8CDBAFC.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_98648721E1B1456D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BF0B30)
#define CLASS_1_98648721E1B1456D_CLONE_OFFSET UNITYSDK_OFFSET(0x17BF06F0)
#define CLASS_1_98648721E1B1456D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BF07C0)
#define CLASS_1_98648721E1B1456D_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BF0760)
#define CLASS_1_98648721E1B1456D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BF0960)
#define CLASS_1_98648721E1B1456D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BF0D00)
#define CLASS_1_98648721E1B1456D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BF0C40)
#define CLASS_1_98648721E1B1456D_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x17BF0740)
#define CLASS_1_98648721E1B1456D_METHOD_1_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x17BF0640)
#define CLASS_1_98648721E1B1456D_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17BF0750)
#define CLASS_1_98648721E1B1456D_METHOD_1_F45A6C563F3DF7EB_OFFSET UNITYSDK_OFFSET(0x17BF06C0)
#define CLASS_1_98648721E1B1456D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BF0560)
#define CLASS_1_98648721E1B1456D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BF0A00)
#define CLASS_1_98648721E1B1456D_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BF0A60)
#define CLASS_1_98648721E1B1456D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BF0580)
#define CLASS_1_98648721E1B1456D__CTOR_OFFSET UNITYSDK_OFFSET(0x17BF0570)

inline static constexpr unsigned int Class_1_98648721E1B1456D_TypeDefinitionIndex = 22997;

class Class_1_98648721E1B1456D : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x65; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Object* Field_1_2; // 0x18
	::Class_1_98648721E1B1456D_Enum_3_2E741879C8CDBAFC Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_98648721E1B1456D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98648721E1B1456D*))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_98648721E1B1456D* Clone()
	{
		return ((::Class_1_98648721E1B1456D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_METHOD_1_6BCB722BBE18B904_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_METHOD_1_F45A6C563F3DF7EB_OFFSET))(this, a1);
	}

	::Class_1_98648721E1B1456D_Enum_3_2E741879C8CDBAFC Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_98648721E1B1456D_Enum_3_2E741879C8CDBAFC(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_98648721E1B1456D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_98648721E1B1456D*))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_98648721E1B1456D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98648721E1B1456D*))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_98648721E1B1456D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
