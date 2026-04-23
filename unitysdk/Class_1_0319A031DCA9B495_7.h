#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_00BAB2C33D444F88_10;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0319A031DCA9B495_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C03AF0)
#define CLASS_1_0319A031DCA9B495_7_CLONE_OFFSET UNITYSDK_OFFSET(0x19C03740)
#define CLASS_1_0319A031DCA9B495_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C038F0)
#define CLASS_1_0319A031DCA9B495_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C03830)
#define CLASS_1_0319A031DCA9B495_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C039A0)
#define CLASS_1_0319A031DCA9B495_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C03CF0)
#define CLASS_1_0319A031DCA9B495_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C03C50)
#define CLASS_1_0319A031DCA9B495_7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19C03810)
#define CLASS_1_0319A031DCA9B495_7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19C037F0)
#define CLASS_1_0319A031DCA9B495_7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19C037D0)
#define CLASS_1_0319A031DCA9B495_7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19C03670)
#define CLASS_1_0319A031DCA9B495_7_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19C03820)
#define CLASS_1_0319A031DCA9B495_7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19C03800)
#define CLASS_1_0319A031DCA9B495_7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19C037E0)
#define CLASS_1_0319A031DCA9B495_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C036A0)
#define CLASS_1_0319A031DCA9B495_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C039F0)
#define CLASS_1_0319A031DCA9B495_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C03A50)
#define CLASS_1_0319A031DCA9B495_7__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C03DD0)
#define CLASS_1_0319A031DCA9B495_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C036C0)
#define CLASS_1_0319A031DCA9B495_7__CTOR_OFFSET UNITYSDK_OFFSET(0x19C036B0)

inline static constexpr unsigned int Class_1_0319A031DCA9B495_7_TypeDefinitionIndex = 25892;

class Class_1_0319A031DCA9B495_7 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0319A031DCA9B495_7_TypeDefinitionIndex)->GetStaticField(0x55E70);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_00BAB2C33D444F88_10* Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0319A031DCA9B495_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0319A031DCA9B495_7*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0319A031DCA9B495_7* Clone()
	{
		return ((::Class_1_0319A031DCA9B495_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7_CLONE_OFFSET))(this);
	}

	::Class_1_00BAB2C33D444F88_10* Method_1_24748FC20F375725()
	{
		return ((::Class_1_00BAB2C33D444F88_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_00BAB2C33D444F88_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_00BAB2C33D444F88_10*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0319A031DCA9B495_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0319A031DCA9B495_7*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0319A031DCA9B495_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0319A031DCA9B495_7*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
