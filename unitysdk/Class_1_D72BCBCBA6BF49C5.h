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

#define CLASS_1_D72BCBCBA6BF49C5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DC5C6E0)
#define CLASS_1_D72BCBCBA6BF49C5_CLONE_OFFSET UNITYSDK_OFFSET(0x1DC5C260)
#define CLASS_1_D72BCBCBA6BF49C5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DC5C440)
#define CLASS_1_D72BCBCBA6BF49C5_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DC5C2C0)
#define CLASS_1_D72BCBCBA6BF49C5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DC5C560)
#define CLASS_1_D72BCBCBA6BF49C5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DC5C7F0)
#define CLASS_1_D72BCBCBA6BF49C5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DC5C780)
#define CLASS_1_D72BCBCBA6BF49C5_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DC5C0F0)
#define CLASS_1_D72BCBCBA6BF49C5_METHOD_1_47587B9526E5B08E_OFFSET UNITYSDK_OFFSET(0x1DC5C2B0)
#define CLASS_1_D72BCBCBA6BF49C5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DC5C150)
#define CLASS_1_D72BCBCBA6BF49C5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DC5C5D0)
#define CLASS_1_D72BCBCBA6BF49C5_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DC5C630)
#define CLASS_1_D72BCBCBA6BF49C5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC5C9B0)
#define CLASS_1_D72BCBCBA6BF49C5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DC5C1B0)
#define CLASS_1_D72BCBCBA6BF49C5__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5C160)

inline static constexpr unsigned int Class_1_D72BCBCBA6BF49C5_TypeDefinitionIndex = 28720;

class Class_1_D72BCBCBA6BF49C5 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D72BCBCBA6BF49C5*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D72BCBCBA6BF49C5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D72BCBCBA6BF49C5_TypeDefinitionIndex)->GetStaticField(0x53C60);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::UInt32>** StaticGet_ADBHJGLDBND()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D72BCBCBA6BF49C5_TypeDefinitionIndex)->GetStaticField(0x53C68);
	}
	// static const ::System::Int32 MBIHEIALDIJ = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* DBAAPDGGDCO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D72BCBCBA6BF49C5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D72BCBCBA6BF49C5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D72BCBCBA6BF49C5*))((::PBYTE)hIl2Cpp + CLASS_1_D72BCBCBA6BF49C5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D72BCBCBA6BF49C5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D72BCBCBA6BF49C5*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D72BCBCBA6BF49C5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D72BCBCBA6BF49C5_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D72BCBCBA6BF49C5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D72BCBCBA6BF49C5* Clone()
	{
		return ((::Class_1_D72BCBCBA6BF49C5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D72BCBCBA6BF49C5_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* Method_1_47587B9526E5B08E()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D72BCBCBA6BF49C5_METHOD_1_47587B9526E5B08E_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D72BCBCBA6BF49C5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D72BCBCBA6BF49C5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D72BCBCBA6BF49C5*))((::PBYTE)hIl2Cpp + CLASS_1_D72BCBCBA6BF49C5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D72BCBCBA6BF49C5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D72BCBCBA6BF49C5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D72BCBCBA6BF49C5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D72BCBCBA6BF49C5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D72BCBCBA6BF49C5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D72BCBCBA6BF49C5*))((::PBYTE)hIl2Cpp + CLASS_1_D72BCBCBA6BF49C5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D72BCBCBA6BF49C5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
