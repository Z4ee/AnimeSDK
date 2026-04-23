#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A5ECC5BBA0109924_Enum_3_2E741879C8CDBAFC_12.h"
#include "unitysdk/System/Object.h"

class Class_1_28D410CCE235575F_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A5ECC5BBA0109924_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A8F230)
#define CLASS_1_A5ECC5BBA0109924_CLONE_OFFSET UNITYSDK_OFFSET(0x19A8EE20)
#define CLASS_1_A5ECC5BBA0109924_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A8EF10)
#define CLASS_1_A5ECC5BBA0109924_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A8EEB0)
#define CLASS_1_A5ECC5BBA0109924_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A8F070)
#define CLASS_1_A5ECC5BBA0109924_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A8F4A0)
#define CLASS_1_A5ECC5BBA0109924_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A8F2E0)
#define CLASS_1_A5ECC5BBA0109924_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x19A8EE90)
#define CLASS_1_A5ECC5BBA0109924_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19A8EC40)
#define CLASS_1_A5ECC5BBA0109924_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x19A8EDA0)
#define CLASS_1_A5ECC5BBA0109924_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19A8EEA0)
#define CLASS_1_A5ECC5BBA0109924_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19A8EE00)
#define CLASS_1_A5ECC5BBA0109924_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19A8EE80)
#define CLASS_1_A5ECC5BBA0109924_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19A8EE70)
#define CLASS_1_A5ECC5BBA0109924_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A8ECA0)
#define CLASS_1_A5ECC5BBA0109924_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A8F100)
#define CLASS_1_A5ECC5BBA0109924_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A8F160)
#define CLASS_1_A5ECC5BBA0109924__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A8F5F0)
#define CLASS_1_A5ECC5BBA0109924__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A8ECC0)
#define CLASS_1_A5ECC5BBA0109924__CTOR_OFFSET UNITYSDK_OFFSET(0x19A8ECB0)

inline static constexpr unsigned int Class_1_A5ECC5BBA0109924_TypeDefinitionIndex = 27487;

class Class_1_A5ECC5BBA0109924 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_A5ECC5BBA0109924*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A5ECC5BBA0109924*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A5ECC5BBA0109924_TypeDefinitionIndex)->GetStaticField(0x534D0);
	}
	// static const ::System::Int32 Field_1_2 = 0x7AD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Object* Field_1_5; // 0x18
	::System::Boolean Field_1_4; // 0x20
	::Class_1_A5ECC5BBA0109924_Enum_3_2E741879C8CDBAFC_12 Field_1_6; // 0x24

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

	::Class_1_28D410CCE235575F_2* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_28D410CCE235575F_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_28D410CCE235575F_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28D410CCE235575F_2*))((::PBYTE)hIl2Cpp + CLASS_1_A5ECC5BBA0109924_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
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
