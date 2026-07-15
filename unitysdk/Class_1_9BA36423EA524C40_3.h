#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_18;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9BA36423EA524C40_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C7C6220)
#define CLASS_1_9BA36423EA524C40_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1C7C5BE0)
#define CLASS_1_9BA36423EA524C40_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C7C5E10)
#define CLASS_1_9BA36423EA524C40_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C7C5CA0)
#define CLASS_1_9BA36423EA524C40_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C7C60E0)
#define CLASS_1_9BA36423EA524C40_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C7C6390)
#define CLASS_1_9BA36423EA524C40_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C7C6280)
#define CLASS_1_9BA36423EA524C40_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C7C5C80)
#define CLASS_1_9BA36423EA524C40_3_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C7C5B00)
#define CLASS_1_9BA36423EA524C40_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C7C5C90)
#define CLASS_1_9BA36423EA524C40_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C7C5B30)
#define CLASS_1_9BA36423EA524C40_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C7C6130)
#define CLASS_1_9BA36423EA524C40_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C7C6190)
#define CLASS_1_9BA36423EA524C40_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7C65A0)
#define CLASS_1_9BA36423EA524C40_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C7C5B50)
#define CLASS_1_9BA36423EA524C40_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C5B40)

inline static constexpr unsigned int Class_1_9BA36423EA524C40_3_TypeDefinitionIndex = 26393;

class Class_1_9BA36423EA524C40_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BA36423EA524C40_3_TypeDefinitionIndex)->GetStaticField(0x292A0);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_21DCD4640D389503_18* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9BA36423EA524C40_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_3*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_3*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_3_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9BA36423EA524C40_3* Clone()
	{
		return ((::Class_1_9BA36423EA524C40_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_3_CLONE_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_18* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21DCD4640D389503_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21DCD4640D389503_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_18*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9BA36423EA524C40_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9BA36423EA524C40_3*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9BA36423EA524C40_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_3*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
