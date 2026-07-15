#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_82;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9BA36423EA524C40_11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C97A330)
#define CLASS_1_9BA36423EA524C40_11_CLONE_OFFSET UNITYSDK_OFFSET(0x1C979C40)
#define CLASS_1_9BA36423EA524C40_11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C979ED0)
#define CLASS_1_9BA36423EA524C40_11_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C979D30)
#define CLASS_1_9BA36423EA524C40_11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C97A1A0)
#define CLASS_1_9BA36423EA524C40_11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C97A460)
#define CLASS_1_9BA36423EA524C40_11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C97A390)
#define CLASS_1_9BA36423EA524C40_11_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C979D10)
#define CLASS_1_9BA36423EA524C40_11_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C979B30)
#define CLASS_1_9BA36423EA524C40_11_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C979D20)
#define CLASS_1_9BA36423EA524C40_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C979B90)
#define CLASS_1_9BA36423EA524C40_11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C97A240)
#define CLASS_1_9BA36423EA524C40_11_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C97A2A0)
#define CLASS_1_9BA36423EA524C40_11__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C97A630)
#define CLASS_1_9BA36423EA524C40_11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C979BB0)
#define CLASS_1_9BA36423EA524C40_11__CTOR_OFFSET UNITYSDK_OFFSET(0x1C979BA0)

inline static constexpr unsigned int Class_1_9BA36423EA524C40_11_TypeDefinitionIndex = 31279;

class Class_1_9BA36423EA524C40_11 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_11*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BA36423EA524C40_11_TypeDefinitionIndex)->GetStaticField(0x25780);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_D40936EF3BF54118_82* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_11__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9BA36423EA524C40_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_11*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_11__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_11__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_11*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_11*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_11_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9BA36423EA524C40_11* Clone()
	{
		return ((::Class_1_9BA36423EA524C40_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_11_CLONE_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_82* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D40936EF3BF54118_82*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_11_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D40936EF3BF54118_82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_82*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_11_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_11_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9BA36423EA524C40_11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9BA36423EA524C40_11*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_11_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_11_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_11_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_11_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_11_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9BA36423EA524C40_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_11*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_11_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_11_MERGEFROM_1_OFFSET))(this, a1);
	}
};
