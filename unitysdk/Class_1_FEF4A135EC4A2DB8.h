#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FEF4A135EC4A2DB8_Enum_3_FCBB2C507E9B21A3_1.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FEF4A135EC4A2DB8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x196D7E70)
#define CLASS_1_FEF4A135EC4A2DB8_CLONE_OFFSET UNITYSDK_OFFSET(0x196D7860)
#define CLASS_1_FEF4A135EC4A2DB8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x196D7930)
#define CLASS_1_FEF4A135EC4A2DB8_EQUALS_OFFSET UNITYSDK_OFFSET(0x196D78D0)
#define CLASS_1_FEF4A135EC4A2DB8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x196D7BA0)
#define CLASS_1_FEF4A135EC4A2DB8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x196D8220)
#define CLASS_1_FEF4A135EC4A2DB8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x196D8090)
#define CLASS_1_FEF4A135EC4A2DB8_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x196D78B0)
#define CLASS_1_FEF4A135EC4A2DB8_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x196D74C0)
#define CLASS_1_FEF4A135EC4A2DB8_METHOD_1_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x196D77B0)
#define CLASS_1_FEF4A135EC4A2DB8_METHOD_1_71F0872EB31B61BD_OFFSET UNITYSDK_OFFSET(0x196D76D0)
#define CLASS_1_FEF4A135EC4A2DB8_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x196D78C0)
#define CLASS_1_FEF4A135EC4A2DB8_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x196D7710)
#define CLASS_1_FEF4A135EC4A2DB8_METHOD_1_F45A6C563F3DF7EB_OFFSET UNITYSDK_OFFSET(0x196D7830)
#define CLASS_1_FEF4A135EC4A2DB8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x196D7520)
#define CLASS_1_FEF4A135EC4A2DB8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x196D7CE0)
#define CLASS_1_FEF4A135EC4A2DB8_WRITETO_OFFSET UNITYSDK_OFFSET(0x196D7D40)
#define CLASS_1_FEF4A135EC4A2DB8__CCTOR_OFFSET UNITYSDK_OFFSET(0x196D8360)
#define CLASS_1_FEF4A135EC4A2DB8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x196D7540)
#define CLASS_1_FEF4A135EC4A2DB8__CTOR_OFFSET UNITYSDK_OFFSET(0x196D7530)

inline static constexpr unsigned int Class_1_FEF4A135EC4A2DB8_TypeDefinitionIndex = 24594;

class Class_1_FEF4A135EC4A2DB8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_FEF4A135EC4A2DB8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_FEF4A135EC4A2DB8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEF4A135EC4A2DB8_TypeDefinitionIndex)->GetStaticField(0x4B460);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::System::Object* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Class_1_FEF4A135EC4A2DB8_Enum_3_FCBB2C507E9B21A3_1 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FEF4A135EC4A2DB8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FEF4A135EC4A2DB8*))((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_FEF4A135EC4A2DB8*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_FEF4A135EC4A2DB8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FEF4A135EC4A2DB8* Clone()
	{
		return ((::Class_1_FEF4A135EC4A2DB8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_71F0872EB31B61BD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8_METHOD_1_71F0872EB31B61BD_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8_METHOD_1_6BCB722BBE18B904_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8_METHOD_1_F45A6C563F3DF7EB_OFFSET))(this, a1);
	}

	::Class_1_FEF4A135EC4A2DB8_Enum_3_FCBB2C507E9B21A3_1 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_FEF4A135EC4A2DB8_Enum_3_FCBB2C507E9B21A3_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FEF4A135EC4A2DB8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FEF4A135EC4A2DB8*))((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FEF4A135EC4A2DB8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FEF4A135EC4A2DB8*))((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FEF4A135EC4A2DB8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
