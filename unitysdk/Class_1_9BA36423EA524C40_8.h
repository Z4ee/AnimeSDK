#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_51AD4A996C8C1E92_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9BA36423EA524C40_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A7CE8B0)
#define CLASS_1_9BA36423EA524C40_8_CLONE_OFFSET UNITYSDK_OFFSET(0x1A7CE560)
#define CLASS_1_9BA36423EA524C40_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A7CE700)
#define CLASS_1_9BA36423EA524C40_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A7CE630)
#define CLASS_1_9BA36423EA524C40_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A7CE7A0)
#define CLASS_1_9BA36423EA524C40_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A7CEA00)
#define CLASS_1_9BA36423EA524C40_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A7CE910)
#define CLASS_1_9BA36423EA524C40_8_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A7CE610)
#define CLASS_1_9BA36423EA524C40_8_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A7CE470)
#define CLASS_1_9BA36423EA524C40_8_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A7CE620)
#define CLASS_1_9BA36423EA524C40_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A7CE4D0)
#define CLASS_1_9BA36423EA524C40_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A7CE7F0)
#define CLASS_1_9BA36423EA524C40_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A7CE850)
#define CLASS_1_9BA36423EA524C40_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7CEC10)
#define CLASS_1_9BA36423EA524C40_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7CE4F0)
#define CLASS_1_9BA36423EA524C40_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7CE4E0)

inline static constexpr unsigned int Class_1_9BA36423EA524C40_8_TypeDefinitionIndex = 29573;

class Class_1_9BA36423EA524C40_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BA36423EA524C40_8_TypeDefinitionIndex)->GetStaticField(0x4BDC0);
	}
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_51AD4A996C8C1E92_2* Field_1_3; // 0x18

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

	::Class_1_51AD4A996C8C1E92_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_51AD4A996C8C1E92_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_51AD4A996C8C1E92_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_51AD4A996C8C1E92_2*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_8_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
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
