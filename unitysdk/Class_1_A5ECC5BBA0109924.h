#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A5ECC5BBA0109924_Enum_3_2E741879C8CDBAFC_12.h"
#include "unitysdk/System/Object.h"

class Class_1_28D410CCE235575F_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A5ECC5BBA0109924_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AA517E0)
#define CLASS_1_A5ECC5BBA0109924_CLONE_OFFSET UNITYSDK_OFFSET(0x1AA513D0)
#define CLASS_1_A5ECC5BBA0109924_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AA514C0)
#define CLASS_1_A5ECC5BBA0109924_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA51460)
#define CLASS_1_A5ECC5BBA0109924_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AA51620)
#define CLASS_1_A5ECC5BBA0109924_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AA51A50)
#define CLASS_1_A5ECC5BBA0109924_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AA51890)
#define CLASS_1_A5ECC5BBA0109924_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1AA51440)
#define CLASS_1_A5ECC5BBA0109924_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1AA511F0)
#define CLASS_1_A5ECC5BBA0109924_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x1AA51350)
#define CLASS_1_A5ECC5BBA0109924_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1AA51450)
#define CLASS_1_A5ECC5BBA0109924_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1AA513B0)
#define CLASS_1_A5ECC5BBA0109924_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1AA51430)
#define CLASS_1_A5ECC5BBA0109924_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AA51420)
#define CLASS_1_A5ECC5BBA0109924_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AA51250)
#define CLASS_1_A5ECC5BBA0109924_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AA516B0)
#define CLASS_1_A5ECC5BBA0109924_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AA51710)
#define CLASS_1_A5ECC5BBA0109924__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA51CA0)
#define CLASS_1_A5ECC5BBA0109924__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AA51270)
#define CLASS_1_A5ECC5BBA0109924__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA51260)

inline static constexpr unsigned int Class_1_A5ECC5BBA0109924_TypeDefinitionIndex = 27466;

class Class_1_A5ECC5BBA0109924 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_A5ECC5BBA0109924*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A5ECC5BBA0109924*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A5ECC5BBA0109924_TypeDefinitionIndex)->GetStaticField(0x7BA0);
	}
	// static const ::System::Int32 Field_1_1 = 0x695; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::Object* Field_1_4; // 0x18
	::Class_1_A5ECC5BBA0109924_Enum_3_2E741879C8CDBAFC_12 Field_1_5; // 0x20
	::System::Boolean Field_1_6; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A5ECC5BBA0109924* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A5ECC5BBA0109924*))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A5ECC5BBA0109924*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A5ECC5BBA0109924*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A5ECC5BBA0109924* Clone()
	{
		return ((::Class_1_A5ECC5BBA0109924*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_CLONE_OFFSET))(this);
	}

	::Class_1_28D410CCE235575F_3* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_28D410CCE235575F_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_28D410CCE235575F_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28D410CCE235575F_3*))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_1_A5ECC5BBA0109924_Enum_3_2E741879C8CDBAFC_12 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_A5ECC5BBA0109924_Enum_3_2E741879C8CDBAFC_12(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A5ECC5BBA0109924* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A5ECC5BBA0109924*))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A5ECC5BBA0109924* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A5ECC5BBA0109924*))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_MERGEFROM_1_OFFSET))(this, a1);
	}
};
