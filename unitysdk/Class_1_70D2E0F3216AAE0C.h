#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6FC4D75D938BC053_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_70D2E0F3216AAE0C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x193A3870)
#define CLASS_1_70D2E0F3216AAE0C_CLONE_OFFSET UNITYSDK_OFFSET(0x193A3380)
#define CLASS_1_70D2E0F3216AAE0C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x193A3630)
#define CLASS_1_70D2E0F3216AAE0C_EQUALS_OFFSET UNITYSDK_OFFSET(0x193A3510)
#define CLASS_1_70D2E0F3216AAE0C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193A3720)
#define CLASS_1_70D2E0F3216AAE0C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193A3B10)
#define CLASS_1_70D2E0F3216AAE0C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193A3970)
#define CLASS_1_70D2E0F3216AAE0C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x193A34B0)
#define CLASS_1_70D2E0F3216AAE0C_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x193A34F0)
#define CLASS_1_70D2E0F3216AAE0C_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x193A34D0)
#define CLASS_1_70D2E0F3216AAE0C_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x193A3220)
#define CLASS_1_70D2E0F3216AAE0C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x193A34C0)
#define CLASS_1_70D2E0F3216AAE0C_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x193A3500)
#define CLASS_1_70D2E0F3216AAE0C_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x193A34E0)
#define CLASS_1_70D2E0F3216AAE0C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193A3280)
#define CLASS_1_70D2E0F3216AAE0C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193A3770)
#define CLASS_1_70D2E0F3216AAE0C_WRITETO_OFFSET UNITYSDK_OFFSET(0x193A37D0)
#define CLASS_1_70D2E0F3216AAE0C__CCTOR_OFFSET UNITYSDK_OFFSET(0x193A3D40)
#define CLASS_1_70D2E0F3216AAE0C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193A32A0)
#define CLASS_1_70D2E0F3216AAE0C__CTOR_OFFSET UNITYSDK_OFFSET(0x193A3290)

inline static constexpr unsigned int Class_1_70D2E0F3216AAE0C_TypeDefinitionIndex = 24420;

class Class_1_70D2E0F3216AAE0C : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_70D2E0F3216AAE0C*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_70D2E0F3216AAE0C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70D2E0F3216AAE0C_TypeDefinitionIndex)->GetStaticField(0x3C270);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_6FC4D75D938BC053_1* Field_1_5; // 0x18
	::Class_1_6FC4D75D938BC053_1* Field_1_7; // 0x20
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_70D2E0F3216AAE0C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70D2E0F3216AAE0C*))((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_70D2E0F3216AAE0C*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_70D2E0F3216AAE0C*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_70D2E0F3216AAE0C* Clone()
	{
		return ((::Class_1_70D2E0F3216AAE0C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_6FC4D75D938BC053_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6FC4D75D938BC053_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6FC4D75D938BC053_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053_1*))((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_6FC4D75D938BC053_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_6FC4D75D938BC053_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_6FC4D75D938BC053_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053_1*))((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_70D2E0F3216AAE0C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_70D2E0F3216AAE0C*))((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_70D2E0F3216AAE0C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70D2E0F3216AAE0C*))((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_70D2E0F3216AAE0C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
