#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D1162181046CB067_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FFD5D0)
#define CLASS_1_D1162181046CB067_CLONE_OFFSET UNITYSDK_OFFSET(0x17FFD1A0)
#define CLASS_1_D1162181046CB067_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FFD390)
#define CLASS_1_D1162181046CB067_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FFD2B0)
#define CLASS_1_D1162181046CB067_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FFD430)
#define CLASS_1_D1162181046CB067_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FFD760)
#define CLASS_1_D1162181046CB067_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FFD6F0)
#define CLASS_1_D1162181046CB067_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17FFD230)
#define CLASS_1_D1162181046CB067_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17FFD240)
#define CLASS_1_D1162181046CB067_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17FFD220)
#define CLASS_1_D1162181046CB067_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17FFD210)
#define CLASS_1_D1162181046CB067_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FFD140)
#define CLASS_1_D1162181046CB067_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FFD4E0)
#define CLASS_1_D1162181046CB067_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FFD540)
#define CLASS_1_D1162181046CB067__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FFD160)
#define CLASS_1_D1162181046CB067__CTOR_OFFSET UNITYSDK_OFFSET(0x17FFD150)

inline static constexpr unsigned int Class_1_D1162181046CB067_TypeDefinitionIndex = 25972;

class Class_1_D1162181046CB067 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::System::String* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1162181046CB067__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D1162181046CB067* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1162181046CB067*))((::PBYTE)hIl2Cpp + CLASS_1_D1162181046CB067__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1162181046CB067_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D1162181046CB067* Clone()
	{
		return ((::Class_1_D1162181046CB067*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1162181046CB067_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1162181046CB067_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D1162181046CB067_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1162181046CB067_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1162181046CB067_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1162181046CB067_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D1162181046CB067* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D1162181046CB067*))((::PBYTE)hIl2Cpp + CLASS_1_D1162181046CB067_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1162181046CB067_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1162181046CB067_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D1162181046CB067_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1162181046CB067_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D1162181046CB067* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1162181046CB067*))((::PBYTE)hIl2Cpp + CLASS_1_D1162181046CB067_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D1162181046CB067_MERGEFROM_1_OFFSET))(this, a1);
	}
};
