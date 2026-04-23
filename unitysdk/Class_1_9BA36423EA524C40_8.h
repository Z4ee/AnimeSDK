#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_766E1CF11E204F43_6;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9BA36423EA524C40_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19BFB170)
#define CLASS_1_9BA36423EA524C40_8_CLONE_OFFSET UNITYSDK_OFFSET(0x19BFAE20)
#define CLASS_1_9BA36423EA524C40_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19BFAFC0)
#define CLASS_1_9BA36423EA524C40_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x19BFAEF0)
#define CLASS_1_9BA36423EA524C40_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19BFB060)
#define CLASS_1_9BA36423EA524C40_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19BFB2C0)
#define CLASS_1_9BA36423EA524C40_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19BFB1D0)
#define CLASS_1_9BA36423EA524C40_8_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19BFAED0)
#define CLASS_1_9BA36423EA524C40_8_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19BFAD30)
#define CLASS_1_9BA36423EA524C40_8_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19BFAEE0)
#define CLASS_1_9BA36423EA524C40_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19BFAD90)
#define CLASS_1_9BA36423EA524C40_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19BFB0B0)
#define CLASS_1_9BA36423EA524C40_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x19BFB110)
#define CLASS_1_9BA36423EA524C40_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BFB400)
#define CLASS_1_9BA36423EA524C40_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BFADB0)
#define CLASS_1_9BA36423EA524C40_8__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFADA0)

inline static constexpr unsigned int Class_1_9BA36423EA524C40_8_TypeDefinitionIndex = 29594;

class Class_1_9BA36423EA524C40_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BA36423EA524C40_8_TypeDefinitionIndex)->GetStaticField(0x55550);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_766E1CF11E204F43_6* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9BA36423EA524C40_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_8*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_8*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9BA36423EA524C40_8* Clone()
	{
		return ((::Class_1_9BA36423EA524C40_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_CLONE_OFFSET))(this);
	}

	::Class_1_766E1CF11E204F43_6* Method_1_24748FC20F375725()
	{
		return ((::Class_1_766E1CF11E204F43_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_766E1CF11E204F43_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_6*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9BA36423EA524C40_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9BA36423EA524C40_8*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9BA36423EA524C40_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_8*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
