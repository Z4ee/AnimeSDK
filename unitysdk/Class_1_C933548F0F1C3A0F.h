#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerSimpleInfo; }
namespace System { class String; }

#define CLASS_1_C933548F0F1C3A0F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B190A0)
#define CLASS_1_C933548F0F1C3A0F_CLONE_OFFSET UNITYSDK_OFFSET(0x17B18D10)
#define CLASS_1_C933548F0F1C3A0F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B18ED0)
#define CLASS_1_C933548F0F1C3A0F_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B18DF0)
#define CLASS_1_C933548F0F1C3A0F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B18F80)
#define CLASS_1_C933548F0F1C3A0F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B191E0)
#define CLASS_1_C933548F0F1C3A0F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B19100)
#define CLASS_1_C933548F0F1C3A0F_METHOD_1_2FF5CA20D3582DA7_OFFSET UNITYSDK_OFFSET(0x17B18DD0)
#define CLASS_1_C933548F0F1C3A0F_METHOD_1_76682DC918AEFE3C_OFFSET UNITYSDK_OFFSET(0x17B18DE0)
#define CLASS_1_C933548F0F1C3A0F_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17B18DC0)
#define CLASS_1_C933548F0F1C3A0F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17B18DB0)
#define CLASS_1_C933548F0F1C3A0F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B18C80)
#define CLASS_1_C933548F0F1C3A0F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B18FC0)
#define CLASS_1_C933548F0F1C3A0F_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B19020)
#define CLASS_1_C933548F0F1C3A0F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B18CA0)
#define CLASS_1_C933548F0F1C3A0F__CTOR_OFFSET UNITYSDK_OFFSET(0x17B18C90)

inline static constexpr unsigned int Class_1_C933548F0F1C3A0F_TypeDefinitionIndex = 24600;

class Class_1_C933548F0F1C3A0F : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Proto::PlayerSimpleInfo* Field_1_4; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C933548F0F1C3A0F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C933548F0F1C3A0F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C933548F0F1C3A0F*))((::PBYTE)hIl2Cpp + CLASS_1_C933548F0F1C3A0F__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C933548F0F1C3A0F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C933548F0F1C3A0F* Clone()
	{
		return ((::Class_1_C933548F0F1C3A0F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C933548F0F1C3A0F_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C933548F0F1C3A0F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C933548F0F1C3A0F_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Proto::PlayerSimpleInfo* Method_1_2FF5CA20D3582DA7()
	{
		return ((::Proto::PlayerSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C933548F0F1C3A0F_METHOD_1_2FF5CA20D3582DA7_OFFSET))(this);
	}

	::System::Void Method_1_76682DC918AEFE3C(::Proto::PlayerSimpleInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C933548F0F1C3A0F_METHOD_1_76682DC918AEFE3C_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C933548F0F1C3A0F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C933548F0F1C3A0F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C933548F0F1C3A0F*))((::PBYTE)hIl2Cpp + CLASS_1_C933548F0F1C3A0F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C933548F0F1C3A0F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C933548F0F1C3A0F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C933548F0F1C3A0F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C933548F0F1C3A0F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C933548F0F1C3A0F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C933548F0F1C3A0F*))((::PBYTE)hIl2Cpp + CLASS_1_C933548F0F1C3A0F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C933548F0F1C3A0F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
