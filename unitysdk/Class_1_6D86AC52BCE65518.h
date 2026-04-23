#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629_12;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6D86AC52BCE65518_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19D2CFB0)
#define CLASS_1_6D86AC52BCE65518_CLONE_OFFSET UNITYSDK_OFFSET(0x19D2CB80)
#define CLASS_1_6D86AC52BCE65518_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19D2CD70)
#define CLASS_1_6D86AC52BCE65518_EQUALS_OFFSET UNITYSDK_OFFSET(0x19D2CCA0)
#define CLASS_1_6D86AC52BCE65518_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19D2CE40)
#define CLASS_1_6D86AC52BCE65518_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19D2D1C0)
#define CLASS_1_6D86AC52BCE65518_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19D2D100)
#define CLASS_1_6D86AC52BCE65518_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19D2CC60)
#define CLASS_1_6D86AC52BCE65518_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19D2CC40)
#define CLASS_1_6D86AC52BCE65518_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19D2CC80)
#define CLASS_1_6D86AC52BCE65518_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19D2CAA0)
#define CLASS_1_6D86AC52BCE65518_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19D2CC70)
#define CLASS_1_6D86AC52BCE65518_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19D2CC50)
#define CLASS_1_6D86AC52BCE65518_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19D2CC90)
#define CLASS_1_6D86AC52BCE65518_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19D2CC30)
#define CLASS_1_6D86AC52BCE65518_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19D2CC20)
#define CLASS_1_6D86AC52BCE65518_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19D2CAD0)
#define CLASS_1_6D86AC52BCE65518_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19D2CE80)
#define CLASS_1_6D86AC52BCE65518_WRITETO_OFFSET UNITYSDK_OFFSET(0x19D2CEE0)
#define CLASS_1_6D86AC52BCE65518__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D2D2A0)
#define CLASS_1_6D86AC52BCE65518__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19D2CAF0)
#define CLASS_1_6D86AC52BCE65518__CTOR_OFFSET UNITYSDK_OFFSET(0x19D2CAE0)

inline static constexpr unsigned int Class_1_6D86AC52BCE65518_TypeDefinitionIndex = 27057;

class Class_1_6D86AC52BCE65518 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_6D86AC52BCE65518*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6D86AC52BCE65518*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6D86AC52BCE65518_TypeDefinitionIndex)->GetStaticField(0x69B90);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_C9DFE5EE7107C629_12* Field_1_9; // 0x18
	::System::Boolean Field_1_3; // 0x20
	::System::UInt32 Field_1_5; // 0x24
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6D86AC52BCE65518* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6D86AC52BCE65518*))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6D86AC52BCE65518*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6D86AC52BCE65518*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6D86AC52BCE65518* Clone()
	{
		return ((::Class_1_6D86AC52BCE65518*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Class_1_C9DFE5EE7107C629_12* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C9DFE5EE7107C629_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C9DFE5EE7107C629_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_12*))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6D86AC52BCE65518* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6D86AC52BCE65518*))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6D86AC52BCE65518* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6D86AC52BCE65518*))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6D86AC52BCE65518_MERGEFROM_1_OFFSET))(this, a1);
	}
};
