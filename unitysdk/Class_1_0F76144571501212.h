#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0F76144571501212_Enum_3_FCBB2C507E9B21A3_25.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0F76144571501212_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19D31980)
#define CLASS_1_0F76144571501212_CLONE_OFFSET UNITYSDK_OFFSET(0x19D31380)
#define CLASS_1_0F76144571501212_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19D31420)
#define CLASS_1_0F76144571501212_EQUALS_OFFSET UNITYSDK_OFFSET(0x19D313F0)
#define CLASS_1_0F76144571501212_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19D31690)
#define CLASS_1_0F76144571501212_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19D31DD0)
#define CLASS_1_0F76144571501212_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19D31C30)
#define CLASS_1_0F76144571501212_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19D313B0)
#define CLASS_1_0F76144571501212_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x19D313D0)
#define CLASS_1_0F76144571501212_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19D31000)
#define CLASS_1_0F76144571501212_METHOD_1_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x19D312D0)
#define CLASS_1_0F76144571501212_METHOD_1_71F0872EB31B61BD_OFFSET UNITYSDK_OFFSET(0x19D311F0)
#define CLASS_1_0F76144571501212_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19D313C0)
#define CLASS_1_0F76144571501212_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19D313E0)
#define CLASS_1_0F76144571501212_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x19D31230)
#define CLASS_1_0F76144571501212_METHOD_1_F45A6C563F3DF7EB_OFFSET UNITYSDK_OFFSET(0x19D31350)
#define CLASS_1_0F76144571501212_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19D31030)
#define CLASS_1_0F76144571501212_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19D317D0)
#define CLASS_1_0F76144571501212_WRITETO_OFFSET UNITYSDK_OFFSET(0x19D31830)
#define CLASS_1_0F76144571501212__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D31F20)
#define CLASS_1_0F76144571501212__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19D31050)
#define CLASS_1_0F76144571501212__CTOR_OFFSET UNITYSDK_OFFSET(0x19D31040)

inline static constexpr unsigned int Class_1_0F76144571501212_TypeDefinitionIndex = 28326;

class Class_1_0F76144571501212 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_0F76144571501212*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0F76144571501212*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F76144571501212_TypeDefinitionIndex)->GetStaticField(0x69D00);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Object* Field_1_6; // 0x18
	::System::UInt32 Field_1_3; // 0x20
	::Class_1_0F76144571501212_Enum_3_FCBB2C507E9B21A3_25 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0F76144571501212* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0F76144571501212*))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0F76144571501212*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0F76144571501212*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0F76144571501212* Clone()
	{
		return ((::Class_1_0F76144571501212*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::String* Method_1_71F0872EB31B61BD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_METHOD_1_71F0872EB31B61BD_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_METHOD_1_6BCB722BBE18B904_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_METHOD_1_F45A6C563F3DF7EB_OFFSET))(this, a1);
	}

	::Class_1_0F76144571501212_Enum_3_FCBB2C507E9B21A3_25 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_0F76144571501212_Enum_3_FCBB2C507E9B21A3_25(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0F76144571501212* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0F76144571501212*))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0F76144571501212* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0F76144571501212*))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0F76144571501212_MERGEFROM_1_OFFSET))(this, a1);
	}
};
