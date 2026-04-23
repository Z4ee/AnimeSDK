#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6FC4D75D938BC053_13;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_72_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x192E3820)
#define CLASS_1_355A2207C3B7A99D_72_CLONE_OFFSET UNITYSDK_OFFSET(0x192E34B0)
#define CLASS_1_355A2207C3B7A99D_72_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x192E3670)
#define CLASS_1_355A2207C3B7A99D_72_EQUALS_OFFSET UNITYSDK_OFFSET(0x192E35A0)
#define CLASS_1_355A2207C3B7A99D_72_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x192E3710)
#define CLASS_1_355A2207C3B7A99D_72_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x192E39A0)
#define CLASS_1_355A2207C3B7A99D_72_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x192E3880)
#define CLASS_1_355A2207C3B7A99D_72_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x192E3580)
#define CLASS_1_355A2207C3B7A99D_72_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x192E33A0)
#define CLASS_1_355A2207C3B7A99D_72_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x192E3590)
#define CLASS_1_355A2207C3B7A99D_72_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x192E3400)
#define CLASS_1_355A2207C3B7A99D_72_TOSTRING_OFFSET UNITYSDK_OFFSET(0x192E3760)
#define CLASS_1_355A2207C3B7A99D_72_WRITETO_OFFSET UNITYSDK_OFFSET(0x192E37C0)
#define CLASS_1_355A2207C3B7A99D_72__CCTOR_OFFSET UNITYSDK_OFFSET(0x192E3AD0)
#define CLASS_1_355A2207C3B7A99D_72__CTOR_1_OFFSET UNITYSDK_OFFSET(0x192E3420)
#define CLASS_1_355A2207C3B7A99D_72__CTOR_OFFSET UNITYSDK_OFFSET(0x192E3410)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_72_TypeDefinitionIndex = 30557;

class Class_1_355A2207C3B7A99D_72 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_72*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_72*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_72_TypeDefinitionIndex)->GetStaticField(0x5BF30);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	::Class_1_6FC4D75D938BC053_13* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_72__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_72* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_72*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_72__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_72__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_72*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_72*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_72_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_72_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_72* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_72*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_72_CLONE_OFFSET))(this);
	}

	::Class_1_6FC4D75D938BC053_13* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6FC4D75D938BC053_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_72_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6FC4D75D938BC053_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053_13*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_72_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_72_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_72* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_72*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_72_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_72_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_72_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_72_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_72_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_72* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_72*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_72_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_72_MERGEFROM_1_OFFSET))(this, a1);
	}
};
