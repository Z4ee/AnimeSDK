#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C74059A83466814F;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0319A031DCA9B495_18_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x196E2210)
#define CLASS_1_0319A031DCA9B495_18_CLONE_OFFSET UNITYSDK_OFFSET(0x196E1E10)
#define CLASS_1_0319A031DCA9B495_18_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x196E2000)
#define CLASS_1_0319A031DCA9B495_18_EQUALS_OFFSET UNITYSDK_OFFSET(0x196E1F20)
#define CLASS_1_0319A031DCA9B495_18_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x196E20B0)
#define CLASS_1_0319A031DCA9B495_18_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x196E2410)
#define CLASS_1_0319A031DCA9B495_18_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x196E2370)
#define CLASS_1_0319A031DCA9B495_18_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x196E1F00)
#define CLASS_1_0319A031DCA9B495_18_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x196E1EE0)
#define CLASS_1_0319A031DCA9B495_18_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x196E1D20)
#define CLASS_1_0319A031DCA9B495_18_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x196E1F10)
#define CLASS_1_0319A031DCA9B495_18_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x196E1EF0)
#define CLASS_1_0319A031DCA9B495_18_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x196E1ED0)
#define CLASS_1_0319A031DCA9B495_18_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x196E1EC0)
#define CLASS_1_0319A031DCA9B495_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x196E1D80)
#define CLASS_1_0319A031DCA9B495_18_TOSTRING_OFFSET UNITYSDK_OFFSET(0x196E20F0)
#define CLASS_1_0319A031DCA9B495_18_WRITETO_OFFSET UNITYSDK_OFFSET(0x196E2150)
#define CLASS_1_0319A031DCA9B495_18__CCTOR_OFFSET UNITYSDK_OFFSET(0x196E24E0)
#define CLASS_1_0319A031DCA9B495_18__CTOR_1_OFFSET UNITYSDK_OFFSET(0x196E1DA0)
#define CLASS_1_0319A031DCA9B495_18__CTOR_OFFSET UNITYSDK_OFFSET(0x196E1D90)

inline static constexpr unsigned int Class_1_0319A031DCA9B495_18_TypeDefinitionIndex = 31395;

class Class_1_0319A031DCA9B495_18 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_18*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_18*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0319A031DCA9B495_18_TypeDefinitionIndex)->GetStaticField(0x4C2B0);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_C74059A83466814F* Field_1_5; // 0x18
	::System::Int32 Field_1_3; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0319A031DCA9B495_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0319A031DCA9B495_18*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_18*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_0319A031DCA9B495_18*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0319A031DCA9B495_18* Clone()
	{
		return ((::Class_1_0319A031DCA9B495_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::Class_1_C74059A83466814F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C74059A83466814F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C74059A83466814F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0319A031DCA9B495_18* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0319A031DCA9B495_18*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0319A031DCA9B495_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0319A031DCA9B495_18*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0319A031DCA9B495_18_MERGEFROM_1_OFFSET))(this, a1);
	}
};
