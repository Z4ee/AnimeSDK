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

#define CLASS_1_355A2207C3B7A99D_74_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19496C90)
#define CLASS_1_355A2207C3B7A99D_74_CLONE_OFFSET UNITYSDK_OFFSET(0x1948AEF0)
#define CLASS_1_355A2207C3B7A99D_74_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19496B30)
#define CLASS_1_355A2207C3B7A99D_74_EQUALS_OFFSET UNITYSDK_OFFSET(0x19496A60)
#define CLASS_1_355A2207C3B7A99D_74_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1948B280)
#define CLASS_1_355A2207C3B7A99D_74_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19496CF0)
#define CLASS_1_355A2207C3B7A99D_74_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1948B510)
#define CLASS_1_355A2207C3B7A99D_74_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19496A40)
#define CLASS_1_355A2207C3B7A99D_74_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19496960)
#define CLASS_1_355A2207C3B7A99D_74_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19496A50)
#define CLASS_1_355A2207C3B7A99D_74_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x194969C0)
#define CLASS_1_355A2207C3B7A99D_74_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19496BD0)
#define CLASS_1_355A2207C3B7A99D_74_WRITETO_OFFSET UNITYSDK_OFFSET(0x19496C30)
#define CLASS_1_355A2207C3B7A99D_74__CCTOR_OFFSET UNITYSDK_OFFSET(0x19496DD0)
#define CLASS_1_355A2207C3B7A99D_74__CTOR_1_OFFSET UNITYSDK_OFFSET(0x194969D0)
#define CLASS_1_355A2207C3B7A99D_74__CTOR_OFFSET UNITYSDK_OFFSET(0x1948B500)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_74_TypeDefinitionIndex = 30645;

class Class_1_355A2207C3B7A99D_74 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_74*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_74*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_74_TypeDefinitionIndex)->GetStaticField(0x4DC40);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_C74059A83466814F* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_74__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_74* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_74*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_74__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_74__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_74*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_74*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_74_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_74_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_74* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_74*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_74_CLONE_OFFSET))(this);
	}

	::Class_1_C74059A83466814F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C74059A83466814F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_74_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C74059A83466814F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_74_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_74_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_74* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_74*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_74_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_74_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_74_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_74_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_74_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_74* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_74*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_74_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_74_MERGEFROM_1_OFFSET))(this, a1);
	}
};
