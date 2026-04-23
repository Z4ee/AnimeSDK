#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_53763D498DB8321D_7;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9BA36423EA524C40_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19373470)
#define CLASS_1_9BA36423EA524C40_12_CLONE_OFFSET UNITYSDK_OFFSET(0x19373170)
#define CLASS_1_9BA36423EA524C40_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x193732C0)
#define CLASS_1_9BA36423EA524C40_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x19373210)
#define CLASS_1_9BA36423EA524C40_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19373360)
#define CLASS_1_9BA36423EA524C40_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193735C0)
#define CLASS_1_9BA36423EA524C40_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193734D0)
#define CLASS_1_9BA36423EA524C40_12_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x193731F0)
#define CLASS_1_9BA36423EA524C40_12_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x193730B0)
#define CLASS_1_9BA36423EA524C40_12_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19373200)
#define CLASS_1_9BA36423EA524C40_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193730E0)
#define CLASS_1_9BA36423EA524C40_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193733B0)
#define CLASS_1_9BA36423EA524C40_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x19373410)
#define CLASS_1_9BA36423EA524C40_12__CCTOR_OFFSET UNITYSDK_OFFSET(0x19373700)
#define CLASS_1_9BA36423EA524C40_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19373100)
#define CLASS_1_9BA36423EA524C40_12__CTOR_OFFSET UNITYSDK_OFFSET(0x193730F0)

inline static constexpr unsigned int Class_1_9BA36423EA524C40_12_TypeDefinitionIndex = 30910;

class Class_1_9BA36423EA524C40_12 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_12*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BA36423EA524C40_12_TypeDefinitionIndex)->GetStaticField(0x32F40);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	::Class_1_53763D498DB8321D_7* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_12__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9BA36423EA524C40_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_12*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_12__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_12__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_12*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_12*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_12_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9BA36423EA524C40_12* Clone()
	{
		return ((::Class_1_9BA36423EA524C40_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_12_CLONE_OFFSET))(this);
	}

	::Class_1_53763D498DB8321D_7* Method_1_24748FC20F375725()
	{
		return ((::Class_1_53763D498DB8321D_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_12_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_53763D498DB8321D_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D_7*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_12_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_12_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9BA36423EA524C40_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9BA36423EA524C40_12*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_12_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_12_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_12_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_12_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_12_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9BA36423EA524C40_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_12*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_12_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_12_MERGEFROM_1_OFFSET))(this, a1);
	}
};
