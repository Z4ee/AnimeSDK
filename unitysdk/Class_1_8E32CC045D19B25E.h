#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C3162D2F7EA647B9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8E32CC045D19B25E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BFCCF90)
#define CLASS_1_8E32CC045D19B25E_CLONE_OFFSET UNITYSDK_OFFSET(0x1BFCC960)
#define CLASS_1_8E32CC045D19B25E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BFCCA80)
#define CLASS_1_8E32CC045D19B25E_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BFCCA20)
#define CLASS_1_8E32CC045D19B25E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BFCCC70)
#define CLASS_1_8E32CC045D19B25E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BFCD250)
#define CLASS_1_8E32CC045D19B25E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BFCD160)
#define CLASS_1_8E32CC045D19B25E_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1BFCC9B0)
#define CLASS_1_8E32CC045D19B25E_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x1BFCCA10)
#define CLASS_1_8E32CC045D19B25E_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1BFCC9F0)
#define CLASS_1_8E32CC045D19B25E_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1BFCC790)
#define CLASS_1_8E32CC045D19B25E_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1BFCC9C0)
#define CLASS_1_8E32CC045D19B25E_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1BFCCA00)
#define CLASS_1_8E32CC045D19B25E_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1BFCC9E0)
#define CLASS_1_8E32CC045D19B25E_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1BFCC9D0)
#define CLASS_1_8E32CC045D19B25E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BFCC7F0)
#define CLASS_1_8E32CC045D19B25E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BFCCD50)
#define CLASS_1_8E32CC045D19B25E_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BFCCDB0)
#define CLASS_1_8E32CC045D19B25E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFCD3A0)
#define CLASS_1_8E32CC045D19B25E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BFCC850)
#define CLASS_1_8E32CC045D19B25E__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFCC800)

inline static constexpr unsigned int Class_1_8E32CC045D19B25E_TypeDefinitionIndex = 31928;

class Class_1_8E32CC045D19B25E : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_C3162D2F7EA647B9*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_C3162D2F7EA647B9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E32CC045D19B25E_TypeDefinitionIndex)->GetStaticField(0x28DA0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_8E32CC045D19B25E*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_8E32CC045D19B25E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E32CC045D19B25E_TypeDefinitionIndex)->GetStaticField(0x28DA8);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_C3162D2F7EA647B9*>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x18
	::Class_1_C3162D2F7EA647B9* Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x28
	::System::Int32 Field_1_10; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8E32CC045D19B25E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8E32CC045D19B25E*))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_8E32CC045D19B25E*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_8E32CC045D19B25E*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8E32CC045D19B25E* Clone()
	{
		return ((::Class_1_8E32CC045D19B25E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::Class_1_C3162D2F7EA647B9* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C3162D2F7EA647B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C3162D2F7EA647B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3162D2F7EA647B9*))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_C3162D2F7EA647B9*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_C3162D2F7EA647B9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8E32CC045D19B25E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8E32CC045D19B25E*))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8E32CC045D19B25E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8E32CC045D19B25E*))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8E32CC045D19B25E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
