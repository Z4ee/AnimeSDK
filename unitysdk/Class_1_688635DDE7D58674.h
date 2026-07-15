#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_23.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_688635DDE7D58674_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CBDD5A0)
#define CLASS_1_688635DDE7D58674_CLONE_OFFSET UNITYSDK_OFFSET(0x1CBDCF60)
#define CLASS_1_688635DDE7D58674_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CBDD160)
#define CLASS_1_688635DDE7D58674_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CBDD0B0)
#define CLASS_1_688635DDE7D58674_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CBDD280)
#define CLASS_1_688635DDE7D58674_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CBDD800)
#define CLASS_1_688635DDE7D58674_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CBDD7A0)
#define CLASS_1_688635DDE7D58674_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CBDD090)
#define CLASS_1_688635DDE7D58674_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CBDCE20)
#define CLASS_1_688635DDE7D58674_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x1CBDD030)
#define CLASS_1_688635DDE7D58674_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1CBDD020)
#define CLASS_1_688635DDE7D58674_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CBDD0A0)
#define CLASS_1_688635DDE7D58674_METHOD_1_8380E7BF9C2E481D_OFFSET UNITYSDK_OFFSET(0x1CBDD040)
#define CLASS_1_688635DDE7D58674_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1CBDD010)
#define CLASS_1_688635DDE7D58674_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CBDCE80)
#define CLASS_1_688635DDE7D58674_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CBDD3B0)
#define CLASS_1_688635DDE7D58674_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CBDD410)
#define CLASS_1_688635DDE7D58674__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBDD9D0)
#define CLASS_1_688635DDE7D58674__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBDCEE0)
#define CLASS_1_688635DDE7D58674__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDCE90)

inline static constexpr unsigned int Class_1_688635DDE7D58674_TypeDefinitionIndex = 30772;

class Class_1_688635DDE7D58674 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_688635DDE7D58674*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_688635DDE7D58674*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_688635DDE7D58674_TypeDefinitionIndex)->GetStaticField(0x25B20);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Google::Protobuf::ByteString* Field_1_5; // 0x18
	::Enum_3_ED790DAC948A65A9_23 Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_688635DDE7D58674* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_688635DDE7D58674*))((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_688635DDE7D58674*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_688635DDE7D58674*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_688635DDE7D58674* Clone()
	{
		return ((::Class_1_688635DDE7D58674*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674_CLONE_OFFSET))(this);
	}

	::Enum_3_ED790DAC948A65A9_23 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_ED790DAC948A65A9_23(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_ED790DAC948A65A9_23 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_23))((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_8380E7BF9C2E481D(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674_METHOD_1_8380E7BF9C2E481D_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_688635DDE7D58674* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_688635DDE7D58674*))((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_688635DDE7D58674* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_688635DDE7D58674*))((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_688635DDE7D58674_MERGEFROM_1_OFFSET))(this, a1);
	}
};
