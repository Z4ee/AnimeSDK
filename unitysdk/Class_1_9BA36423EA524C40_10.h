#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638_83;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9BA36423EA524C40_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A0B1090)
#define CLASS_1_9BA36423EA524C40_10_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0B0D20)
#define CLASS_1_9BA36423EA524C40_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A0B0EE0)
#define CLASS_1_9BA36423EA524C40_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0B0E10)
#define CLASS_1_9BA36423EA524C40_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0B0F80)
#define CLASS_1_9BA36423EA524C40_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A0B11C0)
#define CLASS_1_9BA36423EA524C40_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A0B10F0)
#define CLASS_1_9BA36423EA524C40_10_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A0B0DF0)
#define CLASS_1_9BA36423EA524C40_10_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A0B0C10)
#define CLASS_1_9BA36423EA524C40_10_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A0B0E00)
#define CLASS_1_9BA36423EA524C40_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0B0C70)
#define CLASS_1_9BA36423EA524C40_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A0B0FD0)
#define CLASS_1_9BA36423EA524C40_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A0B1030)
#define CLASS_1_9BA36423EA524C40_10__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0B1390)
#define CLASS_1_9BA36423EA524C40_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0B0C90)
#define CLASS_1_9BA36423EA524C40_10__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B0C80)

inline static constexpr unsigned int Class_1_9BA36423EA524C40_10_TypeDefinitionIndex = 30688;

class Class_1_9BA36423EA524C40_10 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_10*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BA36423EA524C40_10_TypeDefinitionIndex)->GetStaticField(0x38900);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_455008579EB95638_83* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9BA36423EA524C40_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_10*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_10__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_10__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_10*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_10*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_10_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9BA36423EA524C40_10* Clone()
	{
		return ((::Class_1_9BA36423EA524C40_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_10_CLONE_OFFSET))(this);
	}

	::Class_1_455008579EB95638_83* Method_1_24748FC20F375725()
	{
		return ((::Class_1_455008579EB95638_83*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_10_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_455008579EB95638_83* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_83*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_10_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9BA36423EA524C40_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9BA36423EA524C40_10*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9BA36423EA524C40_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_10*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};
