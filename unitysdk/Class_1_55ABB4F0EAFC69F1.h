#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_55ABB4F0EAFC69F1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CD78C10)
#define CLASS_1_55ABB4F0EAFC69F1_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD78260)
#define CLASS_1_55ABB4F0EAFC69F1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD784D0)
#define CLASS_1_55ABB4F0EAFC69F1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD78470)
#define CLASS_1_55ABB4F0EAFC69F1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD785E0)
#define CLASS_1_55ABB4F0EAFC69F1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CD78EE0)
#define CLASS_1_55ABB4F0EAFC69F1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CD78E40)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CD783D0)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1CD78380)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_050E70FEDB783306_2_OFFSET UNITYSDK_OFFSET(0x1CD78400)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1CD782C0)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1CD78370)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x1CD783F0)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1CD782B0)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CD780D0)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x1CD78310)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CD783E0)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_8380E7BF9C2E481D_OFFSET UNITYSDK_OFFSET(0x1CD78320)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1CD78460)
#define CLASS_1_55ABB4F0EAFC69F1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1CD78450)
#define CLASS_1_55ABB4F0EAFC69F1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CD78130)
#define CLASS_1_55ABB4F0EAFC69F1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD788C0)
#define CLASS_1_55ABB4F0EAFC69F1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CD78920)
#define CLASS_1_55ABB4F0EAFC69F1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD790A0)
#define CLASS_1_55ABB4F0EAFC69F1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD781B0)
#define CLASS_1_55ABB4F0EAFC69F1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD78140)

inline static constexpr unsigned int Class_1_55ABB4F0EAFC69F1_TypeDefinitionIndex = 28480;

class Class_1_55ABB4F0EAFC69F1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_55ABB4F0EAFC69F1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_55ABB4F0EAFC69F1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_55ABB4F0EAFC69F1_TypeDefinitionIndex)->GetStaticField(0x2D920);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x7; // 0x0
	::System::String* Field_1_7; // 0x10
	::System::String* Field_1_8; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_9; // 0x20
	::Google::Protobuf::ByteString* Field_1_10; // 0x28
	::System::String* Field_1_11; // 0x30
	::System::UInt32 Field_1_12; // 0x38
	::System::Boolean Field_1_13; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_55ABB4F0EAFC69F1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_55ABB4F0EAFC69F1*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_55ABB4F0EAFC69F1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_55ABB4F0EAFC69F1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_55ABB4F0EAFC69F1* Clone()
	{
		return ((::Class_1_55ABB4F0EAFC69F1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_8380E7BF9C2E481D(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_8380E7BF9C2E481D_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_050E70FEDB783306_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_55ABB4F0EAFC69F1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_55ABB4F0EAFC69F1*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_55ABB4F0EAFC69F1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_55ABB4F0EAFC69F1*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_55ABB4F0EAFC69F1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
