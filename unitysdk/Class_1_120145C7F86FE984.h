#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B005A18003A04C3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_120145C7F86FE984_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CA17B10)
#define CLASS_1_120145C7F86FE984_CLONE_OFFSET UNITYSDK_OFFSET(0x1CA17410)
#define CLASS_1_120145C7F86FE984_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CA176C0)
#define CLASS_1_120145C7F86FE984_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CA17570)
#define CLASS_1_120145C7F86FE984_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA17880)
#define CLASS_1_120145C7F86FE984_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CA17D40)
#define CLASS_1_120145C7F86FE984_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CA17C60)
#define CLASS_1_120145C7F86FE984_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1CA17500)
#define CLASS_1_120145C7F86FE984_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1CA174F0)
#define CLASS_1_120145C7F86FE984_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CA17550)
#define CLASS_1_120145C7F86FE984_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1CA174E0)
#define CLASS_1_120145C7F86FE984_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CA172F0)
#define CLASS_1_120145C7F86FE984_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CA17560)
#define CLASS_1_120145C7F86FE984_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1CA174D0)
#define CLASS_1_120145C7F86FE984_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA17350)
#define CLASS_1_120145C7F86FE984_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CA17960)
#define CLASS_1_120145C7F86FE984_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CA179C0)
#define CLASS_1_120145C7F86FE984__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA17F70)
#define CLASS_1_120145C7F86FE984__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA17370)
#define CLASS_1_120145C7F86FE984__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA17360)

inline static constexpr unsigned int Class_1_120145C7F86FE984_TypeDefinitionIndex = 29167;

class Class_1_120145C7F86FE984 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_120145C7F86FE984*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_120145C7F86FE984*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_120145C7F86FE984_TypeDefinitionIndex)->GetStaticField(0x32640);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Class_1_7B005A18003A04C3* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::String* Field_1_6; // 0x20
	::System::UInt64 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_120145C7F86FE984* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120145C7F86FE984*))((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_120145C7F86FE984*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_120145C7F86FE984*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_120145C7F86FE984* Clone()
	{
		return ((::Class_1_120145C7F86FE984*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::Class_1_7B005A18003A04C3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7B005A18003A04C3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_7B005A18003A04C3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B005A18003A04C3*))((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_120145C7F86FE984* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_120145C7F86FE984*))((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_120145C7F86FE984* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120145C7F86FE984*))((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_120145C7F86FE984_MERGEFROM_1_OFFSET))(this, a1);
	}
};
