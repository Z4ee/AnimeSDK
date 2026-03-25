#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class Item; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_653D624DCE8882E4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E030F0)
#define CLASS_1_653D624DCE8882E4_CLONE_OFFSET UNITYSDK_OFFSET(0x17E02BC0)
#define CLASS_1_653D624DCE8882E4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E02E00)
#define CLASS_1_653D624DCE8882E4_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E02C90)
#define CLASS_1_653D624DCE8882E4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E02F30)
#define CLASS_1_653D624DCE8882E4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E03330)
#define CLASS_1_653D624DCE8882E4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E031B0)
#define CLASS_1_653D624DCE8882E4_METHOD_1_05C52192594385BB_OFFSET UNITYSDK_OFFSET(0x17E02C70)
#define CLASS_1_653D624DCE8882E4_METHOD_1_246E6D0E25F98E80_OFFSET UNITYSDK_OFFSET(0x17E02C80)
#define CLASS_1_653D624DCE8882E4_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x17E02C60)
#define CLASS_1_653D624DCE8882E4_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17E02C20)
#define CLASS_1_653D624DCE8882E4_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x17E02C50)
#define CLASS_1_653D624DCE8882E4_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17E02C10)
#define CLASS_1_653D624DCE8882E4_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17E02C40)
#define CLASS_1_653D624DCE8882E4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17E02C30)
#define CLASS_1_653D624DCE8882E4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E02AA0)
#define CLASS_1_653D624DCE8882E4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E02FC0)
#define CLASS_1_653D624DCE8882E4_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E03020)
#define CLASS_1_653D624DCE8882E4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E02AC0)
#define CLASS_1_653D624DCE8882E4__CTOR_OFFSET UNITYSDK_OFFSET(0x17E02AB0)

inline static constexpr unsigned int Class_1_653D624DCE8882E4_TypeDefinitionIndex = 24697;

class Class_1_653D624DCE8882E4 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	::Proto::Item* Field_1_8; // 0x10
	::Proto::ItemList* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Proto::ItemList* Field_1_2; // 0x28
	::System::Boolean Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_653D624DCE8882E4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_653D624DCE8882E4*))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_653D624DCE8882E4* Clone()
	{
		return ((::Class_1_653D624DCE8882E4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_1()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_1(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4_METHOD_1_686CBC4FBD0AAA58_1_OFFSET))(this, a1);
	}

	::Proto::Item* Method_1_05C52192594385BB()
	{
		return ((::Proto::Item*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4_METHOD_1_05C52192594385BB_OFFSET))(this);
	}

	::System::Void Method_1_246E6D0E25F98E80(::Proto::Item* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::Item*))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4_METHOD_1_246E6D0E25F98E80_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_653D624DCE8882E4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_653D624DCE8882E4*))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_653D624DCE8882E4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_653D624DCE8882E4*))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_653D624DCE8882E4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
