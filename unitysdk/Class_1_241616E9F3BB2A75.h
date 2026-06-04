#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_18;
class Class_1_EF2D3B79941AF6F8;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_241616E9F3BB2A75_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A992100)
#define CLASS_1_241616E9F3BB2A75_CLONE_OFFSET UNITYSDK_OFFSET(0x1A991CB0)
#define CLASS_1_241616E9F3BB2A75_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A991EE0)
#define CLASS_1_241616E9F3BB2A75_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A991DD0)
#define CLASS_1_241616E9F3BB2A75_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A991FC0)
#define CLASS_1_241616E9F3BB2A75_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A992250)
#define CLASS_1_241616E9F3BB2A75_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A992190)
#define CLASS_1_241616E9F3BB2A75_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1A991DB0)
#define CLASS_1_241616E9F3BB2A75_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A991D90)
#define CLASS_1_241616E9F3BB2A75_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A991B90)
#define CLASS_1_241616E9F3BB2A75_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1A991DC0)
#define CLASS_1_241616E9F3BB2A75_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A991DA0)
#define CLASS_1_241616E9F3BB2A75_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A991BF0)
#define CLASS_1_241616E9F3BB2A75_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A992020)
#define CLASS_1_241616E9F3BB2A75_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A992080)
#define CLASS_1_241616E9F3BB2A75__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A992420)
#define CLASS_1_241616E9F3BB2A75__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A991C10)
#define CLASS_1_241616E9F3BB2A75__CTOR_OFFSET UNITYSDK_OFFSET(0x1A991C00)

inline static constexpr unsigned int Class_1_241616E9F3BB2A75_TypeDefinitionIndex = 25634;

class Class_1_241616E9F3BB2A75 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_241616E9F3BB2A75*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_241616E9F3BB2A75*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_241616E9F3BB2A75_TypeDefinitionIndex)->GetStaticField(0x65F30);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	::Class_1_21DCD4640D389503_18* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::Class_1_EF2D3B79941AF6F8* Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_241616E9F3BB2A75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_241616E9F3BB2A75*))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_241616E9F3BB2A75*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_241616E9F3BB2A75*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_241616E9F3BB2A75* Clone()
	{
		return ((::Class_1_241616E9F3BB2A75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_CLONE_OFFSET))(this);
	}

	::Class_1_EF2D3B79941AF6F8* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EF2D3B79941AF6F8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EF2D3B79941AF6F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF2D3B79941AF6F8*))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_21DCD4640D389503_18* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_21DCD4640D389503_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_21DCD4640D389503_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_18*))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_241616E9F3BB2A75* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_241616E9F3BB2A75*))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_241616E9F3BB2A75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_241616E9F3BB2A75*))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_241616E9F3BB2A75_MERGEFROM_1_OFFSET))(this, a1);
	}
};
