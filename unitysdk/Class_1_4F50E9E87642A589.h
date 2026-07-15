#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4F50E9E87642A589_Enum_3_FCBB2C507E9B21A3_9.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4F50E9E87642A589_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C5625E0)
#define CLASS_1_4F50E9E87642A589_CLONE_OFFSET UNITYSDK_OFFSET(0x1C561E60)
#define CLASS_1_4F50E9E87642A589_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C561F50)
#define CLASS_1_4F50E9E87642A589_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C561EF0)
#define CLASS_1_4F50E9E87642A589_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C562250)
#define CLASS_1_4F50E9E87642A589_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C562960)
#define CLASS_1_4F50E9E87642A589_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C5627F0)
#define CLASS_1_4F50E9E87642A589_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1C561ED0)
#define CLASS_1_4F50E9E87642A589_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C561B20)
#define CLASS_1_4F50E9E87642A589_METHOD_1_6BCB722BBE18B904_1_OFFSET UNITYSDK_OFFSET(0x1C561DB0)
#define CLASS_1_4F50E9E87642A589_METHOD_1_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x1C561D00)
#define CLASS_1_4F50E9E87642A589_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1C561EE0)
#define CLASS_1_4F50E9E87642A589_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C561EC0)
#define CLASS_1_4F50E9E87642A589_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C561EB0)
#define CLASS_1_4F50E9E87642A589_METHOD_1_F45A6C563F3DF7EB_1_OFFSET UNITYSDK_OFFSET(0x1C561E30)
#define CLASS_1_4F50E9E87642A589_METHOD_1_F45A6C563F3DF7EB_OFFSET UNITYSDK_OFFSET(0x1C561D80)
#define CLASS_1_4F50E9E87642A589_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C561B80)
#define CLASS_1_4F50E9E87642A589_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C562310)
#define CLASS_1_4F50E9E87642A589_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C562370)
#define CLASS_1_4F50E9E87642A589__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C562B40)
#define CLASS_1_4F50E9E87642A589__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C561BA0)
#define CLASS_1_4F50E9E87642A589__CTOR_OFFSET UNITYSDK_OFFSET(0x1C561B90)

inline static constexpr unsigned int Class_1_4F50E9E87642A589_TypeDefinitionIndex = 26409;

class Class_1_4F50E9E87642A589 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_4F50E9E87642A589*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4F50E9E87642A589*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4F50E9E87642A589_TypeDefinitionIndex)->GetStaticField(0x60810);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::Object* Field_1_5; // 0x18
	::System::Boolean Field_1_6; // 0x20
	::Class_1_4F50E9E87642A589_Enum_3_FCBB2C507E9B21A3_9 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4F50E9E87642A589* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4F50E9E87642A589*))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4F50E9E87642A589*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4F50E9E87642A589*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4F50E9E87642A589* Clone()
	{
		return ((::Class_1_4F50E9E87642A589*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_METHOD_1_6BCB722BBE18B904_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_METHOD_1_F45A6C563F3DF7EB_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_METHOD_1_6BCB722BBE18B904_1_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_METHOD_1_F45A6C563F3DF7EB_1_OFFSET))(this, a1);
	}

	::Class_1_4F50E9E87642A589_Enum_3_FCBB2C507E9B21A3_9 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_4F50E9E87642A589_Enum_3_FCBB2C507E9B21A3_9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4F50E9E87642A589* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4F50E9E87642A589*))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4F50E9E87642A589* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4F50E9E87642A589*))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4F50E9E87642A589_MERGEFROM_1_OFFSET))(this, a1);
	}
};
