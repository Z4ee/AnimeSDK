#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_90D4E202B453D244_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDC90F0)
#define CLASS_1_90D4E202B453D244_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDC8AD0)
#define CLASS_1_90D4E202B453D244_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDC8D70)
#define CLASS_1_90D4E202B453D244_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDC8BB0)
#define CLASS_1_90D4E202B453D244_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDC8EF0)
#define CLASS_1_90D4E202B453D244_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDC91E0)
#define CLASS_1_90D4E202B453D244_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDC9150)
#define CLASS_1_90D4E202B453D244_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DDC89E0)
#define CLASS_1_90D4E202B453D244_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1DDC8BA0)
#define CLASS_1_90D4E202B453D244_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1DDC8B90)
#define CLASS_1_90D4E202B453D244_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1DDC8B80)
#define CLASS_1_90D4E202B453D244_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1DDC8B70)
#define CLASS_1_90D4E202B453D244_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDC8A40)
#define CLASS_1_90D4E202B453D244_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDC8F80)
#define CLASS_1_90D4E202B453D244_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDC8FE0)
#define CLASS_1_90D4E202B453D244__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC93A0)
#define CLASS_1_90D4E202B453D244__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDC8A60)
#define CLASS_1_90D4E202B453D244__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC8A50)

inline static constexpr unsigned int Class_1_90D4E202B453D244_TypeDefinitionIndex = 26612;

class Class_1_90D4E202B453D244 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_90D4E202B453D244*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_90D4E202B453D244*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90D4E202B453D244_TypeDefinitionIndex)->GetStaticField(0x342E0);
	}
	// static const ::System::Int32 OOLLDLHKDOH = 0x5; // 0x0
	// static const ::System::Int32 DPPAFBAHEFH = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Proto::ItemList* DALKEINMPBH; // 0x18
	::System::Boolean DHMADBLCKKD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90D4E202B453D244__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_90D4E202B453D244* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_90D4E202B453D244*))((::PBYTE)hIl2Cpp + CLASS_1_90D4E202B453D244__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_90D4E202B453D244__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_90D4E202B453D244*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_90D4E202B453D244*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_90D4E202B453D244_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90D4E202B453D244_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_90D4E202B453D244* Clone()
	{
		return ((::Class_1_90D4E202B453D244*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90D4E202B453D244_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90D4E202B453D244_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_90D4E202B453D244_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90D4E202B453D244_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_90D4E202B453D244_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_90D4E202B453D244_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_90D4E202B453D244* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_90D4E202B453D244*))((::PBYTE)hIl2Cpp + CLASS_1_90D4E202B453D244_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90D4E202B453D244_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90D4E202B453D244_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_90D4E202B453D244_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90D4E202B453D244_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_90D4E202B453D244* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_90D4E202B453D244*))((::PBYTE)hIl2Cpp + CLASS_1_90D4E202B453D244_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_90D4E202B453D244_MERGEFROM_1_OFFSET))(this, a1);
	}
};
