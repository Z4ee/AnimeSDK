#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_24.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_66B87A6568B00E38_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E83CD50)
#define CLASS_1_66B87A6568B00E38_CLONE_OFFSET UNITYSDK_OFFSET(0x1E83C750)
#define CLASS_1_66B87A6568B00E38_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E83C910)
#define CLASS_1_66B87A6568B00E38_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E83C880)
#define CLASS_1_66B87A6568B00E38_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E83CA30)
#define CLASS_1_66B87A6568B00E38_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E83CFB0)
#define CLASS_1_66B87A6568B00E38_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E83CF50)
#define CLASS_1_66B87A6568B00E38_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E83C840)
#define CLASS_1_66B87A6568B00E38_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x1E83C7E0)
#define CLASS_1_66B87A6568B00E38_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1E83C870)
#define CLASS_1_66B87A6568B00E38_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E83C640)
#define CLASS_1_66B87A6568B00E38_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E83C850)
#define CLASS_1_66B87A6568B00E38_METHOD_1_8380E7BF9C2E481D_OFFSET UNITYSDK_OFFSET(0x1E83C7F0)
#define CLASS_1_66B87A6568B00E38_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1E83C860)
#define CLASS_1_66B87A6568B00E38_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E83C670)
#define CLASS_1_66B87A6568B00E38_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E83CB60)
#define CLASS_1_66B87A6568B00E38_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E83CBC0)
#define CLASS_1_66B87A6568B00E38__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E83D180)
#define CLASS_1_66B87A6568B00E38__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E83C6D0)
#define CLASS_1_66B87A6568B00E38__CTOR_OFFSET UNITYSDK_OFFSET(0x1E83C680)

inline static constexpr unsigned int Class_1_66B87A6568B00E38_TypeDefinitionIndex = 31513;

class Class_1_66B87A6568B00E38 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_66B87A6568B00E38*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_66B87A6568B00E38*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66B87A6568B00E38_TypeDefinitionIndex)->GetStaticField(0x32860);
	}
	// static const ::System::Int32 LJFDLELNKKB = 0x1; // 0x0
	// static const ::System::Int32 EOEGCOAGEAI = 0x7; // 0x0
	// static const ::System::Int32 ELFGGGHJCFC = 0x6; // 0x0
	::Google::Protobuf::ByteString* BIGJIHHEEOC; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Enum_3_ED790DAC948A65A9_24 ADOPAOCMEOG; // 0x20
	::System::UInt32 GAKLHAGDGDE; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_66B87A6568B00E38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66B87A6568B00E38*))((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_66B87A6568B00E38*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_66B87A6568B00E38*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_66B87A6568B00E38* Clone()
	{
		return ((::Class_1_66B87A6568B00E38*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_8380E7BF9C2E481D(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38_METHOD_1_8380E7BF9C2E481D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_24 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_ED790DAC948A65A9_24(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_ED790DAC948A65A9_24 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_24))((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_66B87A6568B00E38* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_66B87A6568B00E38*))((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_66B87A6568B00E38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66B87A6568B00E38*))((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_66B87A6568B00E38_MERGEFROM_1_OFFSET))(this, a1);
	}
};
