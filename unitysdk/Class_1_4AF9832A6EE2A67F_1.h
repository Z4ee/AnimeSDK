#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4AF9832A6EE2A67F_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DBEA0D0)
#define CLASS_1_4AF9832A6EE2A67F_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1DBE9CD0)
#define CLASS_1_4AF9832A6EE2A67F_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DBE9E90)
#define CLASS_1_4AF9832A6EE2A67F_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DBE9D70)
#define CLASS_1_4AF9832A6EE2A67F_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DBE9F80)
#define CLASS_1_4AF9832A6EE2A67F_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DBEA1C0)
#define CLASS_1_4AF9832A6EE2A67F_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DBEA170)
#define CLASS_1_4AF9832A6EE2A67F_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DBE9BC0)
#define CLASS_1_4AF9832A6EE2A67F_1_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x1DBE9D60)
#define CLASS_1_4AF9832A6EE2A67F_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DBE9C20)
#define CLASS_1_4AF9832A6EE2A67F_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DBE9FC0)
#define CLASS_1_4AF9832A6EE2A67F_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DBEA020)
#define CLASS_1_4AF9832A6EE2A67F_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBEA380)
#define CLASS_1_4AF9832A6EE2A67F_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DBE9C60)
#define CLASS_1_4AF9832A6EE2A67F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBE9C30)

inline static constexpr unsigned int Class_1_4AF9832A6EE2A67F_1_TypeDefinitionIndex = 30991;

class Class_1_4AF9832A6EE2A67F_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_MIJGAGLDBKP()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AF9832A6EE2A67F_1_TypeDefinitionIndex)->GetStaticField(0x39650);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_4AF9832A6EE2A67F_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4AF9832A6EE2A67F_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AF9832A6EE2A67F_1_TypeDefinitionIndex)->GetStaticField(0x39658);
	}
	// static const ::System::Int32 PKCJPOMLOBD = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* LDFHCAHNJCB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4AF9832A6EE2A67F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF9832A6EE2A67F_1*))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4AF9832A6EE2A67F_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4AF9832A6EE2A67F_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4AF9832A6EE2A67F_1* Clone()
	{
		return ((::Class_1_4AF9832A6EE2A67F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_1_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4AF9832A6EE2A67F_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4AF9832A6EE2A67F_1*))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4AF9832A6EE2A67F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF9832A6EE2A67F_1*))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
