#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_333B902B2174BECA_7;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9BA36423EA524C40_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEA4AC0)
#define CLASS_1_9BA36423EA524C40_14_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEA4420)
#define CLASS_1_9BA36423EA524C40_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEA46B0)
#define CLASS_1_9BA36423EA524C40_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEA4510)
#define CLASS_1_9BA36423EA524C40_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEA4980)
#define CLASS_1_9BA36423EA524C40_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEA4C20)
#define CLASS_1_9BA36423EA524C40_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEA4B20)
#define CLASS_1_9BA36423EA524C40_14_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1DEA44F0)
#define CLASS_1_9BA36423EA524C40_14_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DEA4310)
#define CLASS_1_9BA36423EA524C40_14_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1DEA4500)
#define CLASS_1_9BA36423EA524C40_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEA4370)
#define CLASS_1_9BA36423EA524C40_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEA49D0)
#define CLASS_1_9BA36423EA524C40_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEA4A30)
#define CLASS_1_9BA36423EA524C40_14__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA4E20)
#define CLASS_1_9BA36423EA524C40_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEA4390)
#define CLASS_1_9BA36423EA524C40_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA4380)

inline static constexpr unsigned int Class_1_9BA36423EA524C40_14_TypeDefinitionIndex = 34792;

class Class_1_9BA36423EA524C40_14 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_14*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_14*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BA36423EA524C40_14_TypeDefinitionIndex)->GetStaticField(0x23570);
	}
	// static const ::System::Int32 BNBFOJPGGJI = 0x3; // 0x0
	::Class_1_333B902B2174BECA_7* PFHLPOOHFAC; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9BA36423EA524C40_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_14*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_14__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_14__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_14*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_14*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_14_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9BA36423EA524C40_14* Clone()
	{
		return ((::Class_1_9BA36423EA524C40_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_14_CLONE_OFFSET))(this);
	}

	::Class_1_333B902B2174BECA_7* Method_1_24748FC20F375725()
	{
		return ((::Class_1_333B902B2174BECA_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_14_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_333B902B2174BECA_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_333B902B2174BECA_7*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_14_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9BA36423EA524C40_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9BA36423EA524C40_14*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9BA36423EA524C40_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_14*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
