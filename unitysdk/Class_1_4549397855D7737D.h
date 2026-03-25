#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4549397855D7737D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C87370)
#define CLASS_1_4549397855D7737D_CLONE_OFFSET UNITYSDK_OFFSET(0x17C86FF0)
#define CLASS_1_4549397855D7737D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C871A0)
#define CLASS_1_4549397855D7737D_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C870D0)
#define CLASS_1_4549397855D7737D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C87220)
#define CLASS_1_4549397855D7737D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C874C0)
#define CLASS_1_4549397855D7737D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C87470)
#define CLASS_1_4549397855D7737D_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17C870A0)
#define CLASS_1_4549397855D7737D_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x17C870C0)
#define CLASS_1_4549397855D7737D_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17C87080)
#define CLASS_1_4549397855D7737D_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17C87090)
#define CLASS_1_4549397855D7737D_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17C870B0)
#define CLASS_1_4549397855D7737D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17C87070)
#define CLASS_1_4549397855D7737D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C86F90)
#define CLASS_1_4549397855D7737D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C87270)
#define CLASS_1_4549397855D7737D_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C872D0)
#define CLASS_1_4549397855D7737D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C86FB0)
#define CLASS_1_4549397855D7737D__CTOR_OFFSET UNITYSDK_OFFSET(0x17C86FA0)

inline static constexpr unsigned int Class_1_4549397855D7737D_TypeDefinitionIndex = 25522;

class Class_1_4549397855D7737D : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::Boolean Field_1_6; // 0x19
	::System::UInt64 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4549397855D7737D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4549397855D7737D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4549397855D7737D*))((::PBYTE)hIl2Cpp + CLASS_1_4549397855D7737D__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4549397855D7737D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4549397855D7737D* Clone()
	{
		return ((::Class_1_4549397855D7737D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4549397855D7737D_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4549397855D7737D_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4549397855D7737D_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4549397855D7737D_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_4549397855D7737D_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4549397855D7737D_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4549397855D7737D_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4549397855D7737D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4549397855D7737D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4549397855D7737D*))((::PBYTE)hIl2Cpp + CLASS_1_4549397855D7737D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4549397855D7737D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4549397855D7737D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4549397855D7737D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4549397855D7737D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4549397855D7737D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4549397855D7737D*))((::PBYTE)hIl2Cpp + CLASS_1_4549397855D7737D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4549397855D7737D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
