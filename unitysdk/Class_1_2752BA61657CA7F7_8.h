#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_63BD26701645323A;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2752BA61657CA7F7_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CC50480)
#define CLASS_1_2752BA61657CA7F7_8_CLONE_OFFSET UNITYSDK_OFFSET(0x1CC4FE00)
#define CLASS_1_2752BA61657CA7F7_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CC50070)
#define CLASS_1_2752BA61657CA7F7_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CC4FED0)
#define CLASS_1_2752BA61657CA7F7_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC50340)
#define CLASS_1_2752BA61657CA7F7_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CC50580)
#define CLASS_1_2752BA61657CA7F7_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CC504E0)
#define CLASS_1_2752BA61657CA7F7_8_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CC4FEB0)
#define CLASS_1_2752BA61657CA7F7_8_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CC4FD10)
#define CLASS_1_2752BA61657CA7F7_8_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CC4FEC0)
#define CLASS_1_2752BA61657CA7F7_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CC4FD70)
#define CLASS_1_2752BA61657CA7F7_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC50390)
#define CLASS_1_2752BA61657CA7F7_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CC503F0)
#define CLASS_1_2752BA61657CA7F7_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC50750)
#define CLASS_1_2752BA61657CA7F7_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC4FD90)
#define CLASS_1_2752BA61657CA7F7_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC4FD80)

inline static constexpr unsigned int Class_1_2752BA61657CA7F7_8_TypeDefinitionIndex = 32908;

class Class_1_2752BA61657CA7F7_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2752BA61657CA7F7_8_TypeDefinitionIndex)->GetStaticField(0x39AA0);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_63BD26701645323A* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2752BA61657CA7F7_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2752BA61657CA7F7_8*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_8*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_8_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2752BA61657CA7F7_8* Clone()
	{
		return ((::Class_1_2752BA61657CA7F7_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_8_CLONE_OFFSET))(this);
	}

	::Class_1_63BD26701645323A* Method_1_24748FC20F375725()
	{
		return ((::Class_1_63BD26701645323A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_8_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_63BD26701645323A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63BD26701645323A*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_8_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2752BA61657CA7F7_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2752BA61657CA7F7_8*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2752BA61657CA7F7_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2752BA61657CA7F7_8*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
